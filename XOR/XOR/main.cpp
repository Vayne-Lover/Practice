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
int XOR(int* a,int len)
{
    int result=0;
    for(int i=0;i<len;++i)
    {
        result^=a[i];
    }
    return result;
}
//int Len(int* a)
//{
//    if (a==nullptr)
//    {
//        return 0;
//    }
//    else
//    {
//        return sizeof(a)/sizeof(a[0]);
//    }
//}
int main(int argc, const char * argv[]) {
    int a[]={3,5,5,3,9,22,22,4,9,4,7};
    int b[]={1,1,2,2,6,4,3,5,4,3,6};
    int c[]={2,2,3,3,5,5,1,1};
    cout<<XOR(a,sizeof(a)/sizeof(a[0]))<<endl;
    cout<<XOR(b,sizeof(b)/sizeof(b[0]))<<endl;
    cout<<XOR(c,sizeof(c)/sizeof(c[0]))<<endl;
    //cout<<sizeof(a)<<" "<<sizeof(a[0])<<" "<<(sizeof(a)/sizeof(a[0]))<<endl;
    return 0;
}
