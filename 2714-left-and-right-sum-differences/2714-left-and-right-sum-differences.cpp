class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ls;
        vector<int>rs(n);
        
        for(int i=0;i<n;i++){
            if(i==0){
                ls.push_back(0);
            }else{
                ls.push_back(nums[i-1]+ls[i-1]);
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                rs[i]=0;
            }else{
                rs[i]=nums[i+1]+rs[i+1];
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(abs(ls[i]-rs[i]));
        }
        return ans;
    }
};