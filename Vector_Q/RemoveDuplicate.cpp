//Remove Duplicated from vector
#include<bits/stdc++.h>
using namespace std;
void RemoveDuplicate(vector<int> &vec)
{
  set<int> s;
  for(auto it:vec)
  {
    s.insert(it);
  }
  for(auto itt:s)
  {
    cout<<itt<<endl;
  }
}
int main()
{
  int s;
  cin>>s;
  vector<int> vec;
  for(int i=0;i<s;i++)
  {
    int k;
    cin>>k;
    vec.push_back(k);
  }
  RemoveDuplicate(vec);
  return 0;
}
