//This is the implementation of the main function of this project
//Project 1
//CS202
#include <fstream>
#include <iostream>

//#include "task.h" //currently checking if our base class works
#include "day.h"

using namespace std;
//pass whatever you're modding here by REF SO YOU ACTUALLY DO THINGS TO IT

int testTask();
int testFeels();
int testCry();
int testProgram();
int testFeelList();
int testDayFlist();
int testCryList();
int testPList();

int main()
{
    //inits an empty week
    //displays an empty week 
    cout << "Prog #1 Choices: " << endl;
    cout << " 1. create a task " << endl;
    cout << " 2. create a feel " << endl;
    cout << " 3. create a program " << endl;
    cout << " 4. create a feellist " << endl;
    cout << " 5. feellist in day " << endl;
    cout << " 6. create a cry " << endl;
    cout << " 7. crylist in day" << endl; 
    cout << " 8. pllist in day" << endl; 
    cout << " 0 to exit " << endl;
    cout << "input a choice :" << endl;
    int option;
    cin >> option;
    cin.ignore(100, '\n');
    do
    {
        if(option == 1)
        {
            testTask();

            cout << "Prog #1 Choices: " << endl;
            cout << " 1. create a task " << endl;
            cout << " 2. create a feel " << endl;
            cout << " 3. create a program " << endl;
            cout << " 0 to exit " << endl;
            cout << "input a choice :" << endl;
            cin >> option;
            cin.ignore(100, '\n');
        }
        if(option == 2)
        {
            testFeels();

            cout << "Prog #1 Choices: " << endl;
            cout << " 1. create a task " << endl;
            cout << " 2. create a feel " << endl;
            cout << " 3. create a program " << endl;
            cout << " 0 to exit " << endl;
            cout << " input a choice: " << endl;
            cin >> option;
            cin.ignore(100, '\n');
        }
        if(option == 3)
        {
            testProgram();
            cout << "Prog #1 Choices: " << endl;
            cout << " 1. create a task " << endl;
            cout << " 2. create a feel " << endl;
            cout << " 3. create a program " << endl;
            cout << " 0 to exit " << endl;
            cout << " input a choice: " << endl;
            cin >> option;
            cin.ignore(100, '\n');
        }
        if(option == 4)
        {
            testFeelList();

            cout << "Prog #1 Choices: " << endl;
            cout << " 1. create a task " << endl;
            cout << " 2. create a feel " << endl;
            cout << " 3. create a program " << endl;
            cout << " 0 to exit " << endl;
            cout << " input a choice: " << endl;
            cin >> option;
            cin.ignore(100,'\n');
        }
        if(option == 5)
        {
            testDayFlist();

            cout << "Prog #1 Choices: " << endl;
            cout << " 1. create a task " << endl;
            cout << " 2. create a feel " << endl;
            cout << " 3. create a program " << endl;
            cout << " 0 to exit " << endl;
            cout << " input a choice: " << endl;
            cin >> option;
            cin.ignore(100,'\n');
        }
        if(option == 6)
        {
            testCry();
            cout << "Prog #1 Choices: " << endl;
            cout << " 1. create a task " << endl;
            cout << " 2. create a feel " << endl;
            cout << " 3. create a program " << endl;
            cout << " 0 to exit " << endl;
            cout << " input a choice: " << endl;
            cin >> option;
            cin.ignore(100,'\n');
        }
        if(option == 7)
        {
            testCryList();
        }
        if(option == 8)
        {
            testPList();
        }
    }
    while(option != 0);
    return 0;
}

//should call the app class' addTask
int testTask()
{
    cout << "Testing a task" << endl;

    cout << "Creating a task" << endl;
    cout << "Name your task : " << endl;
    char tN[20]; //taskName
    cin >> tN;
    cin.ignore(100, '\n');

    //testing paramterized constructor
    task newtask(tN); //this guy just fizzles after we leave scope 
    //cry etc..

    //testing copy + compare
    cout << "OG : " << endl;
    newtask.displayTask();
    cout << endl;

    task emptyTask;
    emptyTask.cpTask(newtask);
    cout << "New: " << endl; 
    emptyTask.displayTask();
    cout << endl;

    cout << "Comparing..." << endl;
    if(newtask.compareTaskName(emptyTask) == 0)
    {
        cout << "match" << endl;
    }
    else
    {
        cout << " no match " << endl; }
    cout << endl;

    newtask.displayTask();
    cout << "setting done..." << endl;
    newtask.setDone();
    newtask.displayTask();
    return 1; 
}

