#include<iostream>
using namespace std;
int main()
{
	int test_cases;
	cin>>test_cases;
	int total_pairs;
	int result[test_cases];
	for(int i=0;i<test_cases;i++)
	{
		cin>>total_pairs;
		result[i] = total_pairs+1;
	}
	for(int i=0;i<test_cases;i++)
	{
		cout<<result[i]<<endl;
		
	}
}