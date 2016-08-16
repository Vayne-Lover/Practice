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
ComplexListNode* ReconnectNodes(ComplexListNode* head)
{
    ComplexListNode* node=head;
    ComplexListNode* clonedHead=nullptr;
    ComplexListNode* clonedNode=nullptr;
    
    if(node!=nullptr)
    {
        clonedHead=clonedNode=node->next;
        node->next=clonedNode->next;
        node=node->next;
    }
    
    while(node!=nullptr)
    {
        clonedNode->next=node->next;
        clonedNode=clonedNode->next;
        node->next=clonedNode->next;
        node=node->next;
    }
    
    return clonedNode;
}
ComplexListNode* Clone(ComplexListNode* head)
{
    CloneNodes(head);
    ConnectSiblingNodes(head);
    return ReconnectNodes(head);
}
int main(int argc, const char * argv[]) {
    ComplexListNode* a=nullptr;
    ComplexListNode* b=nullptr;
    ComplexListNode* c=nullptr;
    
    a->value=1;
    b->value=2;
    c->value=3;
    
    a->Sibling=b;
    b->Sibling=c;
    c->Sibling=a;
    
    ComplexListNode* newList=Clone(a);
    
    return 0;
}
