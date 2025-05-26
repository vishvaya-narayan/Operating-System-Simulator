#include "memory_manager.h"
#include <iostream>

void MemoryManager::run() {
    allocatePage(1, 0);
    allocatePage(2, 1);
    displayMemory();
}

void MemoryManager::allocatePage(int processId, int pageNumber) {
    if (frames.size() < FRAME_COUNT) {
        frames.push_back(processId);
        pageTable[pageNumber] = processId;
    }
}

void MemoryManager::displayMemory() const {
    std::cout << "Memory Frames:\n";
    for (int i = 0; i < frames.size(); ++i) {
        std::cout << "Frame " << i << ": Process " << frames[i] << "\n";
    }
}
