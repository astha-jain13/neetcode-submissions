class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i=0;
        int size= nums.size()+nums.size();
        vector<int> ans(size);
        while(i<size){
            for(int j=0;j<nums.size();j++){
                ans[i]=nums[j];
                i++;
            }
        }
        return ans;
    }
};