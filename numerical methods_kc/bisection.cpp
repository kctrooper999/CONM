#include <iostream>
using namespace std;
#define EP 0.01
// Bisection_Method. The function is t4tutorials^3 - t4tutorials^2 + 2
double RESULT(double t4tutorials) {
   return t4tutorials*t4tutorials*t4tutorials - t4tutorials*t4tutorials + 2;
}
// Prints root of RESULT(t4tutorials) with error in EPSILON
void Bisection_Method(double a, double b) {
   if (RESULT(a) * RESULT(b) >= 0) {
      cout << "You have not assumed right a and b\n";
      return;
   }
   double c = a;
   while ((b-a) >= EP) {
      // Find middle point
      c = (a+b)/2;
      // Check if middle point is root
      if (RESULT(c) == 0.0)
         break;
       // Decide the side to repeat the steps
      else if (RESULT(c)*RESULT(a) < 0)
         b = c;
      else
         a = c;
   }
   cout << "The value of root is : " << c;
}
 // main function
int main() {
   double a =-44, b = 55;
   Bisection_Method(a, b);
   return 0;
}