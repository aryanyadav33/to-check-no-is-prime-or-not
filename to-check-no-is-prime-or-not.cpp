#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int num,i,c=0;
  cout<<"Enter any number :";
  cin>>num;
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    {
      c++;
    }
  }
  if(c==2)
  {
    cout<<"Number is prime";
  }
  else
  {
    cout<<"Number is not prime";
  }
  return 0;
}
