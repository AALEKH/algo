// Split a String in Balanced Strings
// PS: Remember 0 == 0 is counting

class Solution {
public:
    int balancedStringSplit(string s) {
        int r_length = 0, l_length = 0;
        int count = 0;
        string answer = "";
        for(char element: s){
            if(r_length == l_length){
                count++;
                r_length = 0;
                l_length = 0;
            }
            if(element == 'R'){
                r_length++;
            }else{
                l_length++;
            }

        }
        return count;
    }
};
