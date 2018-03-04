#include <iostream>
#include <cmath>

double sumr(double X0, double N0);
double sumf(double X, double N);
double term(double Xt, double Nt);
double fact(double N1);

const double n=10;

int main(){

 double sinxf=0.0;
 double sinxr=0.0;
 double x;
 double err,erf;

std::cout<<"Introduzca un x\n";
std::cin>>x;

std::cout.precision(16);
std::cout.setf(std::ios::scientific);

  for(int i=1;i<=n;i++){
    sinxf=sumf(x,i);
    sinxr=sumr(x,i);
    err=std::abs(sinxf-std::sin(x))/(std::sin(x));
    erf=std::abs(sinxr-std::sin(x))/(std::sin(x));
    std::cout<<i<<" "<<sinxf<<" "<<sinxr<<" "<<err<<" "<<erf<<std::endl;
   }

return 0;
}



double sumf(double X, double N){
 double termino,suma=0;
 double factorial;

 for(int j=1;j<=N;j++){
  factorial=fact(2*j-1);
  termino=(std::pow(-1,j-1)*std::pow(X,2*j-1))/factorial;
  suma+=termino;
  }

return suma;
}

double sumr(double X0, double N0){

double suma0=0.0,termino0;
for(int k=1;k<=N0;k++){
termino0=term(X0,k);
suma0+=termino0;
}
return suma0;
}

double fact(double N1){
if(N1==0) return 1.0;
else return N1*fact(N1-1);
}

double term(double Xt, double Nt){
 double m;
if (Nt==1) {m=Xt;}
else {m=(term(Xt,Nt-1)*std::pow(Xt,2)*(-1))/((2*Nt-1)*(2*Nt-2));}
return m;
}
