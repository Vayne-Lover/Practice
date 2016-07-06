//
//  main.cpp
//  ReverseList
//
//  Created by 姜况童 on 7/6/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <List>
using namespace std;
//struct ListNode{
//    int value;
//    ListNode* next;
//};
int main(int argc, const char * argv[]) {
    list<int> a;
    for (int i=0; i<10; ++i) {
        a.push_back(i);
    }
    a.reverse();
    for (auto j=a.begin() ; j!=a.end();++j) {
        cout<<*j<<endl;
    }
    return 0;
}
