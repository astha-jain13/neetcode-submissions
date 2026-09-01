#include<set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> original;
        for(int i: nums){
            original.insert(i);
        }
    return(original.size()!=nums.size());     
    }
};