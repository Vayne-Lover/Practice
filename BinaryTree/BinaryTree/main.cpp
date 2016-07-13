//
//  main.cpp
//  BinaryTree
//
//  Created by 姜况童 on 7/12/16.
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
void MirrorTree(BinaryTree* node)
{
    if(node==nullptr)
    {
        return;
    }
    if(node->left==nullptr || node->right==nullptr)
    {
        return;
    }
    BinaryTree* temp=node->left;
    node->left=node->right;
    node->right=temp;
    if(node->left)
    {
        MirrorTree(node->left);
    }
    if(node->right)
    {
        MirrorTree(node->right);
    }
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
    MirrorTree(a);
    Traversal(a);
    return 0;
}
