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
        Traversal(tree->left);
        cout<<tree->value<<endl;
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

    BinaryTree* headNode=lastNode;
    while(headNode!=nullptr&&headNode->left!=nullptr)
    {
        headNode=headNode->left;
    }
    return headNode;
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
    BinaryTree*g;
    AddToTree(&g, 7);
    d->left=b;
    b->left=a;
    b->right=c;
    d->right=f;
    f->left=e;
    f->right=g;

    //Traversal(d);
    BinaryTree* result=Convert(d);
    BinaryTree* temp=result;
    while(temp)
    {
        cout<<temp->value<<endl;
        temp=temp->right;
    }
    return 0;
}
