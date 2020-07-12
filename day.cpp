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

int feelsList::addFeel(feeling & new_feel, feeling *& head)
{
    if(!head) return 0; //what if while instead of if

    addFeel(new_feel, head->to_next()); //traverse/recurse

    if(!head->to_next()) //if we are at the end
    {
        feeling * fTa = new feeling;
        fTa->copyFeeling(new_feel);
        head->to_next() = fTa;
        fTa->to_next() = NULL;
    }
    return 1;
}

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
    return 1;
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
