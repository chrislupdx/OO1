//This is the implementation of the task.cpp file
//tasks are the simplest unit in the class Coping.  
//Task.cpp
//Chris Lu

#include "task.h"
#include <cstddef>
//default constructor
task::task()
{
    name = NULL; 
    done = false; //default constructor invokes done false by default 
    next = NULL;
}

//recursive deletion of the task list (its a LL)
int task::removeTasks(task *& head)
{
    if(!head) return 0; 

    int count = 1 + removeTasks(head->next); //advancing here

    delete head;
    head = NULL;

    return count;
}

//default destructor
task::~task()
{

    done = false; //what else can we do to bools

    if(name)
        delete [] name;
    
    if(next)
    {
        removeTasks(next);
    }
}



//copies the arguement into the calling class
int task::cpTask(task & task_toCopy)
{
    return 1;
}
