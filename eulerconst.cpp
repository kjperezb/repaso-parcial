#include <iostream>
#include <cmath>

double harmonic(int N1);
//double lognat(int N2);

int main(){
double shar=0.0;
//double slog=0.0;
double euler=0.0;

for(int i=1;i<=100000;i++){
shar=harmonic(i);
//slog=lognat(i);
euler=shar-std::log(i);
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


/*double lognat(int N2){
double sumlog=0.0;

for(int k=1;k<=N2;k++){
sumlog+=(std::log(k));
}
return sumlog;
}*/
