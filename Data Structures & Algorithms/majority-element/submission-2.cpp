class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=0;
        int n=nums.size();
        int ans=nums[0];
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=1;j<n;j++){
                
                if(nums[i]==nums[j]){
                    count++;
                }
                if(count>max){
                    max=count;
                    ans=nums[i];
                }
            }
        }
        return ans;
    }
};