class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
int count=0;
for(int i=1;i<nums.size();i++)
{
if(nums[i-1][0]==nums[i][0] && nums[i][1]==nums[i-1][1])
{
count++;
}
else if((nums[i-1][1])>nums[i][0])
{
count++;
nums[i][0]=min(nums[i-1][0],nums[i][1]);
nums[i][1]=min(nums[i-1][1],nums[i][1]);
}
}
return count;
    }
    
};