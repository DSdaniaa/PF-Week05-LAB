#include <iostream>
using namespace std;
int isGreater(int num1, int num2);
int isMinimum(int num1, int num2);
main()
{
  int num1;
  int num2;
  int a;
  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter a number: ";
  cin >> num2;
  a = isMinimum(num1, num2);
  cout << a << " is Minimum";
}

int isGreater(int num1, int num2)
{
  if(num1>num2)
  {
  return num1;
  }
  if(num2>num1)
  {
  return num2;
  }
return 0;
}

int isMinimum(int num1, int num2)
{
  if(num1>num2)
  { 
  return  num2;
  }
  if(num2 > num1)
  { 
  return num1;
  }
return 0;
}
