#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool checkPossibility(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
    for(int i=1;i<n;i++)
    {
        if(nums[i-1]>nums[i])
        {
            if(++cnt>1)
            {return false;}
            if(i-2>=0 && nums[i-2] > nums[i])
            {
                 nums[i]=nums[i-1];
            }


            else
            {nums[i-1]=nums[i];}
        }
    }

    return true;
}

int main()
{
    vector<int> arr={4,2,3};
    cout<<checkPossibility(arr);
}

