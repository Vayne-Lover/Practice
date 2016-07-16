//
//  main.cpp
//  StackWithMin
//
//  Created by 姜况童 on 7/15/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
template <class T>
class StackWithMin {
    void push(T);
    void pop();
    T Min();
public:
    stack<T> min;
    stack<T> data;
};
//template <class T>
//void StackWithMin<T>::push(const T &value)
//{
//    
//}
template<typename T>
void Swap(T &i,T &j)
{
    T temp=i;
    i=j;
    j=temp;
}
int main(int argc, const char * argv[]) {
    int a=1;
    int b=2;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
