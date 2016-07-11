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
ListNode* MergeNode(ListNode* headNode1,ListNode* headNode2)//There shoule not be **
{
    if(headNode1==nullptr)
    {
        return headNode2;
    }
    else if(headNode2==nullptr)
    {
        return headNode1;
    }
    ListNode* headNode=nullptr;
    if(headNode1->value<headNode2->value)
    {
        headNode=headNode1;
        headNode->next=MergeNode(headNode1->next, headNode2);
    }
    else
    {
        headNode=headNode2;
        headNode->next=MergeNode(headNode1, headNode2->next);
    }
    return headNode;
}
int main(int argc, const char * argv[]) {//Once merged the a and b will change
    ListNode* a=nullptr;                        //If you don't want to change a,b you should use c,d AddTail to new memory
    ListNode* b=nullptr;
    AddToList(&a, 2);
    AddToList(&a, 6);
    AddToList(&a, 7);
    AddToList(&a, 11);
    AddToList(&b, 1);
    AddToList(&b, 13);
    ListNode* newList1=nullptr;
    while (newList1!=nullptr)
    {
        cout<<newList1->value<<endl;
        newList1=newList1->next;
    }
    return 0;
}
