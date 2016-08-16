//
//  main.cpp
//  ComplexListNodeClone
//
//  Created by 姜况童 on 8/14/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
struct ComplexListNode
{
    int value;
    ComplexListNode* next;
    ComplexListNode* sibling;
};
void CloneNodes(ComplexListNode* head)
{
    ComplexListNode* node=head;
    while(node!=nullptr)
    {
        ComplexListNode* cloned=new ComplexListNode();
        cloned->value=node->value;
        cloned->next=node->next;
        cloned->sibling=node->sibling;
        
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
        if(node->sibling!=nullptr)
        {
            cloned->sibling=node->sibling->next;
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
    //cout<<clonedNode->next<<endl;
    return clonedNode;
}
ComplexListNode* Clone(ComplexListNode* head)
{
    CloneNodes(head);
    ConnectSiblingNodes(head);
    return ReconnectNodes(head);
}
void Traversal(ComplexListNode* head)
{
    if(head==nullptr)
    {
        cerr<<"Nullptr"<<endl;
        return;
    }
    ComplexListNode* temp=head;
    while(temp!=nullptr)
    {
        cout<<"Self Value:"<<temp->value<<endl;
        cout<<"Sibling Value:"<<temp->sibling->value<<endl;
        temp=temp->next;
    }
}
int main(int argc, const char * argv[]) {
    ComplexListNode* a=new ComplexListNode();
    ComplexListNode* b=new ComplexListNode();
    ComplexListNode* c=new ComplexListNode();
    ComplexListNode* d=new ComplexListNode();
    ComplexListNode* e=new ComplexListNode();
    
    a->value=1;
    b->value=2;
    c->value=3;
    d->value=4;
    e->value=5;
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=nullptr;
    
    a->sibling=b;
    b->sibling=c;
    c->sibling=d;
    d->sibling=e;
    e->sibling=a;
    
    ComplexListNode* newList=Clone(a);
    //Traversal(a);
    //cout<<newList->next->value<<endl;
    Traversal(newList);
    
    return 0;
}
