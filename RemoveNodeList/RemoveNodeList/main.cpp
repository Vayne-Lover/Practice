//
//  main.cpp
//  RemoveNodeList
//
//  Created by 姜况童 on 7/7/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
};
void AddToTail(ListNode** listNode,int n)
{
    ListNode* newNode=new ListNode();
    newNode->value=n;
    newNode->next=nullptr;
    if(*listNode==nullptr)
    {
        *listNode=newNode;
    }
    else
    {
        ListNode* Node=*listNode;
        while(Node->next!=nullptr)
        {
            Node=Node->next;
        }
        Node->next=newNode;
    }
}
void RemoveNode(ListNode** listNode,int n)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        return ;
    }
    
    ListNode* deleteNode=nullptr;
    if((*listNode)->value==n)
    {
        deleteNode=*listNode;
        *listNode=(*listNode)->next;
    }
    else
    {
        ListNode* tempNode=*listNode;
        while (tempNode->next!=nullptr&&tempNode->next->value!=n)
        {
            tempNode=tempNode->next;
        }
        
        if(tempNode->next!=nullptr&&tempNode->next->value==n)
        {
            deleteNode=tempNode->next;
            tempNode->next=tempNode->next->next;
        }
    }
    
    if(deleteNode!=nullptr)
    {
        delete deleteNode;
        deleteNode=nullptr;
    }
}
int main(int argc, const char * argv[]) {
    ListNode *a=nullptr;
    AddToTail(&a, 2);
    AddToTail(&a, 6);
    AddToTail(&a, 9);
    AddToTail(&a, 11);
    RemoveNode(&a, 2);
    while(a!=nullptr)
    {
        cout<<a->value<<endl;
        a=a->next;
    }
    return 0;
}
