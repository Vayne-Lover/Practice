//
//  main.cpp
//  BagsOf01
//
//  Created by 姜况童 on 8/29/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
int findM(int N,int K,int G[],int W[])
{    int *M=new int[N+1],i,j,k;
    for(i=0;i<N+2;i++)
        M[i]=0;
    for(i=0;i<K;i++)
    {
        for(j=N;j>=G[i];j--)
        {
            for(k=1;j-k*G[i]>=0;k++)
            {
                M[j]=M[j]>k*W[i]+M[j-k*G[i]]?M[j]:k*W[i]+M[j-k*G[i]];
            }
        }
    }
    return M[N];
}
int main(int argc, const char * argv[]) {

    return 0;
}
