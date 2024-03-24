class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=nums[nums.size()-1];i>=1;i--)
        {
            if(nums[0]%i==0 && (nums[nums.size()-1])%i==0)
                break;
        }
        return i;
    }
};