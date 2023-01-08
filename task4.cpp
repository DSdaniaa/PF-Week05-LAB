#include <iostream>
#include <cmath>
using namespace std;
string evenodd(int num);
main(){
    int num;
    string result;
    cout << "Enter a five digit number: ";
    cin >> num;
    result = evenodd(num);
    cout << result;


}
string evenodd(int num){
    int a;
    int b;
    int c;
    int d;
    int e;
    int sum;
    a=num%10;
    b=(num/100)%10;
    c=(num/1000)%10;
    d=(num/10000)%10;
    e=(num/100000)%10;
    sum= a+b+c+d+c;
    if(sum%2==1){
        return "Oddish";
    }
    if(sum%2==0){
        return "Evenish";
    }
    return "Evennish";
}