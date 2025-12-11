class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target_arr;
        for(int i = 0; i < nums.size(); i++){
            target_arr.insert(target_arr.begin() + index[i], nums[i]);
        }
        return target_arr;
    }

};