class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int beg =0, end = n-1;
        int sum = 0, ans = 0;
        int minm = 999999;
        while ( (beg<=k) && (end>=k) )
        {
            for ( int i=beg; i<=end; i++ ){
                if ( nums[i] < minm )
                    minm = nums[i];
            }
            cout<<minm<<endl;
            sum = minm*(end-beg+1);
            cout<<"sum = "<<sum<<endl;
            ans = max(sum,ans);
            minm = 999999;
            if ( nums[beg] > nums[end] )
                end--;
            else
                beg++;
        }
        return ans;
    }
};

//[6569,9667,3148,7698,1622,2194,793,9041,1670,1872]