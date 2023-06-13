#ifndef TREE
#define TREE


#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

//层序遍历

vector<vector<int> > levelOrder(TreeNode *root) {
  vector<vector<int> > ans;
  if (!root) return ans;

  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty()) 
  {
    int levelSize = q.size();//限定了全部元素出队后在进行入队操作
    vector<int> temp;
    for (int i =0; i <levelSize ; i++) {
      TreeNode *node = q.front();
      q.pop();
      temp.push_back(node->val);
      if(node->left) q.push(node->left);
      if (node->right) q.push(node->right);
    }
    ans.push_back(temp);
  }
  return ans;
}

//由BFS可以解决无权最短路径问题
//相对的Dijkstra算法可以解决带权最短路径


//网格的DFS参见https://mp.weixin.qq.com/s?__biz=MzA5ODk3ODA4OQ==&mid=2648167208&idx=1&sn=d8118c7c0e0f57ea2bdd8aa4d6ac7ab7&chksm=88aa236ebfddaa78a6183cf6dcf88f82c5ff5efb7f5c55d6844d9104b307862869eb9032bd1f&token=1064083695&lang=zh_CN#rd





#endif