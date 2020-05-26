#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test_cases;
	cin>>test_cases;
	int M,one,two,three;
	int result[test_cases];
	for(int i =0;i<test_cases;i++)
	{
		cin>>M>>one>>two>>three;
		if(M%4 == 0)
		{
			result[i] = 0;
		}
		else if ( M%4 == 1)
		{
			result[i] = min(three,min(two+one,one+one+one));

		}
		else if (M%4 == 2)
		{
			result[i] = min(two,min(one+one,three+three));

		}
		else if (M%4 == 3)
		{
			result[i] = min(one,min(three+two,three+three+three));
			
		}


	}
	for(int i=0;i<test_cases;i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;

}
