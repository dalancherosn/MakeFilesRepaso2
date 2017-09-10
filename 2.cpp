#include <iostream>
#include <cmath>
#include <cstdlib>

double f1(double x);
double f2(double x);
double f3(double x);

int main(void)
{
  std::cout.precision(6);
  std::cout.setf(std::ios::scientific);

  double x = 0.992;
  for(int n = 0; n <= 1000; ++n)
    {
      x += (1/1000);
      std::cout << x << "\t" << f1(x) << "\t" << f2(x) << "\t" << f3(x) << std::endl;
    }

  return 0;
}

double f1(double x)
{
  return std::pow(1-x, 8);
}

double f2(double x)
{
  return 1 - (8*x) + (28*x*x) - (56*x*x*x) + (70*x*x*x*x) - (56*x*x*x*x*x) + (28*x*x*x*x*x*x) - (8*x*x*x*x*x*x*x) + (x*x*x*x*x*x*x*x); 
}

double f3(double x)
{
  return 1 - (8*x) + (28*std::pow(x, 2)) - (56*std::pow(x, 3))+ (70*pow(x, 4)) - (56*std::pow(x, 5)) + (28*std::pow(x, 6)) - (8*std::pow(x, 7)) + std::pow(x, 8);
}
