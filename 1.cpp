#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <omp.h>

void init_matrix(double * a, double * b, double * c, int n);
void serial_multiply_matrix(double * a, double * b, double * c, int n);
void test_multiplication(double * a, double * b, double * c, int n);
void fcero(double *c,int n); 




int main(int argc, char **argv){
  int n = 0;
 if(argc != 2) {
  std::cerr << "Usage: " << argv[0] << " matrix_size" << std::endl;
 exit(EXIT_FAILURE);
 }
n = std::atoi(argv[1]);
if ( n > 0) {
  std::cout << "Matrix size is : " << n << std::endl;
 }
 else {
   std::cerr << "Error, given matrix size is : " << n << std::endl;
   exit(EXIT_FAILURE); }
 
// get memeory
 double *a = new double [n*n];
 double *b = new double [n*n];
double *c = new double [n*n];
 if ( a == nullptr || b == nullptr || c == nullptr) {
  std::cerr << "Not enough memory!\n";
 exit(EXIT_FAILURE);
 }


 
// start timing
 double t=0.0;
 for(int i=1;i<=20;i++){
  fcero(c,n);
  double t1=omp_get_wtime();
  serial_multiply_matrix(a, b, c, n);
  double t2=omp_get_wtime();
  t+=t2-t1;
  
 }

   std::cout<<t/10<<std::endl;
 //time stop timing
 test_multiplication(a, b, c, n);
// release memory
 delete [] a ;
 delete [] b ;
 delete [] c ;
 return 0;
}
void init_matrix(double * a, double * b, double * c, int n)
{
#pragma omp parallel for 
  for (int i=0; i<n; i++)
    for (int j=0; j<n; j++) {
  a[i*n + j] = ((double)rand())/((double)RAND_MAX);
 b[i*n + j] = ((double)rand())/((double)RAND_MAX);
 c[i*n + j] = 0.0;
 }
}
void serial_multiply_matrix(double * a, double * b, double * c, int n)
{
#pragma omp parallel for
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      for (int k=0; k<n; k++) {
	c[i*n+j]+= a[i*n + k]*b[k*n + j];
      }
    }
  }
}




void test_multiplication(double * a, double * b, double * c, int n)
{
//check a random element
int i = rand()%n;
int j = rand()%n;
double d = 0.0;
for (int k=0; k<n; k++) {
d += a[i*n + k]*b[k*n + j];
}
std::printf("Check on a random element: %18.9le\n", fabs(d-c[i*n + j]));
}


void fcero(double *c, int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      c[i*n+j]+=0.0;
    }
  }


}
