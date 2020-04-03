// Decompress Run-Length Encoded List

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> answer;
        int count, value;
        for(int i = 0; i < nums.size(); i = i+2){
            count = nums[i];
            value = nums[i+1];
            while(count > 0){
                answer.push_back(value);
                count--;
            }
        }
        return answer;
    }
};