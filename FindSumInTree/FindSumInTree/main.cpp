//
//  main.cpp
//  FindSumInTree
//
//  Created by 姜况童 on 7/19/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <vector>
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
void FindPath(BinaryTree* root,int sum,vector<int> &path,int now)
{
    now+=root->value;
    path.push_back(root->value);
    bool isLeaf=(root->left!=nullptr&&root->right!=nullptr);
    if(now==sum&&isLeaf)
    {
        for(auto it=path.begin();it!=path.end();++it)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    if(root->left!=nullptr)
    {
        FindPath(root->left, sum, path, now);
    }
    if(root->right!=nullptr)
    {
        FindPath(root->right, sum, path, now);
    }
    path.pop_back();
}
void FindSum(BinaryTree* root,int sum)
{
    if(root==nullptr)
    {
        return;
    }
    vector<int> path;
    int nowSum=0;
    FindPath(root,sum,path,nowSum);
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
    FindSum(a, 6);
    return 0;
}
