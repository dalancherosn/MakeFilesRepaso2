#include <iostream>
#include <cmath>
#include <cstdlib>

double Heron(double a, double b, double c);
double segunda(double a, double b, double c);
double a(double b, double c, double Theta);


double pi()
{
  return std::atan(1)*4;
}

int main(void)
{
  std::cout.precision(6);
  std::cout.setf(std::ios::scientific);

  double b = 3.0;
  double c = 4.0;
  double Theta = 0.0;
  double a1 = 0;
  for(int n = 0; n <= 100; ++n)
    {
      Theta = pi()/2 + std::pow(1.1, -n);
      a1 = a(b, c, Theta);
      std::cout << n << "\t" << Heron(a1, b, c) << "\t" << segunda(a1, b, c) << "\t" << std::fabs(Heron(a1, b, c) - segunda(a1, b, c)) << std::endl;
    }
  return 0;
}

double Heron(double a, double b, double c)
{
  double d = (a + b + c)/2;
  return std::sqrt(d*(d-a)*(d-b)*(d-c));
}

double a(double b, double c, double Theta)
{
  return std::sqrt(std::pow(b, 2) + std::pow(c, 2) - 2*b*c*std::cos(Theta));
}

double segunda(double a, double b, double c)
{
  return (0.25)*std::sqrt(a+(b+c))*std::sqrt(c-(a-b))*std::sqrt(c+(a-b))*std::sqrt(a+(b-c));
}
