#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

struct package_t {
	char content[255];
	char source[255];
	char destination[255];
};

void sort_t(struct package_t buffer[10000]) {
	struct package_t buble; //dopulnitelna struktura za buble sort
	for(int k = 0; k < i; k++){
		for(int j = 0; j < i - k - 1; j++){ // -1 za da ne vliza i END a
			if(strlen(buffer[j].content) > strlen(buffer[j + 1].content)){
					buble = buffer[j];
					buffer[j] = buffer[j + 1];
					buffer[j + 1] = buble;
			}
		}
	}
}

int main() {

	//struct package_t buffer[10];
	struct package_t buffer[10000];
	while(1){
		scanf("%s", buffer[i].source);
		if(strcmp(buffer[i].source,"END") == 0) //da roboti dokato go terminirame izrichno. za bonusa
		{		
			break;
		}		
		scanf("%s", buffer[i].destination);
		fgets(buffer[i].content, 255, stdin);
		i++;
	}

	getchar();
	printf("sending out packets...\n");
	sort_t(buffer);

	for (int p = 0; p < i; p++) //p for print
	{
		printf("From %s To %s Content: %s", buffer[p].source, buffer[p].destination, buffer[p].content);
	}
		
	
	return 0;
}
