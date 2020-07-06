//This is the implementation of the task.cpp file
//tasks are the simplest unit in the class Coping.  
//Task.cpp
//Chris Lu

#include "task.h"

//default constructor
task::task()
{
    name = NULL;
    done = false; //default constructor invokes done false by default
    next = NULL;
}

//default destructor
task::~task()
{
    if(name)
        delete [] name;
    if(done)
        delete [] 
}

//copies the arguement into the calling class
int task::cpTask(task & task_toCopy)
{

    return 1;
}
