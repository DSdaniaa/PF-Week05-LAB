#include <iostream>
#include <cmath>
using namespace std;



main(){

float num1;
float num2;
float result;
cout << "Enter a number: ";
cin >> num1;
cout << "Enter a number: ";
cin >> num2;

result= max(num1, num2);
cout << "maximum: " << result << endl;
result= min(num1, num2);
cout << "minimum: " << result << endl;
result= sqrt(num1);
cout << "root " << result << endl;
result= cbrt(num1);
cout << "cube root: " << result << endl;
result= pow(num1,3);
cout << "power: " << result << endl;
result= ceil(num1);
cout << "ceil: " << result << endl;
result= floor(num1);
cout << "floor: " << result << endl;
}

