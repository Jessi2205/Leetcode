class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j<= n; j++){
                int i_j = i*i + j*j;
                int c = sqrt(i_j);
                if(c*c==i_j && c<=n){
                    cnt++;
                }
            }

        }
        return cnt;
    }
};