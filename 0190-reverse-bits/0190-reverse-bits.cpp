class Solution {
public:
    int reverseBits(int n) {
        string bin_str = bitset<32>(n).to_string();
        reverse(bin_str.begin(),bin_str.end());

        return stoi(bin_str,nullptr,2);
    }
};