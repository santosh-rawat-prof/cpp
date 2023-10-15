#include <stdio.h>

#define MAX_PROCESSES 10

struct Process {
    int pid;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

void calculateWaitingTime(struct Process processes[], int n) {
    processes[0].waiting_time = 0;  // First process has no waiting time

    for (int i = 1; i < n; i++) {
        processes[i].waiting_time = processes[i - 1].waiting_time + processes[i - 1].burst_time;
    }
}

void calculateTurnaroundTime(struct Process processes[], int n) {
    for (int i = 0; i < n; i++) {
        processes[i].turnaround_time = processes[i].waiting_time + processes[i].burst_time;
    }
}

void displayProcessDetails(struct Process processes[], int n) {
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].burst_time,
               processes[i].waiting_time, processes[i].turnaround_time);
    }
}

int main() {
    struct Process processes[MAX_PROCESSES];
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;

        printf("Process %d: ", processes[i].pid);
        scanf("%d", &processes[i].burst_time);
    }

    calculateWaitingTime(processes, n);
    calculateTurnaroundTime(processes, n);
    displayProcessDetails(processes, n);

    return 0;
}
