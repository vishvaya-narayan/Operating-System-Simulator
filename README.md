# Operating System Simulator (C++)

This project simulates the core functionalities of an operating system through a command-line interface. It includes:

- 🧵 Process Scheduling (FCFS, SJF)
- 🧠 Memory Management (Paging)
- 📁 Virtual File System (Create, Read, Write, Delete)
- 🖥️ System State Monitoring (Processes, Memory, Filesystem)
- 🧑‍💻 User Interaction via CLI

## 🔧 Features

| Module               | Description                                    |
|----------------------|------------------------------------------------|
| Process Scheduler    | Supports FCFS & SJF algorithms                 |
| Memory Manager       | Simulates memory with paging                   |
| Virtual File System  | Create, delete, read, and write files          |
| CLI Commands         | Add/manage processes, memory, files            |
| System Monitor       | Displays real-time OS state with threading     |

## 🛠️ Build & Run

### Prerequisites:
- C++17 compatible compiler (e.g. `g++`, `clang++`)

### Build:
```bash
make
```

### Run:
```bash
./ossim
```

## 📂 Folder Structure
include/       -> Header files  
src/           -> Source code for each module  
MakeFile       -> Build instructions  
README.md      -> Project documentation

## ✅ Future Enhancements
- Add round-robin scheduling
- More realistic memory page replacement
- File permissions and directory hierarchy

## 👨‍💻 Author
Vishvaya Narayan
