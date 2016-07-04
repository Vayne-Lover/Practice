//
//  main.cpp
//  StringToInt
//
//  Created by 姜况童 on 7/4/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void STI()
{
    string str,line;
    int i;
    getline(cin,line);
    stringstream ss(line);
    ss<<str;
    ss>>i;
    cout<<i<<endl;
}

int main(int argc, const char * argv[]) {
    STI();
    return 0;
}
