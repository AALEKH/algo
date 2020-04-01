// How Many Numbers Are Smaller Than the Current Number

/*

"""Wrong Code"""": 
  class Solution {
  public:
      vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
          vector<int> answer;
          map<int, int> frequency;
          map<int, int>::iterator it;
          for(int i = 0; i < nums.size(); i++){
              for(int j = 0; j < nums.size(); j++){
                  if((nums[i] < nums[j]) && (nums[i] != nums[j])){
                      if ( frequency.find(nums[i]) == frequency.end() ) {
                        frequency[nums[i]] = 1;
                      } else {
                        frequency[nums[i]] += 1;
                      }
                  }else{
                      frequency[nums[i]] = 0;
                  }
              }
          }

          for ( it = frequency.begin(); it != frequency.end(); it++ ){
              answer.push_back(it->second);
          }

          return answer;
      }
  };
*/
