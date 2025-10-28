void moveZeroes(int* nums, int numsSize) {
    int cur=0;
    int n=numsSize;

    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {

            for(int k=i;k<n-1;k++)
            {
                nums[k]=nums[k+1];
            }
            nums[n-1]=0;
            i--;
            n--;
        }
    }
}