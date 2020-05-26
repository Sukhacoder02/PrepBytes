#include<iostream>
using namespace std;
int  multiplyBy2(int n) 
{ 
    int rem, value; 
  
    // Find the last digit or remainder 
    rem = n % 10; 
    switch (rem) { 
  
    // If the last digit is 0 
    case 0: 
        value = 0; 
        break; 
  
    // If the last digit is 5 
    case 5: 
        value = 1; 
        break; 
  
    // If last digit is other  
    // than 0 and 5.  
    default: 
        value = -1; 
    } 
  
    return value; 
} 
int main()
{
	int test_cases;
	cin>>test_cases;
	int number;
	int result[test_cases];
	for(int i=0;i<test_cases;i++)
	{
		cin>>number;
		result[i] = multiplyBy2(number);


	}
	for(int i=0;i<test_cases;i++)
	{
		cout<<result[i]<<endl;
	}
}