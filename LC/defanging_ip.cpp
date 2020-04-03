// Given a valid (IPv4) IP address, return a defanged version of that IP address.

class Solution {
public:
    string defangIPaddr(string address) {
        string answer = "";
        for(char c : address){
            if(c == '.'){
                answer += "[.]";    
            }else{
                answer += c;
            }
        }
        return answer;
    }
};
