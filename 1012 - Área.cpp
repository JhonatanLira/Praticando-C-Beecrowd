#include <iostream>

 using namespace std;
 
int main() {
    
 float A,B,C;
 const float PI = 3.14159;
 
 cin >> A >>B >>C;
 
 float triangulo = (A*C)/2;
 float circulo = (C*C)*PI;
 float trapezio =  ((A+B)*C)/2;
 float quadrado = B*B;
 float retangulo = A*B;
   
 printf("TRIANGULO: %.3f\n",triangulo);
 printf("CIRCULO: %.3f\n",circulo);
 printf("TRAPEZIO: %.3f\n",trapezio);
 printf("QUADRADO: %.3f\n",quadrado);
 printf("RETANGULO: %.3f\n",retangulo);
 
    return 0;
}