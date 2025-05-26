#include "virtual_file_system.h"
#include <iostream>

void VirtualFileSystem::run() {
    createFile("file1.txt");
    writeFile("file1.txt", "Hello, OS Simulator!");
    readFile("file1.txt");
    listFiles();
}

void VirtualFileSystem::createFile(const std::string& filename) {
    files[filename] = "";
    std::cout << "File created: " << filename << "\n";
}

void VirtualFileSystem::deleteFile(const std::string& filename) {
    files.erase(filename);
    std::cout << "File deleted: " << filename << "\n";
}

void VirtualFileSystem::writeFile(const std::string& filename, const std::string& content) {
    files[filename] = content;
    std::cout << "Content written to " << filename << "\n";
}

void VirtualFileSystem::readFile(const std::string& filename) const {
    auto it = files.find(filename);
    if (it != files.end()) {
        std::cout << "Content of " << filename << ": " << it->second << "\n";
    } else {
        std::cout << "File not found.\n";
    }
}

void VirtualFileSystem::listFiles() const {
    std::cout << "Files in Virtual File System:\n";
    for (const auto& pair : files) {
        std::cout << "- " << pair.first << "\n";
    }
}
