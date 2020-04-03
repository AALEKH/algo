// Implementing Single-Row Keyboard

class Solution {
public:
    int abs(int n){
        return (n>0)?n:(-1*n);
    }
    
    int calculateTime(string keyboard, string word) {
        int index_one = 0, index_two = 0, sum = 0;
        for(int i = 0; i < word.length(); i++){
            for(int j = 0; j < keyboard.length(); j++){
                if(word[i] == keyboard[j]){
                    index_two = j;
                    sum += abs(index_two - index_one);
                    index_one = index_two;
                }
            }
        }
        return sum;
    }
};
