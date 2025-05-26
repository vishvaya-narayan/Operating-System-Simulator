#include <iostream>
#include "process_scheduler.h"
#include "memory_manager.h"
#include "virtual_file_system.h"
#include "system_state.h"

int main() {
    ProcessScheduler scheduler;
    MemoryManager memory;
    VirtualFileSystem vfs;
    SystemState systemState(&scheduler, &memory, &vfs);

    int choice;
    bool running = true;
    while (running) {
        std::cout << "\n===== Operating System Simulator =====\n";
        std::cout << "1. Run Process Scheduler\n";
        std::cout << "2. Run Memory Manager\n";
        std::cout << "3. Run Virtual File System\n";
        std::cout << "4. Start System Monitor\n";
        std::cout << "5. Stop System Monitor\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                scheduler.run();
                break;
            case 2:
                memory.run();
                break;
            case 3:
                vfs.run();
                break;
            case 4:
                systemState.startMonitoring();
                break;
            case 5:
                systemState.stopMonitoring();
                break;
            case 0:
                systemState.stopMonitoring();
                running = false;
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }
    }

    return 0;
}
