//
//  main.cpp
//  ConvertBinarySearchTree
//
//  Created by 姜况童 on 8/19/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
struct BinaryTree
{
    int value;
    BinaryTree* left;
    BinaryTree* right;
};
void AddToTree(BinaryTree** tree,int value)
{
    if(tree==nullptr)
    {
        return ;
    }
    *tree=new BinaryTree();
    (*tree)->value=value;
}
void Traversal(BinaryTree* tree)//Recursion
{
    if(tree==nullptr)
    {
        return;
    }
    if(tree!=nullptr)
    {
        cout<<tree->value<<endl;
        Traversal(tree->left);
        Traversal(tree->right);
    }
}
void ConvertNode(BinaryTree* node,BinaryTree** lastNode)
{
    if(node==nullptr)
    {
        return;
    }
    BinaryTree* current=node;
    if(current->left!=nullptr)
    {
        ConvertNode(current->left,lastNode);
    }
    current->left=*lastNode;
    if(*lastNode!=nullptr)
    {
        (*lastNode)->right=current;
    }
    *lastNode=current;
    if(current->right!=nullptr)
    {
        ConvertNode(current->right, lastNode);
    }
}
BinaryTree* Convert(BinaryTree* root)
{
    BinaryTree* lastNode=nullptr;
    ConvertNode(root, &lastNode);
    BinaryTree*head=nullptr;
    BinaryTree* headNode=lastNode;
    while(headNode!=nullptr&&headNode->left!=nullptr)
    {
        headNode=head->left;
    }
    return head;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
