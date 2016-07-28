//
//  main.cpp
//  Sum Of S
//
//  Created by 姜况童 on 7/26/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
void Sum(int* a,int s)
{
    if (a==nullptr)
    {
        return;
    }
    int start=0;
    int last=(sizeof(a)/sizeof(int))-1;
    while (start<last)
    {
        int sum=*(a+start)+*(a+last);
        if(sum==s)
        {
            cout<<*(a+start)<<" "<<*(a+last)<<endl;
        }
        else if(s>sum)
        {
            last--;
        }
        else
        {
            start++;
        }
    }
}
int main(int argc, const char * argv[]) {
    int a[]={1,2,3,7,11,15};
    Sum(a, 12);
    return 0;
}
