#include <iostream>
 
 using namespace std;
 
int main() {
 
   float raio;
   const float PI = 3.14159;
   cin>>raio;
   
   float volume = 4.0/3*(PI*(raio*raio*raio));
   
      printf("VOLUME = %.3f ",volume);
 
    return 0;
}