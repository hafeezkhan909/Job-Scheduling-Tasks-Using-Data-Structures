#include <string.h>
#include <stdlib.h>


typedef struct
{
	char* name;
	int arrivalTime;
	int burst;
	int burstRemaining;
	int lastUse; 			
	int waitTime;
} PCB;



PCB* createEmptyPCB();
PCB* createPCB(char*, int, int, int, int, int);



PCB* createEmptyPCB()
{
	PCB* pcb = malloc(sizeof(PCB));
	pcb->waitTime = 0;
	return pcb;
}

// Full Input PCB Constructor
PCB* createPCB(char* name, int arrivalTime, int burst, int burstRemaining, int lastUse, int waitTime)
{
	PCB* pcb = malloc(sizeof(PCB));

	pcb->name = malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(pcb->name, name);
	pcb->arrivalTime = arrivalTime;
	pcb->burst = burst;
	pcb->burstRemaining = burstRemaining;
	pcb->lastUse = lastUse;
	pcb->waitTime = waitTime;

	return pcb;
}