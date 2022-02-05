#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int findClosestElements(vector<int>& arr, int k, int x)
{
    if (arr.size()==0)
        return -1;
    int left = 0, right = arr.size()-1;
    while(left+1<right)
    {
        int mid = left +  (right-left)/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]<x)
        {
            left=mid;
        }
        else if (arr[mid]>x)
        {
            right=mid;
        }
        if (arr[left] == x) return left;
        if (arr[right] == x) return right;

        return -1;
    }
}

int main()
{
    int n,target;
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    
    cout<<findClosestElements(nums,4,5)<<endl;
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
}