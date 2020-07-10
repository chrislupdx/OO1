//This is the implementation of the main function of this project
//Project 1
//CS202
#include <fstream>
#include <iostream>

#include "task.h" //currently checking if our base class works

using namespace std;
//pass whatever you're modding here by REF SO YOU ACTUALLY DO THINGS TO IT

int testTask();
int testFeels();

int main()
{
    //inits an empty week
    //displays an empty week 
    cout << "Prog #1 Choices: " << endl;
    cout << " 1. create a task " << endl;
    cout << " 2. create a feel " << endl;
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
            cout << " 0 to exit " << endl;
            cout << " input a choice: " << endl;
            cin>> option;
            cin.ignore(100, '\n');
        }

        //cout << "Choices: " << endl;
        //cout << " 1. create a task " << endl;
        //cout << " 0 to exit " << endl;
    }
    while(option != 0);
    //create a a nice do/while loop

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

    cout << "Comparing..." << endl; //compares by name
        if(ruh_roh.copyFeeling(oh_no))
        {
            cout << "match" << endl;
        }
        else
        {
            cout << " no match " << endl;
        }
        cout << endl;
    
        ruh_roh.displayFeel(); 
        cout << "setting done..." << endl; 
        
        //do set done for this one 
        //ruh_roh.setDone();
        //ruh_roh.displayFeel();
    
    return 1;
}
