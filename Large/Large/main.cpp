//
//  main.cpp
//  Large
//
//  Created by 姜况童 on 2016/10/23.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
int* FK(int a[],int b[],int a1,int b1)
{
    int c[a1+b1];
    for(int i=0;i<a1+b1;++i)
    {
        c[i]=0;
    }
    int p11=a1;
    int p22=b1;
    for(int i=0;i<a1+b1;++i)
    {
        //cout<<a[p11]<<" "<<b[p22]<<endl;
        c[i]=(a[p11]>=a[p22]?a[p11]:b[p22]);
        a[p11]>=a[p22]?(p11--):(p22--);
    }
//    for(int i=0;i<a1+b1;++i)
//    {
//        cout<<c[i]<<endl;
//    }
    return c;
}
int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5};
    int b[4]={2,6,7,8};
    int *result=FK(a,b,5,4);
//    for(int i=0;i<9;++i)
//        cout<<*(result+i)<<endl;
    return 0;
}
