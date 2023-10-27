#include <iostream>
#include <cmath>
using namespace std;
#define operation1(x,y) 3*x+4*y
#define operation2(x,y,a) x*x+2*y+a*a
#define operation3(a,b,c,d,x,y) ((a+b)/(c-d))*(x/y)
#define operation4(a,b,c,d,x,y) ((((a*a)+(2*(b*b*b)))+c)/d)/(x*y)
#define operation5(a,b) sqrt(abs(a-b))
#define operation6(x,y) pow(x, -cos(y))
int main() {
 int Select, A, B, C, D, X, Y;
 cout << "Enter 1 for 3*X+4*Y\nEnter 2 for A^(2)+2B+C^(2)\nEnter 3 for ((A+B)/(C￾D))*((X)/(Y))\nEnter 4 for(((A^2+2*B^3+C)/D))/X*Y\nEnter 5 for sqrt(|A-B|)\nEnter 6 for X^(-
cos(y))\n Which Opeation Want You Perform : ";
 cin >> Select;
 if (Select == 1) {
 cout << "Enter The Value Of X : ";
 cin >> X;
 cout << "Enter The Value Of Y : ";
 cin >> Y;
 cout << "Result: " << operation1(X, Y) << endl;
 }
 else if (Select == 2) {
 cout << "Enter The Value Of A : ";
 cin >> X;
 cout << "Enter The Value Of B : ";
 cin >> Y;
 cout << "Enter The Value Of C : ";
 cin >> A;
 cout << "Result: " << operation2(X, Y, A) << endl;
 }
 else if (Select == 3) {
 cout << "Enter The Value Of A : ";
 cin >> A;
 cout << "Enter The Value Of B : ";
 cin >> B;
 cout << "Enter The Value Of C : ";
 cin >> C;
 cout << "Enter The Value Of D : ";
 cin >> D;
 cout << "Enter The Value Of X : ";
 cin >> X;
 cout << "Enter The Value Of Y : ";
 cin >> Y;
 cout << "Result: " << operation3(A, B, C, D, X, Y);
 }
 else if (Select == 4) {
 cout << "Enter The Value Of A : ";
 cin >> A;
 cout << "Enter The Value Of B : ";
 cin >> B;
 cout << "Enter The Value Of C : ";
 cin >> C;
 cout << "Enter The Value Of D : ";
 cin >> D;
 cout << "Enter The Value Of X : ";
 cin >> X;
 cout << "Enter The Value Of Y : ";
 cin >> Y;
 cout << "Result: " << operation4(A, B, C, D, X, Y) << endl;
 }
 else if (Select == 5) {
 cout << "Enter A value : ";
 cin >> A;
 cout << "Enter B value : ";
 cin >> B;
 cout << "Result: " << operation5(A, B);
 }
 else if (Select == 6) {
 cout << "Enter X value : ";
 cin >> X;
 cout << "Enter Y value : ";
 cin >> Y;
 cout << "Result: " << operation6(X, Y) << endl;
 }
 else
 {
 cout << "You Enter Invalid Information.";
 }
 return 0;
}