#include <stdio.h>

#define MAX_PROCESSES 10

struct Process {
    int pid;
    int burst_time;
    int priority;
    int waiting_time;
    int turnaround_time;
};

void calculateWaitingTime(struct Process processes[], int n) {
    int total_waiting_time = 0;
    processes[0].waiting_time = 0;

    for (int i = 1; i < n; i++) {
        processes[i].waiting_time = processes[i - 1].burst_time + processes[i - 1].waiting_time;
        total_waiting_time += processes[i].waiting_time;
    }

    double avg_waiting_time = (double) total_waiting_time / n;
    printf("Average Waiting Time: %.2lf\n", avg_waiting_time);
}

void calculateTurnaroundTime(struct Process processes[], int n) {
    int total_turnaround_time = 0;

    for (int i = 0; i < n; i++) {
        processes[i].turnaround_time = processes[i].burst_time + processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    double avg_turnaround_time = (double) total_turnaround_time / n;
    printf("Average Turnaround Time: %.2lf\n", avg_turnaround_time);
}

void displayProcessDetails(struct Process processes[], int n) {
    printf("Process\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].burst_time,
               processes[i].priority, processes[i].waiting_time, processes[i].turnaround_time);
    }
}

void sortProcesses(struct Process processes[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].priority > processes[j + 1].priority) {
                // Swap processes[j] and processes[j + 1]
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Process processes[MAX_PROCESSES];
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time and priority for each process:\n");
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;

        printf("Process %d (Burst Time Priority): ", processes[i].pid);
        scanf("%d %d", &processes[i].burst_time, &processes[i].priority);

        processes[i].waiting_time = 0;
        processes[i].turnaround_time = 0;
    }

    sortProcesses(processes, n);
    calculateWaitingTime(processes, n);
    calculateTurnaroundTime(processes, n);
    displayProcessDetails(processes, n);

    return 0;
}
