#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    double A, B, C;
    double triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;

    cin >> A >> B >> C;

    triangulo = (A*C)/2;
    circulo = pi * (C*C);
    trapezio = ((A+B)*C)/2;
    quadrado = B*B;
    retangulo = A*B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;

    return 0;
}