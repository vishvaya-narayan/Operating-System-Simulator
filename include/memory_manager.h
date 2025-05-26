#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H

#include <vector>
#include <unordered_map>

class MemoryManager {
public:
    void run();
    void allocatePage(int processId, int pageNumber);
    void displayMemory() const;

private:
    static const int FRAME_COUNT = 8;
    std::unordered_map<int, int> pageTable;
    std::vector<int> frames;
};

#endif // MEMORY_MANAGER_H
