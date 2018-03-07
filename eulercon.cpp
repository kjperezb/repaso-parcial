#include <iostream>
#include <cmath>

const double eps=pow(10,-6);
const double x=-177;
void expo(double X);
double fact(int N0);
double term(double X1, int N1);

int main(){
  expo(x);
  return 0;
}

void expo(double X){
  double sum=0.0,termino0,err,z,w,u,expx;
  int m;
  int N=0;

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
  
  do{
    termino0=pow(u,N)/fact(N);
    sum+=termino0;
    expx=std::pow(2,m)*sum;
    
    err=std::abs((expx-std::exp(X))/std::exp(X));
    std::cout<<N<<" "<<expx<<" "<<err<<std::endl;
    N++;
  }
while(std::abs(termino0)>=eps);
}


/*double term(double X1,int N1){
  double t;
  
  if(N1==0) t=1;
  else {t=term(X1,N1-1)*X1/N1;}

  return t;
  
  }*/

double fact(int N0){
  if(N0==0) return 1;
  return N0*fact(N0-1);
}

/*
double exp1(double X2, int N2){
  double sum1=0.0;
 
}

double exp2(double X3, int N3){

}*/
