// Write an algorithm to determine if a number is "happy".

class Solution {
public:
    int extractDigitsAndSquareThem(int n){
        int digit, sum = 0;
        while(n > 0){
            digit = n%10;
            sum = sum + digit*digit;
            n = (n)/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        map<int, int> array_element;
        int pres_value = extractDigitsAndSquareThem(n);
        
        do{
            
            array_element[pres_value] = 1;
            if(pres_value == 1){
                return true;
            }
            pres_value = extractDigitsAndSquareThem(pres_value);
            
        }while(array_element.find(pres_value) == array_element.end() );
        
        return false;
    }
};
