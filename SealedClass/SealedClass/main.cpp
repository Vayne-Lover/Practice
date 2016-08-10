//
//  main.cpp
//  SealedClass
//
//  Created by 姜况童 on 8/10/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
using namespace std;
class SealedClass
{
public:
    static SealedClass* GetInstance()
    {
        return new SealedClass();
    }
    static void DeleteInstance(SealedClass* ins)
    {
        delete ins;
    }
private:
    SealedClass(){cout<<"Create an instance"<<endl;};
    ~SealedClass(){cout<<"Delete an instance"<<endl;};
};
int main(int argc, const char * argv[]) {
    SealedClass*  a=SealedClass::GetInstance();
    SealedClass::DeleteInstance(a);
    return 0;
}
