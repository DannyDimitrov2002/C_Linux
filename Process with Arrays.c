#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct process_t{
	int identificator;
	int time;
};


int main()
{

	struct process_t  array1[255], array2[255], array3[255], array4[255]; //4 opashki za procesori. NZ kak da gi napravq tolkova kolkoto potrebitelq vuvede(za bonusa).
	struct process_t this_process; //za vseki nov suzdavan process
	int now1 = 0, now2 = 0, now3 = 0, now4 = 0; //vremeto za segashniq process
	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0; //broqch na processi
	char new_process_time[81];
	int i = 0;
	while(1)
	{
		fgets(new_process_time,20,stdin);
		if(strcmp(new_process_time,"exit\n") == 0)
		{
			break;
		}

		this_process.identificator = i;
		this_process.time = atoi(new_process_time);
		
		//proverqvame kade e naj malko now i postavqme this_process tam
		if(now1 <= now2 && now1 <= now3 && now1 <= now4)
		{
			now1 += this_process.time;
			array1[i] = this_process;
			counter1++;
		}else if(now2 <= now1 && now2 <= now3 && now2 <= now4)
		{
			now2 += this_process.time;
			array2[i] = this_process;
			counter2++;
		}else if(now3 <= now1 && now3 <= now2 && now3 <= now4)
		{
			now3 += this_process.time;
			array3[i] = this_process;
			counter3++;
		}else{
			now4 += this_process.time;
			array4[i] = this_process;
			counter4++;
		}

		

		i++;
		if(i % 5 == 0){ //izvejdane na vseki 5 chisla
			if(counter1 == 1)printf("Queue for processor 1: %d process, Total time: %d", counter1, now1);
			else printf("Queue for processor 1: %d processes, Total time: %d", counter1, now1);

			if(counter2 == 1)printf("\nQueue for processor 2: %d process, Total time: %d", counter2, now2);
			else printf("\nQueue for processor 2: %d processes, Total time: %d", counter2, now2);

			if(counter3 == 1)printf("\nQueue for processor 3: %d process, Total time: %d", counter3, now3);
			else printf("\nQueue for processor 3: %d processes, Total time: %d", counter3, now3);

			if(counter4 == 1)printf("\nQueue for processor 4: %d process, Total time: %d\n", counter4, now4);
			else printf("\nQueue for processor 4: %d processes, Total time: %d\n", counter4, now4);

		}



	}

    return 0;
}
