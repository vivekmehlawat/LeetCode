class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int count = 0, pre_c = 0, ans = 0;
        for( int i=0; i<bank.size(); i++ )
        {
            for( int j=0; j<bank[i].size(); j++ )
            {
                if ( bank[i][j] == '1' )
                    count++;
            }
            if ( count != 0 ){
                ans += count*pre_c;
                pre_c = count;
            }
            count = 0;
        }
        return ans;
    }
};