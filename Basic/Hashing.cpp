#include<bits/stdc++.h>

using namespace std;
int hashing(int arr[],int n)
{
	int hash[n]={0};
	for(int i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<hash[i]<<endl;
	}
	return 0;

}
int main()
{
	int n;
	cout<<"Enter the array size :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter The Array Number";
	for(int i=0;i<n;i++)
	{
		cout<<i<<" ";
		cin>>arr[i];
	}
	hashing(arr,n);
	return 0;
}
