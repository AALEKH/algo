// Jewels and Stones Problem

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(char j: J){
            for(char s: S){
                if(j == s){
                    count++;
                }
            }
        }
        return count;
    }
};
