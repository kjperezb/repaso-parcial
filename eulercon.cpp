#include <iostream>
#include <cmath>

const double eps=pow(10,-6);
const double x=-177;
void expo(double X);
double fact(int N0);
//double term(double X1, int N1);

int main(){
  expo(x);
  return 0;
}

void expo(double X){
  double sum=0.0,termino0,err,z,w,u,expx,s;
  int m;
 

  z=x/(std::log(2));
  if(x>=0){
    if(((z+0.5)-std::floor(z+0.5))>0.5){
      m=std::ceil(z+0.5);}
    else m=std::floor(z+0.5);
    }
  else {
    if(((z-0.5)-std::floor(z-0.5))>0.5){
      m=std::ceil(z-0.5);}
    else m=std::floor(z-0.5);
  }
  w=z-m;
  u=w*std::log(2);
  s=2+u*u*(2520+28*u*u)/(15120+420*u*u+std::pow(u,4));
  sum=(s+u)/(s-u);
    expx=std::pow(2,m)*sum;
    
    err=std::abs((expx-std::exp(X))/std::exp(X));
    std::cout<<expx<<" "<<err<<std::endl;
   
}



double fact(int N0){
  if(N0==0) return 1;
  return N0*fact(N0-1);
}
