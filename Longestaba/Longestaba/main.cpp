//
//  main.cpp
//  Longestaba
//
//  Created by 姜况童 on 8/23/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
int Longestaba(char * s,int n)
{
    int i,j,max,c;
    if(s==nullptr||n<=0)
    {
        return 0;
    }
    max=0;
    c=0;
    for(i=0;i<n;++i)
    {
        for(j=0;(i-j)>=0&&(i+j<n);++j)
        {
            if(s[i-j]!=s[i+j])
            {
                break;
            }
            c=j*2+1;
        }
        if(c>max)
        {
            max=c;
        }
        
        for(j=0;(i-j)>=0&&(i+j+1<n);++j)
        {
            if(s[i-j]!=s[i+j+1])
            {
                break;
            }
            c=j*2+2;
        }
        if(c>max)
        {
            max=c;
        }
    }
    return max;
}
int main(int argc, const char * argv[]) {
    
    return 0;
}
