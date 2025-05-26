#include "system_state.h"
#include <iostream>
#include <chrono>
#include <thread>

SystemState::SystemState(ProcessScheduler* ps, MemoryManager* mm, VirtualFileSystem* vfs)
    : scheduler(ps), memory(mm), vfs(vfs), monitoring(false) {}

void SystemState::startMonitoring() {
    monitoring = true;
    monitorThread = std::thread(&SystemState::monitor, this);
}

void SystemState::stopMonitoring() {
    monitoring = false;
    if (monitorThread.joinable()) monitorThread.join();
}

void SystemState::monitor() {
    while (monitoring) {
        std::cout << "\n--- System State ---\n";
        scheduler->displayProcesses();
        memory->displayMemory();
        vfs->listFiles();
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
}
