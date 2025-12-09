class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> present(n+1,false);
        for(int i:nums){
            present[i] = true;
        }
        vector<int> arr; 
        for(int i = 1; i <= n; i++){
            if(present[i]==false){
                arr.push_back(i);
            }
        }
        return arr;
    }
};