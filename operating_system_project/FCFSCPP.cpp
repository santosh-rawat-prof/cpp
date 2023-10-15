#include <iostream>
#include <vector>

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
};

void calculateTimes(std::vector<Process>& processes) {
    int n = processes.size();

    processes[0].completionTime = processes[0].arrivalTime;
    processes[0].waitingTime = 0;
    processes[0].turnaroundTime = processes[0].burstTime;

    for (int i = 1; i < n; i++) {
        processes[i].completionTime = processes[i - 1].completionTime + processes[i].burstTime;
        processes[i].waitingTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].turnaroundTime = processes[i].waitingTime + processes[i].burstTime;
    }
}

void displayTable(const std::vector<Process>& processes) {
    std::cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n";
    for (const auto& process : processes) {
        std::cout << process.id << "\t\t" << process.arrivalTime << "\t\t" << process.burstTime << "\t\t"
                  << process.completionTime << "\t\t" << process.waitingTime << "\t\t" << process.turnaroundTime << "\n";
    }
}

int main() {
    int n;
    std::cout << "Enter the number of processes: ";
    std::cin >> n;

    std::vector<Process> processes(n);
    std::cout << "Enter the arrival time and burst time for each process:\n";
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        std::cout << "Process " << processes[i].id << " Arrival Time: ";
        std::cin >> processes[i].arrivalTime;
        std::cout << "Process " << processes[i].id << " Burst Time: ";
        std::cin >> processes[i].burstTime;
    }

    calculateTimes(processes);
    displayTable(processes);

    return 0;
}