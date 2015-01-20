#include <iostream>
#include <fstream>
#include <ctime>

#include "ScheduleContainers.h"
#include "Schedule.h"
#include "Event.h"

using namespace std;

string name;
int score;

void mainMenu();

int prompt();

void processFromMain(int menuChoice);

int main()
{
    cout << "Welcome to ScheduleMe! What is your name?" << endl;
    cin >> name;

    cout << "Welcome " << name << "!" << endl;

    ifstream file(name);
    cout << "Loading you data now ... " << endl;
    mainMenu();

    int mainMenuChoice = prompt();

    processFromMain(mainMenuChoice);

    return 0;
}

void mainMenu(){
    cout << "\n\n\n\n\n";
    cout << "Name: " << name << "         Score: " << score << endl;

    time_t currentTime = time(0);
    struct tm * now = localtime( & currentTime );

    cout << "Date: " << now->tm_mon + 1 << "/"
                     << now->tm_mday << "/"
                     << now->tm_year+1900
                     << endl;

    cout << "1) View Schedule(s)" << endl;
    cout << "2) Add Schedule" << endl;
    cout << "3) Previously Done Tasks" << endl;
}

int prompt(){
    cout << "Please type the number of your option" << endl;
                    // Need to do some catches here
    int choice;
    cin >> choice;
    return choice;
}

void processFromMain(int menuChoice){
    switch(menuChoice){
    case 1:
        ScheduleContainers container;
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        "Awk! You didn't give me a number from the list...shutting down now";
        break;  //  Need to do something to catch the user not putting in a
                //  good number
    }
}
