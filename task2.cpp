#include <iostream>
#include <cmath>
using namespace std;
float calculate(float a, float b, float c);
float calculate2(float a, float b, float c);

main(){
float a;
float b;
float c;
float final;
float final1;

cout << "Enter a: ";
cin >> a;
cout << "Enter b: ";
cin >> b;
cout << "Enter c: ";
cin >> c;
final= calculate(a, b, c);
final1= calculate2(a,b,c);
cout << "fir+st is: "<< final << endl;
cout << "second is: "<< final1;
}

float calculate(float a, float b, float c){
float ac;
float bx2;
float bx2_4ac;
float sqr;
float twoa;
float ans1;
ac= 4*a*c;
bx2= b*b;
bx2_4ac= ac*bx2;
sqr= sqrt(bx2_4ac);
twoa= 2*a;
ans1= (-b+sqr)/twoa;
return ans1;
}
float calculate2(float a, float b, float c){
float ac;
float bx2;
float bx2_4ac;
float sqr;
float twoa;

float ans2;
ac= 4*a*c;
bx2= b*b;
bx2_4ac= ac*bx2;
sqr= sqrt(bx2_4ac);
twoa= 2*a;

ans2= (-b-sqr)/twoa;
return ans2;
}

