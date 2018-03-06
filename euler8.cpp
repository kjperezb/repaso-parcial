#include <iostream>
#include <cmath>

double harmonic(int N1);

int main(){
double shar=0.0;
double euler=0.0;

for(int i=1;i<=5000;i++){
shar=harmonic(i);
euler=shar-std::log(i+1/2);
if((i%100)==0){
std::cout<<i<<" "<<euler<<" "<<shar<<std::endl;
}
}
return 0;
}


double harmonic(int N1){
double sumhar=0.0;

for(double j=1;j<=N1;j++){
sumhar+=1/j;
}
return sumhar;
}


