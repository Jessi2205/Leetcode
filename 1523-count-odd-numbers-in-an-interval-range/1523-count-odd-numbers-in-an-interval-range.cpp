class Solution {
public:
    int IfOdd(int n){
        return n%2!=0;
    }
    int countOdds(int low, int high) {
        int cnt = 0;
        for(int i = low; i <= high; i++){
            if(IfOdd(i)){
                cnt++;
            }
        }
        return cnt;
    }
};