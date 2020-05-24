#include<iostream>
using namespace std;
int main()
{
	int test_cases;
	cin>>test_cases;
	int N;
	
	string result[test_cases];
	for(int i=0;i<test_cases;i++)
	{
		cin>>N;
		int sum =0;
		for(int j=1;j<=(N/2);j++)
		{
			if(N%j==0)
			{
				sum+=j;
			}
		}
		if (sum == N)
		{
			result[i] = "True";
		}
		else result[i] =  "False";
	}
	for(int i=0;i<test_cases;i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;

}