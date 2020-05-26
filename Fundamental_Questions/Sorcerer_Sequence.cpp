#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test_cases;
	cin>>test_cases;
	int first_term;

	for(int i=0;i<test_cases;i++)
	{
		cin>>first_term;
		if(first_term % 2 == 0)
		{
			for(int j = first_term;j>=1;j = sqrt(j))
			{
				cout<<j<<" ";
				if(j == 1)
					break;
			}
		}

		else 
		{
			for(int j = first_term;j>=1;j = sqrt(j)*sqrt(j)*sqrt(j))
			{
				cout<<j<<" ";
				if(j == 1)
					break;
			}
		}
		cout<<endl;
	}
}