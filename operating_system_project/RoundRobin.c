#include <stdio.h>

#define MAX_PROCESSES 10
#define TIME_QUANTUM 2

struct Process {
    int pid;
    int burst_time;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
};

void calculateWaitingTime(struct Process processes[], int n) {
    int remaining_burst_time[MAX_PROCESSES];

    for (int i = 0; i < n; i++) {
        remaining_burst_time[i] = processes[i].burst_time;
    }

    int current_time = 0;

    while (1) {
        int all_done = 1;

        for (int i = 0; i < n; i++) {
            if (remaining_burst_time[i] > 0) {
                all_done = 0;

                if (remaining_burst_time[i] > TIME_QUANTUM) {
                    current_time += TIME_QUANTUM;
                    remaining_burst_time[i] -= TIME_QUANTUM;
                } else {
                    current_time += remaining_burst_time[i];
                    processes[i].waiting_time = current_time - processes[i].burst_time;
                    remaining_burst_time[i] = 0;
                }
            }
        }

        if (all_done)
            break;
    }
}

void calculateTurnaroundTime(struct Process processes[], int n) {
    for (int i = 0; i < n; i++) {
        processes[i].turnaround_time = processes[i].burst_time + processes[i].waiting_time;
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

        processes[i].remaining_time = processes[i].burst_time;
        processes[i].waiting_time = 0;
        processes[i].turnaround_time = 0;
    }

    calculateWaitingTime(processes, n);
    calculateTurnaroundTime(processes, n);
    displayProcessDetails(processes, n);

    return 0;
}
