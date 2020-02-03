#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

	void printArray(vector<int>arr) 
   { 
    int i; 
    for (i = 0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << endl; 
  }


class Solution {
public:

 
    static bool compare_num(int num1, int num2)
    {
        string num1str = to_string(num1);
        string num2str = to_string(num2);
        
        return num1str+num2str > num2str+num1str;
        
    }
    string largestNumber(vector<int>& nums) {
        
       int lens = nums.size(), i;
          sort(nums.begin(), nums.end(), compare_num);
         
        vector<string> str(lens);
        
        for(i = 0; i < lens; ++i)
            str[i] = to_string(nums[i]);
      
        string result;
        for(i = 0; i < lens; ++i)
            result += str[i];
        if(result.empty() || result[0] == '0')
            return "0";
        return result;
        
    }
};



int main() {
  
        vector<int> nums {1,9,8};
        printArray(nums);
        
        string ret = Solution().largestNumber(nums);
       cout << ret << endl;

        //output : 821
    
    return 0;
}