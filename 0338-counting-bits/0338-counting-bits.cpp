class Solution {
public:
    bool checkBit(int N,int i){
        return (N & (1<<i)) != 0;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int num = 0; num<=n; num++){
            int cnt = 0;
            for(int i = 0; i < 32; i++){
                if(checkBit(num,i)){
                    cnt++;
                }
            }
            ans[num] = cnt;
        }
        return ans;
    }
};