#include <iostream>
#include <fstream>


using namespace std;

string name;

int main()
{
    cout << "Welcome to ScheduleMe! What is your name?" << endl;
    cin >> name;

    cout << "Welcome " << name << "!" << endl;

    ifstream file(name);
    cout << "Loading you data now ... " << endl;



    return 0;
}
