// Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit, product = 1, sum = 0;
        vector<int> numbers;
        while(n > 0){
            digit = n%10;
            numbers.push_back(digit);
            n = (n)/10;
        }
        
        for(int n: numbers){
            product = product*n;
            sum = sum + n;
        }
        return (product - sum);
    }
};
