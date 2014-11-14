#define M_PI 3.14159265359

double sin(double x) {
	return (16.0*x*(M_PI-x))/(5*M_PI*M_PI-4*x*(M_PI-x));
}
