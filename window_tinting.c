#include<stdio.h>

int main(){
	int rw = 5*12; //role wide in inch 60
	int rl = 92*12; //role long in inch 1104


	//Getting info from user
	int f;
	printf("Enter the number of floors\n");
	scanf("%d",&f);
	
	int w;
	printf("Enter the number of windows of each floors (all sides)\n");
	scanf("%d",&w);

	int ww;
	printf("Enter the wide of each windows (inches)\n");
	scanf("%d",&ww);
		
	int wh;
	printf("Enter the high of each windows (inches)\n");
	scanf("%d",&wh);


	//HFit
	int numHFit = 0;
	int numHRole = 0;
	if (rw/ww <1 || rl/wh < 1){
		numHFit = 0;
		numHRole = 0;
	}else{
		numHFit = (rw/ww)*(rl/wh);
		if ((f*w)/numHFit > 1){
			numHRole = (f*w)/numHFit;
		} else {
			numHRole = 1;		
		}
		printf("HFit: windows per role is %d and number of role needed is %d\n", numHFit, numHRole);
	}

	//VFit
	int numVFit = 0;
	int numVRole = 0;
	if (rw/wh < 1 || rl/ww < 1){
		numVFit = 0;
		numVRole = 0;
	}else{
		numVFit = (rw/wh)*(rl/ww);
		if ((f*w)/numVFit > 1){
			numVRole = (f*w)/numVFit;
		} else {
			numVRole = 1;		
		}
		printf("VFit: windows per role is %d and number of role needed is %d\n", numVFit, numVRole);
	}


	//Compare the number of role btw HFit and VFit, output the one which uses less role
	if (numHFit == 0 && numVFit == 0){
		printf("We can't do this project, windows are too large.\n");
	} else 	if (numHRole < numVRole){
		printf("The best fitting plan is HFit, the number of roles we use are: %d\n", numHRole);
	} else {
		printf("The best fitting plan is VFit, the number of roles we use are: %d\n", numVRole);

	}


return 0;	

}
