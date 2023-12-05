#include<bits/stdc++.h>

using namespace std;
int hashing(int arr[],int n)
{
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	cout<<"-------------"<<endl;
	
	cout<<"|"<<"Value"<<"|"<<"Count"<<"|"<<endl;
	cout<<"-------------"<<endl;
	for(auto it:mp)
	{

		cout<<"|  "<<it.first<<"  "<<"|  "<<it.second<<"  "<<"|"<<endl;
	}
	cout<<"-------------"<<endl;
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
