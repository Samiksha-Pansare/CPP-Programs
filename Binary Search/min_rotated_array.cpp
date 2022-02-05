#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int findPeakElement(vector<int>& nums)
{
    int n = nums.size();
    if (nums.size()==1)
        return 0;
    if (nums.size()==2)
    {
        if(nums[0]>nums[1])
            return 1;
        else
           return 0; 
    }
    int left=0,right=nums.size();
    while (left<right)
    {
        int mid = left + (right-left)/2;
        cout<<"Initial nums[mid]"<<nums[nums[mid]]<<endl;
        if (nums[mid]>nums[mid-1] && nums[mid+1] < nums[mid])
        {
            // cout<<"nums[mid]"<<nums[mid]<<endl;
            return mid+1;
        }
        else if (nums[mid]<nums[mid-1])
        {
            left = nums[mid]+1;
            cout<<"left"<<left<<endl;
        }
        else if (nums[mid]<nums[mid+1]) 
        {
            right = nums[mid];
            cout<<"right"<<right<<endl;
        }
    }
    

}
int main()
{
    int n,target;
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    cout<<findPeakElement(nums)<<endl;
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
}