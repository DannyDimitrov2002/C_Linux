#include <stdio.h>
#include <stdlib.h>

struct vector_t{
	int count;
	//int size;
	int *items;
};

void init(struct vector_t *vec)
{
	printf("Init vector\n");
	vec -> count = 0;
	vec -> items = (int*)malloc(sizeof(int));
}

void resize(struct vector_t *vec, int new_size){
	printf("Resize vector to %d\n", new_size);
	vec -> items = realloc(vec -> items, new_size * sizeof(int));
}

void push(struct vector_t *vec, int item)
{
	printf("Push item %d\n", item);
	resize(vec, vec -> count + 1);
	vec -> items[vec-> count] = item;
	vec -> count++;
}

void pop(struct vector_t *vec)
{
	if(vec -> count <= 0){

	}
	//int item = vec -> items[--vec -> count];
	//resize(vec, vec -> count);	
	//resize(vec, vec -> count -1);
	//vec -> count --;
	return item;	
}

int main(){
	struct vector_t my_vec;	
	init(&my_vec);
	
	push(my_vec, 78);
	push(my_vec, 2);
	push(my_vec, 369);
	int res;
	for(int i = 0; i < 4; i++){
		if(pop(&my_vec, &res)){
			printf("Popped %d\n",res);
		}else printf("Out of items!\n\n");
	}
	return 0;
}
