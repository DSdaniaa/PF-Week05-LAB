#include <iostream>
using namespace std;
int hours(int num1, int num2);
int mins(int num1, int num2);
main(){
    int hour;
    int min;
    int result1;
    int result2;
    cout << "Enter hours: ";
    cin >> hour;
    cout << "Enter minutes: ";
    cin >> min;
    result1 = hours(hour, min);
    result2 = mins(hour, min);
    cout << result1 << ":" << result2;
    

}
int hours(int hour, int min){
    int total;
    int cal;
    int cal1;
    int cal2;
    int answer;
    float answer1;
    cal= 15*60;
    cal1=hour*60*60;
    cal2=min*60;
    total= cal1 + cal2 + cal;
    answer=total/(60*60);
    return answer;
    
}
int mins(int hour, int min){
    int total;
    int cal;
    int cal1;
    int cal2;
    int answer;
    cal= 15*60;
    cal1=hour*60*60;
    cal2=min*60;
    total= cal1 + cal2 + cal;
    answer=total/(60*60);
    answer= answer*(60*60);
    total = total - answer;
    total=total/60;
    return total;
}

