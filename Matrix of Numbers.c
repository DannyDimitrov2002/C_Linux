#include <stdio.h>
#include <stdlib.h>

int main(){
	int masiv[1000][1000];

	int a = 15; // raboti s kakvoto chislo mu se podade v promenlivata. za bonus 1.

	int i, j;
	int vertikal_best = 0, horizontal_best = 0, diagonalR_best = 0, diagonalL_best;
	int vnow  = 0, hnow = 0, drnow = 0, dlnow = 0; 
	int Xv = 0, Yv = 0, Xh = 0, Yh = 0, Xdr = 0, Ydr = 0, Xdl = 0, Ydl = 0; //za vseki rezultat koordinatite
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < a; j++)
		{
			scanf("%d", &masiv[i][j]);
		}
	}

	//ne uspqh da go napravq samo s 2 cicula zatova izpolzwam tolkova mnogo promenlivi
	
	//horizontal
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < a - 3; j++)
		{
				hnow = (masiv[i][j])*(masiv[i][j+1])*(masiv[i][j+2])*(masiv[i][j+3]);
				if(hnow > horizontal_best)
				{
					horizontal_best = hnow;
					Xh = j;
					Yh = i;
				}
		}
	}

	//vertikal
	for(i = 0; i < a - 4; i++)
	{
		for(j = 0; j < a; j++)
		{
				vnow = (masiv[i][j])*(masiv[i+1][j])*(masiv[i+2][j])*(masiv[i+3][j]);
				if(vnow > vertikal_best)
				{
					vertikal_best = vnow;
					Xv = j;
					Yv = i;
				}
		}
	}

	//diagonal RIGHT
	for(i = 0; i < a - 4; i++)
	{
		for(j = 0; j < a - 4; j++)
		{
				drnow = (masiv[i][j])*(masiv[i+1][j+1])*(masiv[i+2][j+2])*(masiv[i+3][j+3]);
				if(drnow > diagonalR_best)
				{
					diagonalR_best = drnow;
					Xdr = j;
					Ydr = i;
				}
		}
	}

	//diagonal LEFT
	for(i = 0; i < a; i++)
	{
		for(j = 3; j < a - 3; j++)
		{
				dlnow = (masiv[i][j])*(masiv[i+1][j-1])*(masiv[i+2][j-2])*(masiv[i+ 3][j-3]);
				if(vnow > diagonalL_best)
				{
					diagonalL_best = dlnow;
					Xdl = j;
					Ydl = i;
				}
		}
	}

	if(vertikal_best > horizontal_best && vertikal_best > diagonalR_best && vertikal_best > diagonalL_best)
	{
		printf("%d %d %d vertikal\n", vertikal_best, Xv, Yv);
	}

	if(horizontal_best > vertikal_best && horizontal_best > diagonalR_best && horizontal_best > diagonalL_best)
	{
		printf("%d %d %d horizontal\n", horizontal_best, Xh, Yh);
	}

	if(diagonalR_best > vertikal_best && diagonalR_best > horizontal_best && diagonalR_best > diagonalL_best)
	{
		printf("%d %d %d diagonal\n", diagonalR_best, Xdr, Ydr);
	}
	
	if(diagonalL_best > vertikal_best && diagonalL_best > diagonalR_best && diagonalL_best > horizontal_best)
	{
		printf("%d %d %d diagonal\n", diagonalL_best, Xdl, Ydl);
	}


	
	return 0;
}
