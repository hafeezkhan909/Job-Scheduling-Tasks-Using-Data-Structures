# Job-Scheduling-Tasks-Using-Data-Structures

## Abstract ##
The operating system provides a range of functions that include memory management, file management, I/O management, process management, networking, protection and interpreter systems. Process management is the most important function in these functions since an operating system is a system program that interacts with hardware during runtime. Scheduling algorithms are required for managing processes and play an important role in assigning resources to them for their execution. They determine how much CPU time must be allocated to the processes. The main objective of them is to attain high utilization of the system resources, taking in account the priority of the user corresponding to it and deadlines for the job. A process requires both, CPU time and I/O time for its execution. In a multi-programming system, a single process utilizes CPU while the other process is waiting for I/O. But in a uni-programming system, the entire time is misspent in waiting for I/O, even though CPU is unoccupied during that period. The goal of the process scheduling algorithms is to wisely utilize the CPU resources and maximize throughput while maintaining the waiting time low. 

## Objective ##
Implementation of the First-Come First-Served, preemptive Shortest Job First, Round Robin and Highest Response Ratio Next Scheduling algorithm using data structures. Queue data structures is used for the implementation of the scheduling algorithms. Essentially, tasks are placed in a circular queue, and when a task's allocated CPU time expires, it is moved to the back of queue, and a new task is taken from the front. The ready queue is maintained as a circular queue, so after all the processes have taken their turn, the scheduler gives the first process another turn, and so on.

## Implementation ##
communication between processes is speeded up through data queues. The presence of data queues frees up jobs from performing some work, leading to a faster response time and improved overall system performance. 

Queues are flexible and do not require communications programming. They can manage requests on a single shared resource for CPU-scheduling. They don't require any knowledge of interprocess communication. The computer can handle multiple tasks simultaneously by using data queues. 

Even when there are no jobs in the ready queue, the queue remains active, ready to process jobs as they enter the ready queue.