int testFeels()
{
    cout << "Testing feel" << endl;
    cout << "Creating a feeling" << endl;

    cout << "Name your feeling: " << endl;
    char tN[20]; //taskName
    cin >> tN;
    cin.ignore(100, '\n');
    feeling oh_no(tN); //still non-dynamic...

    cout << "OG : " << endl;
    oh_no.displayFeel();
    cout << endl;

    feeling ruh_roh;
    ruh_roh.copyFeeling(oh_no); 
    cout << "New: " << endl; 
    ruh_roh.displayFeel();
    cout << endl;

    cout << "Comparing Curr val..." << endl; //compares by curr val
    if(ruh_roh.compareFeelCurr(oh_no) == 0)
    {
        cout << "match" << endl;
    }
    else
    {
        cout << " no match " << endl;
    }
    cout << endl;

    ruh_roh.displayFeel(); 
    cout << endl;
    cout << "setting curr " << endl;
    cout << "input newCurr val: " << endl;
    int newCurr;
    cin >> newCurr;
    cin.ignore(100, '\n');
    ruh_roh.setCurr(newCurr);
    ruh_roh.displayFeel(); 
    cout << endl; 

    cout << "Comparing Curr val..." << endl; //compares by curr val
    if(ruh_roh.compareFeelCurr(oh_no) == 0)
    {
        cout << "match" << endl;
    }
    else
    {
        cout << "not match" << endl;
    }

    cout << "increasing curr " << endl;
    ruh_roh.increaseCurr();
    ruh_roh.displayFeel();

    cout << "setting done " << endl; 
    ruh_roh.setDone();
    ruh_roh.displayFeel();
    cout << endl;    

    cout << "compar task name " << endl;
    cout << "first " << endl;
    ruh_roh.displayFeel();
    cout << endl;

    cout << "second " << endl;
    oh_no.displayFeel();
    cout << endl;

    if(ruh_roh.compareFeelName(oh_no) == 0)
    {
        cout << "match" << endl;
    }
    else
    {
        cout << "no match" << endl;
    }

    return 0;
}

int testProgram()
{
    cout << "testing program" << endl;
    cout << "creating a program " << endl;
    cout << "Name your programming assingment: " << endl;
    char tN[20]; //taskName
    cin >> tN;
    cin.ignore(100, '\n');
    program oh_no(tN); //still non-dynamic...

    oh_no.displayProgram();
    cout << endl;

    cout << "OG: " << endl;
    oh_no.displayProgram();
    cout << endl;

    cout <<"New: " << endl;
    program cpo;
    cpo.copyProg(oh_no);
    cpo.displayProgram();
    cout << endl;

    cout << "Comparing prog name: " << endl;
    if(oh_no.compareProgName(cpo) == 0)
    {
        cout << "match" << endl;
    }
    else
    {
        cout << "no match " << endl;
    }

    cout << "setting overwhelmed 1/2" << endl;
    cpo.setOverWhelmed();
    cpo.displayProgram();
    cout << "setting overwhelmed 2/2" << endl;
    cpo.setOverWhelmed();
    cpo.displayProgram();

    cout << "setting hrs" << endl;
    int hrs;
    cout << "input #: " << endl;
    cin >> hrs;
    cin.ignore(100, '\n');

    cpo.setHours(hrs);
    cpo.displayProgram();

    cout << "set done " << endl;
    cpo.setDone();
    cpo.displayProgram();

    return 1;
}

