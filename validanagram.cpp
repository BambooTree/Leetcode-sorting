#include <iostream>
using namespace std;

class Solution {
public:
   
      bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        int counts[26] = {0};
        for (int i = 0; i < n; i++)
         { 
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i <26; i++)
        {
            if (counts[i]!=0)
                return false;
        }
        return true;
     
    }
};

int main() {
    //Input: s = "anagram", t = "nagaram"
  
        string s = "anagram";
   
        string t = "nagaram";
        
        bool ret = Solution().isAnagram(s, t);

        
        cout << ret << endl;
    
    return 0;
}