#ifndef VIRTUAL_FILE_SYSTEM_H
#define VIRTUAL_FILE_SYSTEM_H

#include <string>
#include <unordered_map>

class VirtualFileSystem {
public:
    void run();
    void createFile(const std::string& filename);
    void deleteFile(const std::string& filename);
    void writeFile(const std::string& filename, const std::string& content);
    void readFile(const std::string& filename) const;
    void listFiles() const;

private:
    std::unordered_map<std::string, std::string> files;
};

#endif // VIRTUAL_FILE_SYSTEM_H
