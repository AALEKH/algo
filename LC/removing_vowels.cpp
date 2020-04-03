// Remove Vowels from a String

class Solution {
public:
    string removeVowels(string S) {
        string answer = "";
        for (char c: S){
            if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){
                answer += c;
            }
        }
        return answer;
    }
};
