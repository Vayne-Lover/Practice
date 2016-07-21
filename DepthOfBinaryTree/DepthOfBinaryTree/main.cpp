//
//  main.cpp
//  DepthOfBinaryTree
//
//  Created by 姜况童 on 7/21/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
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
int DepthOfTree(BinaryTree* tree)
{
    if(tree==nullptr)
    {
        return 0;
    }
    int left=DepthOfTree(tree->left);
    int right=DepthOfTree(tree->right);
    return (left>right)?(left+1):(right+1);
}
int main(int argc, const char * argv[]) {
    BinaryTree* a;
    AddToTree(&a, 1);
    BinaryTree*b;
    AddToTree(&b, 2);
    BinaryTree*c;
    AddToTree(&c, 3);
    BinaryTree*d;
    AddToTree(&d, 4);
    BinaryTree*e;
    AddToTree(&e, 5);
    BinaryTree*f;
    AddToTree(&f, 6);
    a->left=b;
    b->left=c;
    a->right=d;
    d->left=e;
    d->right=f;
    return 0;
}
