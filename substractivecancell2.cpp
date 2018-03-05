#include <iostream>
#include <cmath>

const int N=20;

double sup(int N0);
double sdown(int N1);

int main(){

double sumup,sumdown;
for(int k=1;k<=N;k++){
sumup=sup(N);
sumdown=sdown(N);
std::cout<<k<<" "<<sumup<<" "<<sumdown<<std::endl;
}
return 0;
}

double sup(int N0){
double up=0.0;
for(double i=1.0;i<=N0;i++){
up+=1/i;
}
return up;
}

double sdown(int N1){
double down=0.0;
 for(double j=N1;j>=1.0;j++){
 down+=1/j;
 }
 return down;
}
