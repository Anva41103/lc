class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int s=0, maxlen=0;
        map <int,int> track{{0,-1}};
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i]==1?1:-1;
            if(track.count(s)) maxlen=max(maxlen,i-track[s]);
            else track[s]=i;
        }
        return maxlen;
    }
};