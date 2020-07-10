//This is the implementation of the task.cpp file
//tasks are the simplest unit in the class Coping.  //Task.cpp
//Chris Lu

#include "task.h"
#include <cstddef>
#include <iostream> 

//default constructor
task::task()
{
    name = NULL; 
    done = false; //default constructor invokes done false by default 
    next = NULL;
}

//parameterized constructor
task::task(char * name_toadd)
{
    name = NULL;

    this->name = new char[strlen(name_toadd) + 1];
    strcpy(this->name, name_toadd);
}

//this goes to stuff for managing list
//recursive deletion of the task list (its a LL)
//int task::removeTasks(task *& head)
//{
//    if(!head) return 0; 
//
//    int count = 1 + removeTasks(head->next); //advancing here
//
//    delete head;
//    head = NULL;
//
//    return count;
//}

//default destructor
task::~task()
{
    done = false; //what else can we do to bools

    if(name)
        delete [] name;
}

//copies the bsnss content into the calling class
int task::cpTask(task & task_toCopy)
{
    //note: we do NOT delete prior material yet
    name = new char[strlen(task_toCopy.name) + 1];
    strcpy(name, task_toCopy.name);

    //done
    done = task_toCopy.done;

    //we aren't copying the prev/next poitners
    return 1;
}

//compares if the calling class' name matches (returns 1 if yes)
int task::compareTaskName(task & task_toCompare)
{
    if(strcmp(name, task_toCompare.name) == 0)
    {
        return 0;
    }
    return 1;
}


//this is the base display
int task::displayTask()
{
    if(name)
    {
        std::cout << "Task Name: " << this->name << std::endl;
    }

    //is this really doing what you want
    if(done == false)
    {
        std::cout << "Task Status: incomplete" << std::endl;
    }
    else
    {
        std::cout << "Task Status: did" << std::endl;
    }
    std::cout << std::endl;

    return 1;
}

//client-facing function designed to only turn stuff to done
int task::setDone()
{
    if(done == false)
    {
        done = true;
    }
    else
    {
        std::cout << "already done" << std::endl;
    }

    return 1;
}

//default constructor
feeling::feeling()
{
    task();
    //do we need to evoke the task()
    max = 0;
    min = 0;
    curr = 0;
}

//default destructor for this derived class, ints have no value
feeling::~feeling()
{
    //task::~task(); //no match for operator
    max = 0;
    min = 0;
    curr = 0;
}

//parameterized constructor just creates a name, ints have no value
feeling::feeling(char * name_toadd)
{
    name = new char[strlen(name_toadd) + 1];
    strcpy(name, name_toadd); 
   
    max = 10;
    curr = 1;
    min = 1;
    //this->name = name_toadd; 
    //task(name_toadd); 
   //feeling::feeling()
    //still deciding whether min/max/curr are one
    //call the task param consturctor
}

int feeling::displayFeel()
{
    if(name)
    {
    std::cout << "Name: " << name << std::endl;
    }
    
    //is this really doing what you want
    if(done == false)
    {
        std::cout << "Task Status: incomplete" << std::endl;
    }
    else
    {
        std::cout << "Task Status: did" << std::endl;
    }
    
    if(curr)
    {
        //currently printing junk...
        std::cout << "Curr: " << curr << std::endl;
    }
    if(max)
    {
        std::cout << "Max: " << max << std::endl;
    }
    if(min) //doesn't output zero :(
    {
        std::cout << "Min: " << min << std::endl;
    }

    return 1;
}

//do we need a version of this that takes pointer?
int feeling::copyFeeling(feeling & feeling_toCopy)
{
    //note: we do NOT delete prior material yet
    name = new char[strlen(feeling_toCopy.name) + 1];
    strcpy(name, feeling_toCopy.name);

    //these memberwise copies are not working
    done = new bool;
    done = feeling_toCopy.done; //can we just copy bool

    //huh1
    min = feeling_toCopy.min;
    curr = feeling_toCopy.curr;
    max = feeling_toCopy.max;
    return 1;
}

