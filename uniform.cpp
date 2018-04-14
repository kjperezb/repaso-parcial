#include <iostream>
#include <cmath>
#include <random>

const double xmin=1.0;
const double xmax=2.0;

const int nn=10000;
const int ni=10;

const int s=1;

int main(){
  double dx;
  double num;
  double x[ni+1],fr[ni];
  
  dx=(xmax-xmin)/ni;

 for(int j=0;j<=ni;j++){
     x[j]=1.0+dx*j;
     fr[j]=0;
     //std::cout<<x[j]<<std::endl;
   }
 x[0]=xmin;


   std::mt19937 gen(s);

   std::uniform_real_distribution<> dis(xmin,xmax);

   for(int i=1;i<=nn;++i){
     num=dis(gen);

     for(int ii=0;ii<ni;ii++){
       if((num-x[ii])<dx)
	 fr[ii]+=1;
    }

   }

   for(int m=0;m<ni;m++){

     std::cout<<x[m]<<"-"<<x[m+1]<<" "<<fr[m]-fr[m-1]<<std::endl;
       }
}
