#include <iostream>
#include <cmath>

const int n=9;
int fact(int N);

int main(){

int factorial;

factorial=fact(n);
std::cout<<n<<" "<<factorial;

return 0;
}

int fact(int N){
if (N==0) return 1;
else return N*fact(N-1);

}
