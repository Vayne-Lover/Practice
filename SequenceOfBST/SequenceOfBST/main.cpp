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
bool Vertify(int* seq,int len)
{
    if(seq==nullptr||len<=0)
    {
        cerr<<"Nullptr or err length"<<endl;
        return false;
    }
    int root=*(seq+len-1);
    int i=0;
    for(;i<len-1;++i)
    {
        if(*(seq+i)>root)
        {
            break;
        }
    }
    
    int j=i;
    for(;j<len-1;++j)
    {
        if(*(seq+j)<root)
        {
            return false;
        }
    }
    bool left=true;
    if(i>0)
    {
        left=Vertify(seq, i);
    }
    bool right=true;
    if(i<len-1)
    {
        right=Vertify(seq+i,len-1-i);
    }
    return left&&right;
}
int main(int argc, const char * argv[]) {
    
    return 0;
}
