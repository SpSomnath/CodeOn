#include<stdio.h>
#include<stdlib.h>
int main() {
	int line=20;
	system("mode con:cols=60 lines=20");
	int r = random_no();
	int score,i;
	char snack ="hello"; //to draw a shape
	//text fall up to down using loop 
	while(1){
		printf("\n");
		printf("%s",snack);
		system("cls");
	}

	printf("Random number betweeen 1 to 100 :%i",r);
	
	// sleep(2);
}
int random_no() {
	srand(time(0));
	int r=rand() % 60;
	return r;
}

