#include <iostream>
using namespace std;
int add (int num1, int num2);
float divide(float num1, float num2);
main(){
float num1;
float num2;
float a;
float b;
cout << "Enter a number: ";
cin >> num1;
cout << "Enter a number: ";
cin >> num2;
a= add(num1,num2);
b= divide(num1, num2);
cout << a << " and " << b;
}

int add(int num1, int num2){
int sum;
sum = num1+num2;
return sum;
}

float divide(float num1,float num2){
float result;
result = num1 / num2;
return result;
}
