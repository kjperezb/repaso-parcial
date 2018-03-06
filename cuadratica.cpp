#include <iostream>
#include <cmath>
#include <complex>
#include <iomanip>

using namespace std::complex_literals;
const double a=1.0,b=0.0,c=1.0;
void cuadraticaim(double a2, double b2, double c2);
void cuadratica1(double a1, double b1, double c1);
void cuadratica2(double A, double B, double C);

int main(){

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  if(a==0 && b==0)
   std::cout<<"La ecuacion no es consistente\n";
  else{

  if((b*b-4*a*c)>=0){
  cuadratica1(a,b,c);
  cuadratica2(a,b,c);
   }

  else
  cuadraticaim(a,b,c);
}
  return 0;
}

void cuadratica1(double a1, double b1, double c1){

  double x11,x21,res11,res21;
  res11=a1*x11*x11+b1*x11+c1;
  res21=a1*x21*x21+b1*x21+c1;

  x11=(-b1+std::sqrt(b1*b1-4*a1*c1))/(2*a1);
  x21=(-b1-std::sqrt(b1*b1-4*a1*c1))/(2*a1);
  std::cout<<x11<<" "<<res11<<" "<<x21<<" "<<res21<<std::endl;

}

void cuadratica2(double A, double B, double C){

  double x12,x22,res12,res22;

  x12=(-2*C)/(B+std::sqrt(B*B-4*A*C));
  x22=(-2*C)/(B-std::sqrt(B*B-4*A*C));

  res12=A*x12*x12+B*x12+C;
  res22=A*x22*x22+B*x22+C;

  std::cout<<x12<<" "<<res12<<" "<<x22<<" "<<res22<<std::endl;
}

void cuadraticaim(double a2, double b2, double c2){
 double xir,xic;

 xir=(-b2/(2*a2));
 xic=(std::sqrt(-b2*b2+4*a2*c2))/(2*a2);

 std::complex<double> xi1=(xir,xic);
 std::complex<double> xi2=(xir,-xic);
 std::complex<double> resi1=a2*xi1*xi1+b2*xi1+c2;
 std::complex<double> resi2=a2*xi2*xi2+b2*xi2+c2;
 std::cout<<xi1<<" "<<xi2<<std::endl;
 std::cout<<resi1<<" "<<resi2<<std::endl;
}
