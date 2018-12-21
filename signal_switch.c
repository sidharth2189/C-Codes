#include<stdio.h>
#include<time.h>
int main()
{
	int output, step_delay, index = 0, count = 0, step = 0, trigger = 5;
	int input[] = {1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1};
	int step_time = 1, sim_time = 25;               // seconds
	step_delay = step_time * CLOCKS_PER_SEC;        // step time clock ticks
	printf("---------------------Signal_Switch-------------------------\n");
	printf("Step time: %d sec\nSimulation time: %d sec\n",step_time,sim_time);
	printf("Input Output\n");
	clock_t t;
	t = clock();						            // set initial time ticks
	while((clock()-t) < (sim_time* CLOCKS_PER_SEC)) // check if time elapsed from start of simulation is within simulation time
	{
		if (clock() >= (t + step))                  // wait to evaluate next input element after end of step time
		{
			if(input[index] == 1)				    // check if input is 1
			{
				count++;
				if(count >= trigger){ output = 1; } // if specified time has elapsed, switch on output
				else { output = 0; }
				printf(" %d      %d\n", input[index],output);
				index++;
				step = step + step_delay;
			}
			if(((clock()-t) < (sim_time* CLOCKS_PER_SEC)) && (clock() >= (t + step)))
			{
				if(input[index] != 1)
				{
					count = 0;
					output = 0;
					printf(" %d      %d\n", input[index],output);
					index++;
					step = step + step_delay;
				}
			}
		}
	}
} 