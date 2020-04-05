// Find Anagram Mappings - index mapping

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
       map<int, int> mapper; // It's difficult to come up with new names
       int count = 0;
        vector<int> answer;
        for(int a: A){
           for(int b: B){
               if(a == b){
                   answer.push_back(count);
                   break;
               }
               count++;
           }
           count = 0;
       }
        return answer;
    }
};
