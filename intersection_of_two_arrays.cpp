#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
        
  
    {
        sort (nums1.begin (), nums1.end ());
        sort (nums2.begin (), nums2.end ());
        
        vector <int>::iterator it1 = nums1.begin ();
        vector <int>::iterator it2 = nums2.begin ();
        
        vector <int> ret;
        while (it1 != nums1.end () && it2 != nums2.end ())
        {
            if (*it1 == *it2)
            {
                if (ret.empty () || ret.back () != *it1)
                    ret.push_back (*it1);
                it1++;
                it2++;
            }
            else
            {
                if (*it1 < *it2)
                    it1++;
                else
                    it2++;
            }
        }
        return ret;
        
    }
};

void printArray(vector<int>arr) 
{ 
    int i; 
    for (i = 0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}

int main() {
   
        vector<int> nums1 {1,2,3,4};
        printArray(nums1);

        vector<int> nums2 {2,8,4};
        printArray(nums2);
        
        vector<int> ret = Solution().intersection(nums1, nums2);
        printArray(ret);

      // output : 2,4       
 
    return 0;
}