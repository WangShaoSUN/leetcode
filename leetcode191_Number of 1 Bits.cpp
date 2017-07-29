#include <iostream>
using namespace std;
class Solution {
private:
  /* data */
  /*
    shift bits calculate the number of bit 1 
  */
public:
  int hammingWeight(uint32_t n) {
       int bitcount=0;
       for (size_t i = 0; i < 32; i++) {
         bitcount+=(n>>i)&1;
       }
       return bitcount;
   }
};
