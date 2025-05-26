#ifndef SYSTEM_STATE_H
#define SYSTEM_STATE_H

#include "process_scheduler.h"
#include "memory_manager.h"
#include "virtual_file_system.h"
#include <thread>
#include <atomic>

class SystemState {
public:
    SystemState(ProcessScheduler* ps, MemoryManager* mm, VirtualFileSystem* vfs);
    void startMonitoring();
    void stopMonitoring();

private:
    void monitor();
    std::atomic<bool> monitoring;
    std::thread monitorThread;
    ProcessScheduler* scheduler;
    MemoryManager* memory;
    VirtualFileSystem* vfs;
};

#endif // SYSTEM_STATE_H
