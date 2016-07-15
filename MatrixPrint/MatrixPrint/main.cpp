//
//  main.cpp
//  MatrixPrint
//
//  Created by 姜况童 on 7/14/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int matrix[4][4];
    int count=1;
    for (int i=0;i<4;++i)
    {
        for (int j=0;j<4;++j)
        {
            matrix[i][j]=count;
            ++count;
        }
    }
    int test[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int test1[1][1]={0};
//    for (int i=0;i<4;++i)
//    {
//        for (int j=0;j<4;++j)
//        {
//            cout<<matrix[i][j]<<endl;
//        }
//    }
    PrintMatrix((int *)matrix, 4, 4);
    PrintMatrix((int *)test, 5, 5);
    PrintMatrix((int *)test1, 1, 1);
    return 0;
}
