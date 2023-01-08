#include <iostream>
#include <cmath>
using namespace std;
float calculate(float num1, float num2);

main(){
float degree;
float level;
float height;
cout << "Enter Angle: ";
cin >> degree;
cout << "Enter base: ";
cin >> level;
height= calculate(degree, level);
cout << height << " is Height";
}


float calculate(float num1, float num2)
{
float result;
float radian;
float radians;
float final;
radian = 57.2958;
radians= num1/radian;
result = tan(radians);
final = num2*result;
return final;
}