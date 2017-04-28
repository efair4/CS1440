#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include<string>
#include<vector>

class BinTree {
public:
    BinTree():m_root(nullptr), numNodes(0){}
    BinTree(const BinTree&);
    void insert(int value);
    bool search(int value);
    void removeAll();
private:
    class TreeNode{
    public:
        TreeNode(int data):
                data(data),
                left(nullptr),
                right(nullptr)
        {}
        int data;
        TreeNode* left;
        TreeNode* right;
    };
    int numNodes;
    std::vector<int> nodes;
    TreeNode* m_root;
    void insert(TreeNode*& node, TreeNode* newNode);
    bool search(TreeNode*& node, TreeNode* newNode);
    void remove(int, TreeNode*&);
    void remove(TreeNode*&);
};

#endif