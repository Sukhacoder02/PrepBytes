#include<iostream>
using namespace std;
int main()
{
	int number,reversed_number =0,remainder;
	cin>>number;
	while(number!=0)
	{
		remainder = number%10;
		reversed_number = reversed_number*10 + remainder;
		number =  number/10;
	}
	cout<<reversed_number<<endl;
	return 0;
	
}