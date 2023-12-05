#include<bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
	int r=1;
	// for(int i=1; i<=min(n1,n2); i++)
	// {
	// 	if(n1%i==0 && n2%i==0)
	// 	{
	// 		r=i;
	// 	}
	// }

	for(int i=min(n1,n2);i>=1;i--)
	{
		if(n1%i==0 && n2%i==0)
		{
		    r=i;	
			break;
		}
	}
	return r;
}
int main()
{
	int n1,n2;
	cout<<"Enter N1 :"<<endl;
	cin>>n1;
	cout<<"Enter N2 :"<<endl;
	cin>>n2;
	cout<<"GCD Of Number Is :"<<gcd(n1,n2)<<endl;
	return 0;
}
