//
//  main.cpp
//  LastNumberInCircle
//
//  Created by 姜况童 on 7/29/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
int LastNumberInCircle(int n,int m)
{
    int last=0;
    for(int i=2;i<=n;++i)
    {
        last=(last+m)%i;
    }
    return last;
}
int main(int argc, const char * argv[]) {
    cout<<LastNumberInCircle(5, 3)<<endl;
    return 0;
}
