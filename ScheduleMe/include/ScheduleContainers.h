#ifndef SCHEDULECONTAINERS_H
#define SCHEDULECONTAINERS_H

#include <vector>
#include "Event.h"
#include "Schedule.h"

class ScheduleContainers
{
    std::vector allSchedules<Schedule>;

    public:
        ScheduleContainers();
        virtual ~ScheduleContainers();
};

#endif // SCHEDULECONTAINERS_H
