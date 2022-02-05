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