#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*
  @author wang
  @ BFS study and binary tree
  树的先序遍历

Copyright (c) 2017 Copyright Holder All Rights Reserved.
*/
struct TreeNode{
  int value;
  TreeNode* left;
  TreeNode* right;
  /*
   constructor  study 新颖的构造函数
  */
  TreeNode(int x): value(x),left(NULL),right(NULL){}
};
class Solution{
private:
  std::vector<vector<int>> level;
  void preOrder(TreeNode* root,int depth){
    if(NULL==root)
      return;
    /*
     每次进入一个新的一层，vector 申请新的space
    */
    if (depth==level.size()) {
         level.push_back(vector<int>());  //study
    }
    level[depth].push_back(root->value);
    preOrder(root->left,depth+1);
    preOrder(root->right,depth+1);
  }
public:
  vector<vector<int>> levelOrder(TreeNode* root){
      preOrder(root,0);
      return level;
  }
};

int main(int argc, char const *argv[]) {
  TreeNode* a1=new TreeNode(3);
  TreeNode* a2=new TreeNode(9);
  TreeNode* a3=new TreeNode(20);
  TreeNode* a4=new TreeNode(15);
  TreeNode* a5=new TreeNode(7);
  a1->left=a2;
  a1->right=a3;
  a3->left=a4;
  a3->right=a5;
  Solution sol;
  std::vector<vector<int>> ret;
  ret=sol.levelOrder(a1);
  //test case
  // 本题应该还可以用queue+BFS 过的
  for(int i=0;i<ret.size();i++){
    for(int j=0;j<ret[i].size();j++)
       cout<<ret[i][j]<<"   ";
     std::cout  << '\n';
  }
  return 0;
}
