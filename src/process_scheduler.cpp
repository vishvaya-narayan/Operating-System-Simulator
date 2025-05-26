#include "process_scheduler.h"
#include <iostream>
#include <algorithm>

void ProcessScheduler::createProcess(int pid, int burstTime, int arrivalTime) {
    processes.push_back({pid, burstTime, arrivalTime, burstTime, false});
}

void ProcessScheduler::displayProcesses() const {
    for (const auto& p : processes) {
        std::cout << "PID: " << p.pid << ", Burst: " << p.burstTime << ", Arrival: " << p.arrivalTime << "\n";
    }
}

void ProcessScheduler::fcfs() {
    std::sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.arrivalTime < b.arrivalTime;
    });
    std::cout << "Running FCFS...\n";
    displayProcesses();
}

void ProcessScheduler::sjf() {
    std::sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.burstTime < b.burstTime;
    });
    std::cout << "Running SJF...\n";
    displayProcesses();
}

void ProcessScheduler::simulate() {
    createProcess(1, 5, 0);
    createProcess(2, 3, 2);
    createProcess(3, 8, 4);
    fcfs();
    sjf();
}

void ProcessScheduler::run() {
    simulate();
}
