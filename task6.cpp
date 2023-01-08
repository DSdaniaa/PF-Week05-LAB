#include <iostream>
using namespace std;
string convert(int num);
string convert1(int num);
main(){
    int num;
    string result;
    string result1;
    cout << "Enter a two digit number: ";
    cin >> num;
    result=convert(num);
    result1=convert1(num);
    cout << result << " " << result1;
}
string convert(int num){
    int a;
    string name;
    a=num/10;
     if(a==0){
        return " ";
     }
    if(a==2){
        name= "Twenty";
      
    }
    if(a==3){
        name= "Thirty";
      
    }
    if(a==4){
        name= "fourty";
      
    }
    if(a==5){
        name= "Fifty";
      
    }
    if(a==6){
        name= "Sixty";
      
    }
    if(a==7){
        name= "Seventy";
      
    }
    if(a==8){
        name= "eighty";
      
    }if(a==9){
        name= "ninety";
    }
    return name;
}
string convert1(int num)
{
 string name2;
 int b;
 b= num%10;
    if(b==0){
        return " ";
    }
    if(b==1){
        name2= "one";
    }
    if(b==2){
        name2= "two";
    }
    if(b==3){
        name2= "three";
    }
    if(b==4){
        name2= "four";
    }
    if(b==5){
        name2= "five";
    }
    if(b==6){
        name2= "six";
    }
    if(b==7){
        name2= "seven";
    }
    if(b==8){
        name2= "eight";
    }
    if(b==9){
        name2= "nine";
    }
    return name2;
}
