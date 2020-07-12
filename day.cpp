//this is the implementation of the .cpp of day
//cs202

#include "day.h"
#include <iostream>

//default day constructor
day::day()
{
} 
day::~day()
{
    dayOfWeek = NULL;
    //call proglist destructor
}

//default feelsList constructor
feelsList::feelsList()
{
    next = NULL; 
}

int feelsList::displayFeels()
{
    return displayFeels(next);
}

//recursive call
int feelsList::displayFeels(feeling *& head)
{
    if(!head) return 0;

    head->displayFeel();
    std::cout << std::endl;

    return displayFeels(head->to_next()) + 1; //traverse
}

//recursive funciton
int feelsList::addFeel(feeling new_feel, feeling *& head)
{
    if(!head) //if we reach the end
    {
        head = new feeling;
        head->copyFeeling(new_feel);
        head->to_next() = NULL; 
        return 0; //exit after adding
    }
    addFeel(new_feel, head->to_next()); //advance in the recursive call itself
    //segs after 3

    return 1;
}

//wrapper idk if its even necesary
int feelsList::addFeel(feeling & new_feel)
{
    if(!next) //if empty
    {
        next = new feeling;
        next->copyFeeling(new_feel);
        next->to_next() = NULL; 
        return 0;
    }
    else
    {
    return addFeel(new_feel, next); //recursive call handles traversal
    } 
    return 1; //ugh, only if necesasry
}

int feelsList::removeAllFeels(feeling *& head)
{
    if(!head) return 0;

    int count = 1 + removeAllFeels(head->to_next()); //traversal occurs here

    delete head;
    head = NULL;

    return count;
}

//default feelsList destructor
feelsList::~feelsList()
{
    if(next)
    {
        removeAllFeels(next);
    }
}
