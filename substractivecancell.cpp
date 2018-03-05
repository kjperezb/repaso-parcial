#include <iostream>
#include <cmath>

const int N=20;
double SN1(int N1);
double SN21(int N21);
double SN22(int N22);
double SN3(int N3);

int main(){
 double sum1=0.0,sum2=0.0,sum3=0.0,er1,er2;

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  for(int i=1;i<=N;i++){
    sum1=SN1(2*i);
    sum2=-SN21(i)+SN22(i);
    sum3=SN3(i);

    er1=(std::abs(sum3-sum1))/sum3;
    er2=(std::abs(sum3-sum2))/sum3;

    std::cout<<i<<" "<<sum1<<" "<<sum2<<" "<<sum3<<std::endl;
    std::cout<<i<<" "<<er1<<" "<<er2<<std::endl;
   }
return 0;
}

double SN1(int N1){
 double s1=0.0,term1,j;

  for(j=1.0;j<=N1;j++){
    term1=(std::pow(-1,j)*j)/(j+1);
    s1+=term1;
  }
  return s1;
}

double SN21(int N21){
 double s21=0.0,term21,k;

  for(k=1.0;k<=N21;k++){
  term21=(2*k-1)/(2*k);
  s21+=term21;
  }
 return s21;
}

double SN22(int N22){
 double s22=0.0,term22,l;

   for(l=1.0;l<=N22;l++){
   term22=2*l/(2*l+1);
   s22+=term22;
   }
 return s22;
}

double SN3(int N3){
 double s3=0.0,term3,m;

   for(m=1.0;m<=N3;m++){
   term3=1/(2*m*(2*m+1));
   s3+=term3;
   }
 return s3;
}
