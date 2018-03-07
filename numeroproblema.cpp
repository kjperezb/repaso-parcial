#include <iostream>
#include <cmath>

double pi=std::atan2(0,-1);

int main(){
  double x1,x2,x12,x22;
  std::cout<<pi<<std::endl;
  x1=1.0/pi;
  x2=std::log(std::pow(640320,3)+744);
  x12=x1*x2;
  x22=x12*x12;
  std::cout<<x1<<" "<<x2<<" "<<x12<<" "<<x22<<std::endl;

  return 0;
}
