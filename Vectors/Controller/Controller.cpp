//
//  Controller.cpp
//  Vectors
//
//  Created by Perkins, Ryan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    vectorReturn();
}

void Controller :: vectorReturn()
{
    //use pushBack for adding to vectors
    int arrayLength = 5;
    string stringArray[5] = {"Yes", "Hello", "Hi", "It's me", "Aloha"};
    int intArray[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < arrayLength; i++)
    {
        cout << intArray[i] << endl;
    }
    for (int i = 0; i < arrayLength; i++)
    {
        cout << stringArray[i] << endl;
    }
}
