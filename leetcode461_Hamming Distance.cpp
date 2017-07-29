#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
/*
Copyright (c) 2016 Copyright Wang All Rights Reserved.
leetcode  arranging coins
*/
static int bits_in_char [256] = {
   0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4, 1, 2, 2, 3, 2, 3, 3, 4, 2,
   3, 3, 4, 3, 4, 4, 5, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3,
   3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3,
   4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4,
   3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5,
   6, 6, 7, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4,
   4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5,
   6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 2, 3, 3, 4, 3, 4, 4, 5,
   3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 3,
   4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 4, 5, 5, 6, 5, 6, 6, 7, 5, 6,
   6, 7, 6, 7, 7, 8
};
class Solution {
  union Int32
  {
     int a;
     unsigned char b[4];
  };

public:
    int hammingDistance(int x, int y) {

        x=x^y;
        Int32 un;
        un.a=x;
        int i;
        int bitcount=0;
        /*
           两种方法计算bit 1的个数,查表法和移位法 都行
        */
        // for ( i = 0; i < 4; i++) {
        //   bitcount+=bits_in_char[un.b[i]];
        // }
        for ( i = 0; i < 32; i++) {
          bitcount+=(x>>i)&1;
        }
       // std::cout << bitcount << '\n';
		return bitcount;
    }
};
int main(int argc, char const *argv[]) {
  Solution sol;
  cout<<sol.hammingDistance(4,1);
  return 0;
}
