//
//  main.cpp
//  UglyNumber
//
//  Created by 姜况童 on 8/5/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
bool IsUgly(int n)
{
    while (n%2==0)
    {
        n/=2;
    }
    while (n%3==0)
    {
        n/=3;
    }
    while (n%5==0)
    {
        n/=5;
    }
    return n==1?true:false;
}
int main(int argc, const char * argv[]) {
    cout<<IsUgly(15)<<endl;
    cout<<IsUgly(6)<<endl;
    cout<<IsUgly(11)<<endl;
    return 0;
}
