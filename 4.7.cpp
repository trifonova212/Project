#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

int main() {
    double Fn, Gn, ATg_FG, ATg_GF, pi, Nbegin, Nend, step,
        phi, k, Delta, Theta, O_large, ii;
    FILE* stream;
    fopen_s(&stream, "Example_TA.TXT", "w+");
    cout << "Input Nbegin: "; cin >> Nbegin;
    cout << "Input Nend: "; cin >> Nend;
    cout << "Input step: "; cin >> step;
    cout << "Input coefficient: "; cin >> k;
    phi = M_PI / k;
    ii = Nbegin;
    while (ii <= Nend) {
        Fn = (7.2*exp(1)+0.5*pow(ii, 2)+100*ii+1833);
        Gn = (6*pow(ii, 5) + pow(ii,3)+2*pow(ii, 2)+ii+ 3031);
        ATg_FG = atan(Fn / Gn);
        ATg_GF = atan(Gn / Fn);
        pi = ATg_FG - ATg_GF;
        Delta = phi - pi;
        Theta = fabs(pi - phi);
        O_large = pi + phi;
        fprintf(stream, "%lf %lf %lf %lf %lf %lf %lf %lf %lf\n", ii, Fn, Gn, ATg_FG, ATg_GF, pi, Delta, Theta, O_large);
        ii = ii + step;
    }
    fclose(stream);
    return 0;
}
