int freq(vector<int>& arr)
{
    unordered_map<int,int> freq;

    for(int x: arr)
        {
            ++freq[x];
        }

        int max=arr[0];
        int min=arr[0];

