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
    max = 10;
    min = 1;
    curr = 1;
}

//default destructor for this derived class, ints have no value
feeling::~feeling()
{
    //how do we do destructor for this
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


//returns 0 if currs match
int feeling::compareFeelCurr(feeling & feeling_toCompare)
{
    //not sure the best >= in c++
    if(curr == feeling_toCompare.curr)
    {
        return 0;
    }
    return 1;
}

//returns 0 if match
int feeling::compareFeelName(char * feelname)
{
    if(strcmp(name, feelname) == 0)
    {
        return 0;
    }
    return 1;
}

//return 0 if a match
int feeling::compareFeelName(feeling & feeling_tocp)
{
    if(strcmp(name, feeling_tocp.name) == 0)
    {
        return 0;
    }
    return 1;
}

//sets the calling class' curr
int feeling::setCurr(int val_toset)
{
    curr = val_toset;
    return 1;
}

//++curr
int feeling::increaseCurr()
{
    curr++;
    return 1;
}

//this is a wrapper that calls task's setDone, kan haz virtualization
int feeling::setDone()
{
    task::setDone();
    return 1;
}

feeling *& feeling::to_next() { return next;} //this getter returns the next node;

program::program()
{
    task(); //i thinnk
    is_overwhelmed = false;
    hours = 1;
}

program::~program()
{//technically unnecessary unitializitng
    //is_overwhelmed = false; 
    //hours = 0; //as opposed to 1
}

//paramterized constructor takes a name
program::program(char * name_toadd)
{
    name = new char[strlen(name_toadd) + 1];
    strcpy(name, name_toadd);

    is_overwhelmed = false;
    hours = 1; //we're setting it to a generic 1 bc 0 is hard to print

    next = NULL; 
}

int program::displayProgram()
{
    if(name)
    {
        std::cout << "Name: " << name << std::endl;
    }
    if(done == false)
    {
        std::cout << "Task status: incomplete" << std:: endl;
    }
    else
    {
        std::cout << "Task status: did" << std::endl;
    }
    if(hours)
    {
        std::cout << "Hours: " << hours << std::endl;
    }
    if(is_overwhelmed == true)
    {
        std::cout << "Overwhelmed: yes" << std::endl;
    }
    else
    {
        std::cout << "Overwhelmed: no" << std::endl;
    }

    return 0;
}

//does not take/pass poitners
int program::copyProg(program & prog_tocopy)
{
    //do we care about 2cp's parent(task) items other htan name
    name = new char[strlen(prog_tocopy.name) + 1];
    strcpy(name, prog_tocopy.name);

    is_overwhelmed = new bool;
    is_overwhelmed = prog_tocopy.is_overwhelmed;

    hours = prog_tocopy.hours;
    return 1;
}

//copmpares name, returns 0 on match
int program::compareProgName(program & prog_tocp)
{
    if(strcmp(name, prog_tocp.name) == 0)
    {
        return 0;
    }
    //return 1;
    return 1;
}

//just togggles overwhelmed1
int program::setOverWhelmed()
{
    if(is_overwhelmed == true)
    {
        is_overwhelmed = false;
        return 0;
    }
    if(is_overwhelmed == false)
    {
        is_overwhelmed = true; 
        return 0;
    }
    return 1; //something is wrong if this happens
}

int program::setHours(int hours_toset)
{
    hours = hours_toset;  

    return 0;
}

int program::setDone()
{
    task::setDone();
    return 1;
}

cry::cry()
{
    task();
    sighs = 1; //sighs are junk rn
}

cry::~cry()
{
    sighs = 0; 
}

cry::cry(char * name_toadd)
{
    name = new char[strlen(name_toadd) + 1];
    strcpy(name, name_toadd); 
    sighs = 1;
}

int cry::displayCry()
{
    if(name)
    {
        std::cout << "Name: " << name << std::endl;
    }
    if(done == false)
    {
        std::cout << "Task Status: incomplete" << std::endl;
    }
    else
    {
        std::cout << "Task Status: did" << std::endl;
    }
    if(sighs)
    {
        std::cout << "Sighs: " << sighs << std::endl;
    }
    return 1;
}

int cry::copyCry(cry & cry_tocopy)
{
    name = new char[strlen(cry_tocopy.name) + 1];
    strcpy(name, cry_tocopy.name);

    done = new bool;
    done = cry_tocopy.done; //can we just copy bool

    sighs = cry_tocopy.sighs;

    return 1;
}

int cry::compareCryName(char * cryname)
{
    if(strcmp(name, cryname) == 0)
    {
        return 0;
    }
    return 1;

}

int cry::compareCryName(cry & cry_tocp)
{
    if(strcmp(name, cry_tocp.name) == 0)
    {
        return 0;
    }
    return 1;
}

int cry::setSighs(int sigh_toset)
{
    sighs = sigh_toset;
    return 1;
}
