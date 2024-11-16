#include <iostream>
 
 using namespace std;
 
int main() {
 
 int codigo1, codigo2, numeroDePeca1, numeroDePeca2;
 double valorPeca1, valorPeca2;
 
 cin>>codigo1 >>numeroDePeca1>>valorPeca1;
 cin>>codigo2 >>numeroDePeca2>>valorPeca2;
 
 printf("VALOR A PAGAR: R$ %.2f\n",(numeroDePeca1*valorPeca1)+(numeroDePeca2*valorPeca2));
  
    return 0;
}
