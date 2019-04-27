#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct jivotno_t{
	char name[64];
	char species[64];
	char sex[10];
	unsigned int leg_count;
	unsigned int team_number;
};
struct otbor_t{
	char name[128];
	double player_payout;
	unsigned int max_players;
	unsigned int player_count;
	struct jivotno_t players[11];
};

void print_player(struct jivotno_t player){
	printf("%s %s %s %d %d \n", player.name,player.species,player.sex,
player.leg_count,player.team_number);
}
void print_otbor(struct otbor_t team){
	printf("%s %f %d\n", team.name, team.player_payout,
team.player_count);
	for(int i = 0; i < team.player_count; i++)
	{
		print_player(team.players[i]);
	}
}
int main(){

	struct jivotno_t chicken; //= {"Pesho", "Bird", "female",2,10};
	strcpy(chicken.name, "Pesho");
	strcpy(chicken.species, "Bird");
	strcpy(chicken.sex, "female");
	chicken.leg_count = 2;
	chicken.team_number = 10;

	


	struct otbor_t liverpool;
	strcpy(liverpool.name, "Liverpool FC");
	liverpool.player_payout = 6000;
	liverpool.max_players = 30;
	liverpool.player_count = 1;
	liverpool.players[0] = chicken;
	
	print_player(chicken);
	print_otbor(liverpool);
	return 0;
}
