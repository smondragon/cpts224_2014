
#define M_PI 3.14159265359

double sin(double x);
double cos(double x) {
	return sin(x+M_PI/2.0);
}

