//
//  main.cpp
//  CPlusStrings
//
//  Created by Alabudi, Joseph on 2/2/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#include <iostream>
#include "main.h"

using namespace std;

main :: main()
{
    strings = "Strings";
    sickStrings = "Oh a suh dude";
}

void main :: start()
{
    numberMethods();
    
}

void main :: numberMethods()
{
    int count = strings.size();
    cout << "The number of letters in the derpy variable is: " << count << endl;
    cout << "So, the size() method of string works like the length method of Java on String" << endl;
    
    cout << sickStrings.at(4) << endl;
    
    
    string temp = strings.substr(3);
    cout << temp << endl;
    
    string letters = "ABC";
    char letterN = letters[0];
    cout << letterN << endl;
    
    string temp2 = sickStrings.substr(2, 4);
    cout << temp2 << endl;
    
   if (strings.compare(sickStrings) != 0)
   {
       cout << strings << "is not " << sickStrings << endl;
   }
    
    if (strings.empty())
    {
        cout << "This string is empty"
    }

}
