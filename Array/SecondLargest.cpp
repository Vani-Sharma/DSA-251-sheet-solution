#include <bits/stdc++.h>
#include <vector>
using namespace std;
int findSecondLargest(int n, vector<int>& arr)
{
    sort(arr.begin(),arr.end(),greater<int>());
    int ans=arr[0];

   for(int i=0;i<n;i++)
   {
       if(arr[i]<ans)
       return arr[i];
   }

   return -1;
}

int main()
{
    vector<int> arr={2,3,4,5,6,2,2,4,9};
    cout<<findSecondLargest(9,arr);
}
