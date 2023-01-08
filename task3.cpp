#include <iostream>
#include <cmath>
using namespace std;
bool symmetrical(int num);

main(){
  int num;
  bool flag;
  cout<<"Enter a 3-digit number: ";
  cin >> num;
  flag= symmetrical(num);
  if(flag==0){
    cout << "false";
  }
  if(flag==1){
    cout << "True";
  }


}

bool symmetrical(int num){
int ans1;
int ans2;
ans1= num%10;
ans2= num/100;
  if(ans1==ans2)
  {
	return true;
  }
  if(ans1!=ans2)
  {
	return false;
  }
  return 0;
}



