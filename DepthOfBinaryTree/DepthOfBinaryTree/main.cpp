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
int main(int argc, const char * argv[]) {

    return 0;
}
