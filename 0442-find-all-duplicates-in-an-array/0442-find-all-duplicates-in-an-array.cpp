class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> duplicates;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        };
        for(auto &i: mp){
            if(i.second>1){
                duplicates.push_back(i.first);
            }
        }
        return duplicates;
    }
};