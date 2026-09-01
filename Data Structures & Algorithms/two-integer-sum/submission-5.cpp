class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0, num;
        while(i<nums.size()){
            num = target - nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(num==nums[j]){
                    return{i,j};
                }
            }
            i++;
        }
        return {};

    }
};
