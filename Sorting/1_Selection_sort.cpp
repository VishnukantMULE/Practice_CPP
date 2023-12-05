#include<bits/stdc++.h>

using namespace std;
int selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<=n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(arr[i],arr[min]);

	}
	cout << "Sorted Array:" << endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
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
	selectionsort(arr,n);
	return 0;
}
