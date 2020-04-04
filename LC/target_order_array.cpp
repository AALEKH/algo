/*
I used below given convoluted thinking before going to discussion section to ultimately find out what general(Pseudo-Code) 
in c++ and python community of LC recommended(It's a very clever solution for everyone who came up with it) but what I wanted
to do is accomplish something like: https://leetcode.com/problems/create-target-array-in-the-given-order/discuss/556906/short-c%2B%2B
*/
// std::unordered_set<int> num_index;
//  int int_variable;
//  int i=0, j=0, l;
//  for(i,j; i < nums.size() && j< index.size(); i++, j++){
//      if (num_index.find(index[j]) != num_index.end()){
// // Element is present 
//          int_variable = answer[index[j]];
//          answer[index[j]] = nums[i];
//          for(l=index[j]; l < nums.size(); l++){
//              if(l < nums.size()){
//                  answer[l-1] = int_variable;
//                  if(l + 1 < nums.size()){
//                      int_variable = answer[l];    
//                  }
//              }else{
//                  answer.push_back(int_variable);
//              }
//          }
//      }else{
// // Element not found
//          num_index.insert(index[j]);
//          answer.push_back(nums[i]);
//      }
//  }
//  return answer;


class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++){
            answer.insert(answer.begin() + index[i], nums[i]);
        }
        return answer;
    }
};
