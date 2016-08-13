//
//  main.cpp
//  SequenceOfBST
//
//  Created by 姜况童 on 8/13/16.
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
void Traversal(BinaryTree* tree)
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
int main(int argc, const char * argv[]) {
    
    return 0;
}
