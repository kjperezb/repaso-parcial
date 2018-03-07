#include <iostream>
#include <cmath>

double sumtan(double n);
 double pi=std::atan2(0,-1);
int main(){
  double sum,term;
   for(double i=1.0;i<=100.0;i++){
     sum=sumtan(i);
     term=1/(2*i+1)+2/pi*sum;

     std::cout<<"p"<<i<<" "<<term<<std::endl;
   }
  return 0;

}
   double sumtan(double n){
     double sum1=0.0,term1;
 for(double j=1.0;j<=n;j++){
   term1=1.0/j*std::tan(pi*j/(2*n+1));
   sum1+=term1;
  

 }
 return sum1;
   }
