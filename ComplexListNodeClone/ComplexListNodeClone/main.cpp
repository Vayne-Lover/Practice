//
//  main.cpp
//  ComplexListNodeClone
//
//  Created by 姜况童 on 8/14/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
struct ComplexListNode
{
    int value;
    ComplexListNode* next;
    ComplexListNode* Sibling;
};
void CloneNodes(ComplexListNode* head)
{
    ComplexListNode* node=head;
    while(node!=nullptr)
    {
        ComplexListNode* cloned=new ComplexListNode();
        cloned->value=node->value;
        cloned->next=node->next;
        cloned->Sibling=node->Sibling;
        node->next=cloned;
        node=cloned->next;
    }
}
void ConnectSiblingNodes(ComplexListNode* head)
{
    ComplexListNode* node=head;
    while(node!=nullptr)
    {
        ComplexListNode* cloned=node->next;
        if(node->Sibling!=nullptr)
        {
            cloned->Sibling=node->Sibling->next;
        }
        node=cloned->next;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
