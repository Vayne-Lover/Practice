//
//  main.cpp
//  XOR
//
//  Created by 姜况童 on 7/23/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int XOR(int* a)
{
    int result=0;
    for(int i=0;i<11;++i)
    {
        result^=a[i];
    }
    return result;
}
int main(int argc, const char * argv[]) {
    int a[]={3,5,5,3,9,22,22,4,9,4,7};
    cout<<XOR(a)<<endl;
    return 0;
}
