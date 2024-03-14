#include <iostream>
#include <cmath>

double abs(double x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

double eval(double x) {
    double summand1 = pow(tan(abs(x)), 2);
    double summand2 = pow(3, 2*pow(x, 2) - exp(x));
    double summand3 = (pow(x, 2.0/7.0)) / pow(cos(M_PI * x), 2);
    return summand1 + summand2 + summand3;
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf\n", eval(x));
    return 0;
}
