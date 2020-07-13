//this is the implementation of the .cpp of day
//cs202

#include "day.h"
#include <iostream>
#include <cstring>
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

//traverse and find
int feelsList::removeFeel(char * name_of_torm, feeling *& head)
{
    if(!head) return 0;

    removeFeel(name_of_torm, head->to_next());
    //if match 
    if(head->compareFeelName(name_of_torm) == 0)
    {
        feeling * temp = head->to_next();
        delete head;
        head = temp;
    }

    return 1;
}

int feelsList::removeFeel(char * name_of_torm)
{
    return removeFeel(name_of_torm, next);
}

//recursive call
int feelsList::addFeel(feeling & new_feel, feeling *& head)
{
    if(!head) return 0;

    addFeel(new_feel, head->to_next()); //traverse/recurse

    if(!head->to_next()) //if@EOL
    {
        feeling * fTa = new feeling;
        fTa->copyFeeling(new_feel);
        head->to_next() = fTa;
        fTa->to_next() = NULL;
    }
    return 1;
}

int feelsList::addFeelWrap(feeling & new_feel)
{
    //next != null @ the day layer...
    if(next == NULL) //if empty
    {
        next = new feeling;
        next->copyFeeling(new_feel);
        next->to_next() = NULL; 
        return 0;
    }
    else
    {
    addFeel(new_feel, next); //recursive call handles traversal
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

//default day constructor
day::day()
{
    prevDay = NULL;
    nextDay = NULL;
    
    //we need to allocate a new fList;
} 

day::~day()
{
    //dayOfWeek = NULL;
    //call proglist destructor
}

//calls feelList's display
int day::displayFList()
{
    return fList.displayFeels();
}

int day::removeFeeling(char * name_torm)
{
    return fList.removeFeel(name_torm);
}

int day::addFeeling(feeling & new_feel)
{
    //does this function need to pass anything else down
    fList.addFeelWrap(new_feel);
    return 1;
}

