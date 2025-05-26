#ifndef PROCESS_SCHEDULER_H
#define PROCESS_SCHEDULER_H

#include <vector>
#include <string>

struct Process {
    int pid;
    int burstTime;
    int arrivalTime;
    int remainingTime;
    bool completed;
};

class ProcessScheduler {
public:
    void run();
    void createProcess(int pid, int burstTime, int arrivalTime);
    void displayProcesses() const;
private:
    std::vector<Process> processes;
    void fcfs();
    void sjf();
    void simulate();
};

#endif // PROCESS_SCHEDULER_H
