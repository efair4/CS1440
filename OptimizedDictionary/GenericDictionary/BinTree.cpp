//
// Created by Ember Fairbanks on 4/26/2017.
//

#include "BinTree.h"

BinTree::BinTree(const BinTree& obj){
    int num=obj.numNodes;
    numNodes=0;
    m_root=nullptr;
    for(int i=0;i<num;i++){
        insert(obj.nodes[i]);
    }
}

void BinTree::insert(int value){
	TreeNode* newNode = new TreeNode(value);
	insert(m_root, newNode);
    numNodes++;
    nodes.push_back(value);
}

void BinTree::insert(TreeNode*& node, TreeNode* newNode){
	if(node == nullptr) {
		node=newNode;
	}
	else  if(newNode->data < node->data){
		insert(node->left, newNode);
	}
	else {
		insert(node->right, newNode);
	}
}

bool BinTree::search(int value){
    TreeNode* newNode = new TreeNode(value);
    return search(m_root, newNode);
}

bool BinTree::search(TreeNode*& node, TreeNode* newNode){
    if(node == nullptr){
        return false;
    }
    else if(node->data==newNode->data){
        return true;
    }
    else if(node->data > newNode->data){
        return search(node->left, newNode);
    }
    else if(node->data < newNode->data){
        return search(node->right, newNode);
    }
    else{
        return false;
    }
}

void BinTree::removeAll() {
    int value;
    for(int i=numNodes-1;i>=0;i--) {
        value=nodes[i];
        nodes.erase(nodes.begin()+i);
        bool valueExists = search(value);
        if (valueExists) {
            remove(value, m_root);
        }
    }
    numNodes=0;
}

void BinTree::remove(int value, TreeNode*& node) {
    if (value < node->data) {
        remove(value, node->left);
    }
    else if (value>node->data) {
        remove(value, node->right);
    }
    else {
        remove(node);
    }
}

void BinTree::remove(TreeNode*& node) {
    if (node->left == nullptr) {
        TreeNode* temp = node;
        node = node->right;
        delete temp;
    }
    else if (node->right == nullptr) {
        TreeNode* temp = node;
        node = node->left;
        delete temp;
    }
    else {
        insert(node->right, node->left);
        TreeNode* temp = node;
        node = node->right;
        delete temp;
    }
}

