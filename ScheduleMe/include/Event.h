#ifndef EVENT_H
#define EVENT_H

#include <string>

struct Event
{
    std::string name;
    int minsToComplete;
    char priority;
    int dueDate;        //  need to think about how you re going to interact
                        //  with this value to tell how much more time is left
    std::string category;

    Event();
    virtual ~Event();

    void fillEntryForm();

};

#endif // EVENT_H
