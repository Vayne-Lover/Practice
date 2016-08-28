//
//  main.cpp
//  Longestaba
//
//  Created by 姜况童 on 8/23/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
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
void Manacher(char s[],int p[],int n)
{
    int i;
    int mx=0;
    int id=0;
    
    for(i=1;i<n;++i)
    {
        if(mx>i)
        {
            p[i]=p[2*id-i]<mx-i?p[2*id-i]: mx-i;
        }
        else
        {
            p[i]=1;
        }
        while(s[i+p[i]]==s[i-p[i]])
        {
            p[i]++;
        }
        if(p[i]+i>mx)
        {
            mx=p[i]+i;
            id=i;
        }
    }
}
int main(int argc, const char * argv[]) {
    char ch[]="ggadcdag";

    cout<<Longestaba(ch, 8)<<endl;
    return 0;
}
