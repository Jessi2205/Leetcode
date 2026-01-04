class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int result_sum = 0;
        for(int n: nums){
            int temp = n;
            unordered_map<int, int> factors;

            for(int i = 2; i*i <= temp; i++){
                while(temp%i==0){
                    factors[i]++;
                    temp/=i;
                }
            }

                if(temp>1){
                    factors[temp]++;
                }
                int div_cnt = 1;
                for(auto &f: factors){
                    div_cnt*=(f.second+1);
                }

                if(div_cnt == 4){
                    int sum = 0;
                    for(int i = 1; i*i <= n; i++){
                        if(n%i==0){
                            sum+=i;
                            if(i!=n/i){
                                sum+=n/i;
                            }
                        }
                    }
                    result_sum+=sum;
            }
        }
        return result_sum;
    }
};