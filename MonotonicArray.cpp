class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if ( n == 1 )
            return true;
        int i = 0;
        while ( i < n-1 && nums[i] == nums[i+1] )
            i++;
        if ( i == n-1 )
            return true;
        if ( nums[i] < nums[i+1] )
        {
            while ( i < n-1){
                if ( nums[i] > nums[i+1] )
                    return false;
                i++;
            }
        }
        else{
            while( i< n-1 ){
                if ( nums[i] < nums[i+1] )
                    return false;
                i++;
            }
        }
        return true;
    }
};