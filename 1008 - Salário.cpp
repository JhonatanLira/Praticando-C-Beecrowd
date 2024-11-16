#include <iostream>

using namespace std;

int main() {
 
   int funcionario, horas;
   double valorHora;
 
    cin >> funcionario >> horas;
    cin >> valorHora;
    
    cout<<"NUMBER = " <<funcionario <<endl;
    printf("SALARY = U$ %.2f\n", horas*valorHora);
    
    return 0;
}