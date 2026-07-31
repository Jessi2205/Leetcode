class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;

        for(int i = 2; i*i <= n ; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    bool checkSetBit(int n, int i){
        return (n & (1<<i)) != 0;
    }
    int countPrimeSetBits(int left, int right) {
        int p_cnt = 0;
        for(int num = left; num<=right; num++){
            int cnt= 0;
            for(int i=0; i<32;i++){
                if(checkSetBit(num,i)){
                    cnt++;
                }
            }
            if(isPrime(cnt)){
                p_cnt++;
            }
        }
        return p_cnt;
    }
};