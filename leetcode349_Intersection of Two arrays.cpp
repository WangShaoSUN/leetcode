#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution{
  /*

     用到集合的思想去除多余元素，来求两个vector的交集
     @author sam_wang
  */
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         set<int> container;
         set<int> intersect;
         for (size_t i = 0; i < nums1.size(); i++) {
             container.insert(nums1[i]);
         }
         for (size_t i = 0; i <nums2.size() ; i++) {
            if (container.count(nums2[i])==1) {
                 intersect.insert(nums2[i]);
            }
         }
        vector<int> ::iterator it;
        vector<int> ret(intersect.begin(),intersect.end());
        for (it = ret.begin(); it < ret.end(); it++) {
          std::cout << *it << '\n';
        }
        return ret;
    }
};
int main(int argc, char const *argv[]) {
  Solution sol;
  vector<int> num1;
  num1.push_back(1);
  num1.push_back(2);
  num1.push_back(2);
  num1.push_back(1);

  vector<int> num2;
  num2.push_back(2);
  num2.push_back(2);
  sol.intersection(num1,num2);
  return 0;
}
