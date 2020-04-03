// Find Numbers with Even Number of Digits

class Solution {
public:
    int isEven(int n){
        int sum = 0;
        while(n){
            n = n/10;
            sum++;
        }
        return sum;
    }
    
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int element: nums){
            if(isEven(element)%2 == 0){
                count++;
            }
        }
        return count;
    }
};
