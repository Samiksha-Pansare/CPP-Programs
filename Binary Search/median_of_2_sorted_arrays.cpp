#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        if (0<m<1000 && 0<n<1000 && 0<m+n<2000)
        {
            
        }
        
    }
};

int main()
{
    int n,target;
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(5);
    nums1.push_back(6);
    nums1.push_back(7);
    nums2.push_back(0);
    nums2.push_back(1);
    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);
    cout<<findMedianSortedArrays(nums1,nums2)<<endl;
    for (int i = 0; i < nums1.size(); i++)
        cout << nums1[i] << " ";
    for (int i = 0; i < nums2.size(); i++)
        cout << nums2[i] << " ";
}