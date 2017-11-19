#include <stdio.h>

int main(){

	int G;
	scanf("%d", &G);
	int gCoords[G][2]; // creating an Gx2 array

	// Goblin coordinates input
	for(int i = 0; i < G; i++){
		scanf("%d %d", &gCoords[i][0], &gCoords[i][1]); // x and y
	}

	int S;
	scanf("%d", &S);
	int sCoords[S][3]; // creating an Sx3 array

	//Sprinkler coordinates input
		for(int i = 0; i < S; i++){
		scanf("%d %d %d", &sCoords[i][0], &sCoords[i][1], &sCoords[i][2]); // x,y and r
	}

	int goblinsleft = G;
	for(int g = 0; g < G; g++){ //for every goblin
		for(int s = 0; s < S; s++ ){ //for every sprinkler
			int x = gCoords[g][0] - sCoords[s][0];
			int y = gCoords[g][1] - sCoords[s][1];
			if(x*x + y*y <= sCoords[s][2]*sCoords[s][2]){
				goblinsleft--;
				break;
			}
		}
	}

	printf("%d\n", goblinsleft);

	return 0;
}


