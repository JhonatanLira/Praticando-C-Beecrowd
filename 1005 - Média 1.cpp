#include <iostream>
using namespace std;

int main() {
    double nota1, nota2;
    
    cin>>nota1 >>nota2;
	
    double media = ((nota1*3.5)+(nota2*7.5))/11.0;
    
    printf("MEDIA = %.5lf\n",media);
    
    return 0;
}