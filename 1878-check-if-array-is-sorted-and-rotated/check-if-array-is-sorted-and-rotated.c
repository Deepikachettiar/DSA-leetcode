bool check(int* nums, int numsSize) {
    int size=numsSize;
    int val=0;
    int count=0;
    for(int i=0;i<size;i++)
    {
        val=(i+1)%size;
        if(nums[i]<=nums[val])
            {
                count++;
            }

    }
    if(count>=size-1)
    {
        return true;
    }
return false;
}