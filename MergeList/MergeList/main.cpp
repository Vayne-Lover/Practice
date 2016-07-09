//
//  main.cpp
//  MergeList
//
//  Created by 姜况童 on 7/9/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
};
void AddToList(ListNode** listNode,int n)
{
    if(listNode==nullptr)
    {
        return;
    }
    ListNode* newNode=new ListNode();
    newNode->value=n;
    newNode->next=nullptr;
    if(*listNode==nullptr)
    {
        *listNode=newNode;
    }
    else
    {
        ListNode* tempNode=*listNode;
        while (tempNode->next!=nullptr)
        {
            tempNode=tempNode->next;
        }
        tempNode->next=newNode;
    }
}
void RemoveNode(ListNode** listNode,int value)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        return;
    }
    ListNode* deleteNode=nullptr;
    if((*listNode)->value==value)
    {
        deleteNode=*listNode;
        *listNode=(*listNode)->next;
    }
    else
    {
        ListNode* tempNode=*listNode;
        while (tempNode->next!=nullptr&&tempNode->next->value!=value)
        {
            tempNode=tempNode->next;
        }
        if(tempNode->next!=nullptr&&tempNode->next->value==value)
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
ListNode* ReverseNode(ListNode** listNode)
{
    if(listNode==nullptr||*listNode==nullptr)
    {
        return nullptr;
    }
    ListNode* reverseNode=nullptr;
    ListNode* nowNode=*listNode;
    ListNode* previousNode=nullptr;
    while(nowNode!=nullptr)
    {
        ListNode* nextNode=nowNode->next;
        if (nextNode==nullptr)
        {
            reverseNode=nowNode;
        }
        nowNode->next=previousNode;
        previousNode=nowNode;
        nowNode=nextNode;
    }
    return reverseNode;
}
int main(int argc, const char * argv[]) {
    ListNode* a=nullptr;
    ListNode* b=nullptr;
    AddToList(nullptr, 2);
    AddToList(&a, 2);
    AddToList(&a, 6);
    AddToList(&a, 7);
    AddToList(&a, 11);
    RemoveNode(nullptr, 6);
    RemoveNode(&b, 6);
    ReverseNode(nullptr);
    ReverseNode(&b);
    ListNode* c=ReverseNode(&a);
    while(c!=nullptr)
    {
        cout<<c->value<<endl;
        c=c->next;
    }
    return 0;
}
