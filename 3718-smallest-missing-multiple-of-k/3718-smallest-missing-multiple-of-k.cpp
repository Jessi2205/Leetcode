class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> _set(nums.begin(),nums.end());
        int i = 1;
        while(true){
            int multi = i*k;
            if(_set.find(multi) == _set.end()){
                return multi;
            }
            ++i;
        }
    }
};