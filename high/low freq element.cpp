int freq(vector<int>& arr)
{
    unordered_map<int,int> freq;

    for(int x: arr)
        {
            ++freq[x];
        }

        int max=arr[0];
        int min=arr[0];

        for(int x : freq)
        {
            if(x.second > freq[max])
            {
                max= x.first;
            }
            else if (x.second < freq[min])
            {
                min= x.first;
            }
            
        }

        printf("Max Freq Element: %d\n", max);
        printf("Min Freq Element: %d\n", min);
        return 0;
}