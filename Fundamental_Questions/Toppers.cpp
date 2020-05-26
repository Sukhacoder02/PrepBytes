#include<iostream>
using namespace std;
int main()
{
	int test_cases;
	cin>>test_cases;
	int a,b,c,n;
	
	int result[test_cases][20];
	int temp[test_cases];
	for(int i=0;i<test_cases;i++)
	{
		cin>>a>>b>>c>>n;
		temp[i] = n;
		result[i][0] = a;
		result[i][1] = b;
		result[i][2] = c;
		for(int j = 3;j<temp[i];j++)
		{
			result[i][j] = result[i][j-1]+ result[i][j-2]+ result[i][j-3];
		}
	}
	for(int i=0;i<test_cases;i++)
	{
		for(int j = 0;j<temp[i];j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}