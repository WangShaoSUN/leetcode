#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
  /*
   @author sam_wang
   make use of exists elements in the array
   when we calculate index i means that index i/2
   has already been existed. shift one bit and test
   the little endian, test whether it is 1
  */
vector<int> countBits(int num) {
       std::vector<int> v(num+1,0);
        for (size_t i = 1; i <= num; i++) {
            v[i]=v[i/2]+i%2;
        }
        for (size_t i = 0; i <v.size(); i++) {
            std::cout << v[i] << '\n';
        }
        return v;
    }

};
int main(int argc, char const *argv[]) {
  Solution sol;
  sol.countBits(5);
  return 0;
}
