# include <iostream>
# include <cmath>
double f(double x);
double fmodified(double x);
int main(void)
{
double x = 0;
int n = 0;
for(n = 0; n <= 30; ++n) {
x = std::pow(10.0, -n);
std::printf("%25.16e%25.16e%25.16e\n", x, f(x), fmodified(x));
}
return 0;
}

double f(double x)
{
  double ff;
  ff = sin(x) - 1.0 + cos(x);
  return ff;
}
double fmodified(double x)
{
  double ff;
  ff = sin(x)-2.0*sin(x/2.0)*sin(x/2.0);
  return ff;
}
