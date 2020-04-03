// Given a non-empty array of integers, every element appears twice except for one. Find that single one.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count;
        map<int, int>::iterator it;
        int answer = 0;
        
        for(int num: nums){
            if (count.find(num) != count.end()) {
                count[num] = 0;
            } else {
                count[num] += 1;
            }
        }

        for ( it = count.begin(); it != count.end(); it++ ) {
            if(it->second == 1){
                answer = it->first;
            }
        }
        return answer;
    }
};
