#include<iostream>
using namespace std;
int main()
{
  int test_cases;
  cin>>test_cases;
  int result[test_cases];
  int year;
  for(int i =0;i<test_cases;i++)
  {
    cin>>year;
   if ((year%400==0) || ((year%4==0)&& (year%100 !=0)))
   {
   	result[i] = 1;
   }
   else result[i] = 0; 
  }
  for(int i=0;i<test_cases;i++)
  {
    if (result[i]==0){
      cout<<"no"<<endl;
    }
    else cout<<"yes"<<endl;
    
    
  }
  return 0;
  
}