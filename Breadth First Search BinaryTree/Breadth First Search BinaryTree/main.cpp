//
//  main.cpp
//  Breadth First Search BinaryTree
//
//  Created by 姜况童 on 7/18/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <deque>
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
void BreadthFirstSearch(BinaryTree* tree)
{
    if(tree==nullptr)
    {
        return;
    }
    deque<BinaryTree*> dequeTree;
    dequeTree.push_back(tree);
    while (dequeTree.size())
    {
        BinaryTree* node=dequeTree.front();
        dequeTree.pop_front();
        cout<<node->value<<endl;
        if(node->left)
        {
            dequeTree.push_back(node->left);
        }
        if(node->right)
        {
            dequeTree.push_back(node->right);
        }
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
    BreadthFirstSearch(a);
    return 0;
}
