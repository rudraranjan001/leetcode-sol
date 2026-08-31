class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=-1,secmax=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
                secmax=max;
                max=arr[i];
            }
            else if(arr[i]>secmax and arr[i]!=max)
            {
                secmax=arr[i];
            }
        }
        return secmax;
    }
};