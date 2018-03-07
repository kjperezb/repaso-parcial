#include<iostream>
#include<cmath>
const double m=50000.0;
double integral(double y, double x); 
int main()
{std::cout.precision(16);
  double y;
  double x,i,a;
  y=4.8;
  x=3.0;
  a=0;
  if(y<0 && x==-1.0 && fmod(y,2)!=0)
    { i=0;
      a=1;
    }
  else if(y<0 && x<0 && fmod(y,2)==0)
    {std::cout<<"No es posible calcular la integral\n";
      a=1;
    }
      if(y<0 && x!=-1 && a==0)
	{std::cout<<"No es posible calcular la integral\n";}
      else if(a==0)
	{
	i=integral(y,x);
	 std::cout<<i<<std::endl;

	}
}
double integral (double y, double x)
{ int i;
  double integral, e,dt,x1,xf,xi;
  dt=(x-1.0)/m;
  x1=1.0;
  integral=0;
  for(i=0;i<=m;i++)
    {xf=x1+dt;
     xi=(x1+xf)/2.0;
     e=(std::pow(xi,y))*std::abs(dt);
     integral+=e;
     x1+=dt;
    }
  return integral;
}
