#include<bits/stdc++.h>
using namespace std;
int lowerboud(int arr[],int n, int target)
{
	int low=0;
	int high=n-1;
	int ans=n;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]>=target)
		{
			ans=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter Number of arr :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter arr Elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int t;
	cout<<"Enter the Target :"<<endl;
	cin>>t;
	cout<<"your ans is :"<<lowerboud(arr,n,t)<<endl;
	
	return 0;
}