int testFeelList()
{
    bool done = false;
    bool done2 = false;
    cout << "Feel list" << endl;

    feelsList fList;    

    do //adding feels to the list
    {
        cout << "creating a feel" << endl;

        cout << "gimme a name " << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');

        feeling f1(name);
        cout << "created " << endl;
        f1.displayFeel();
        cout << endl;

        cout << "inserting to list" << endl;
        fList.addFeelWrap(f1); //not sure if working
        fList.displayFeels(); //not printing

        cout << "add another? y/n" << endl;

        char finish;
        cin >> finish;
        cin.ignore(100, '\n');
        if(finish == 'n')
        {
            done = true;
        }
    }
    while(done == false);

    do
    {
        cout << "remove a feel " << endl;
        fList.displayFeels();
        cout << "name a feel to remove:" << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');

        fList.removeFeel(name); 
        cout << "deleting: " << endl;

        cout << "current list: " << endl;
        fList.displayFeels();


        cout << "delete another? y/n" << endl; 
        char finish; 
        cin >> finish; 
        cin.ignore(100, '\n');
        if(finish == 'n')
        {
            done2 = true;
        }
    }
    while(done2 == false);

    //delete one feel
    //then display the list

    return 1;
}

int testDayFlist()
{
    bool done = false;
    bool done2 = false;
    day day1; //does this init fList?
    do
    {
        cout << "make a feel" << endl;

        cout << "gimme a name " << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');

        feeling f1(name);
        cout << "created " << endl;
        f1.displayFeel();
        cout << endl;

        cout << "inserting to list" << endl;

        //ok this interaction is segfaulting 
        day1.addFeeling(f1); 
        day1.displayFList();

        cout << "add another? y/n" << endl;

        char finish;
        cin >> finish;
        cin.ignore(100, '\n');
        if(finish == 'n')
        {
            done = true;
        }
    }
    while(done == false);

    do
    {
        cout << "remove a feel " << endl;
        day1.displayFList();
        cout << "name a feel to remove:" << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');
        day1.removeFeeling(name); 
    }
    while(done2 == false);
    return 1;
}

int testCry()
{
    cout << "testing cry" << endl;
    cout << "creating a cry" << endl;

    cout << "Name your cry: " << endl;
    char cN[20]; //cryName
    cin >> cN;
    cin.ignore(100, '\n');
    cry whelp(cN); //still non-dynamic...

    //DISPLAY
    whelp.displayCry();
    cout << endl;

    cout << "OG: " << endl;
    whelp.displayCry();
    cout << endl;

    cout <<"New: " << endl;
    cry another; 
    another.copyCry(whelp); 
    another.displayCry();
    cout << endl;

    cout << "Comparing cry name: " << endl;
    if(another.compareCryName(whelp) == 0)
    {
        cout << "match" << endl;
    }
    else
    {
        cout << "no match " << endl;
    }

    //NEEDS MODIFICATION
    cout << "set done " << endl;
    another.setDone();
    another.displayCry();

    return 1;
}

int testCryList()
{
    bool done = false;
    bool done2 = false;
    day day1; //does this init fList?
    do
    {
        cout << "make a cry" << endl;
        cout << "gimme a name " << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');

        cry c1(name);
        cout << "created " << endl;
        c1.displayCry();
        cout << endl;

        cout << "inserting to list" << endl;
        
        day1.addaCrying(c1);
        day1.displayCList();

        cout << "add another? y/n" << endl;

        char finish;
        cin >> finish;
        cin.ignore(100, '\n');
        if(finish == 'n')
        {
            done = true;
        }
    }
    while(done == false);

    //the remove loop needs <3
    do
    {
        cout << "remove a feel " << endl;
        day1.displayCList();
        cout << "name a feel to remove:" << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');
        day1.removeaCrying(name); 
    }
    while(done2 == false);
    return 1;
}

int testPList()
{
    bool done = false;
    bool done2 = false;
    day day1; //does this init fList?
    do
    {
        cout << "make a prog" << endl;
        cout << "gimme a name " << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');

        program p1(name);
        cout << "created " << endl;
        p1.displayProgram();
        cout << endl;

        cout << "inserting to list" << endl;
       
        day1.addaProgram(p1); //segfaulting
        day1.displayPList();

        cout << "add another? y/n" << endl;

        char finish;
        cin >> finish;
        cin.ignore(100, '\n');
        if(finish == 'n')
        {
            done = true;
        }
    }
    while(done == false);

    //the remove loop needs <3
    do
    {
        cout << "remove a feel " << endl;
        day1.displayPList();
        cout << "name a feel to remove:" << endl;
        char name[20];
        cin >> name;
        cin.ignore(100, '\n');
        day1.removeaProg(name); 
    }
    while(done2 == false);
    return 1;
}
