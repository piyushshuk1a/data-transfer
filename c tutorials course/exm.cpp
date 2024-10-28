#include <stdio.h>

int main(void) {
	int W,H;
	scanf("%d %d", &W, &H);
	if(H>=110 && W<=75){printf("YES");}
	else{printf("No");}
	return 0;
}

