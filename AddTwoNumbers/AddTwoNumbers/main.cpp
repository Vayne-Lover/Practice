//
//  main.cpp
//  AddTwoNumbers
//
//  Created by 姜况童 on 7/29/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
int Add(int a,int b)
{
    int num,carry;
    do
    {
        num=a^b;
        carry=(a&b)<<1;
        a=num;
        b=carry;
    }
    while(b!=0);
    return a;
}
int main(int argc, const char * argv[]) {
    cout<<Add(3,5)<<endl;
    cout<<Add(60,500)<<endl;
    cout<<Add(0,5550)<<endl;
    return 0;
}
