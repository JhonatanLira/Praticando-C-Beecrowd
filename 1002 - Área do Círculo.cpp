#include <stdio.h>
#include <iomanip>
#include <iostream> 

using namespace std;

int main() {
 
   const double PI = 3.14159;
   double raio;
   
   std::cin >> raio;
   
   printf("A=%.4lf\n",PI * (raio*raio));
 
    return 0;
}