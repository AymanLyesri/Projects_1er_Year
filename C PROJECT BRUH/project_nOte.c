#include <stdio.h>
main()
{
	printf("Welcome!!\n");
	printf("This programe will show you how much you will have for each Module\n\n\n\n");
	float tab[3][2],x=0,y=0,h=0,result=0,bonus;
	int i=0,j=0;
	printf("first of all... enter the note that you think it representes\n the note of the absence as well as the participation-------->");
	scanf("%f",&bonus);
	printf("\n\n\n\n");
	bonus=bonus*0.2;
	while(i<4){
		while(j<2){
			if(j==0&&i==0){
			printf("  #Please enter the notes (#0-20#) of Module-->*ALGEBRA*<--//Test_numero->1<-------:");
			scanf("%f",&tab[i][j]);
			}
			else if(j==0&&i==1){
			printf("  #Please enter the notes (#0-20#) of Module-->*HTML*<--//Test_numero---->1<-------:");
			scanf("%f",&tab[i][j]);
			}
			else if(j==0&&i==2){
			printf("  #Please enter the notes (#0-20#) of Module-->*C++*<--//Test_numero----->1<-------:");
			scanf("%f",&tab[i][j]);
			}
			else if(j==0&&i==3){
			printf("  #Please enter the notes (#0-20#) of Module-->*English*<--//Test_numero----->1<-------:");
			scanf("%f",&tab[i][j]);
			}
			else if(j>0){
			printf("\tExam_numero --------------------->1<---------------------------:");
			scanf("%f",&tab[i][j]);
			}
			j++;
		}
		i++;
		j=0;
		printf("\n");
	}                                                                         /* i : for the module--------------------------*/
	i=0,j=0;                    
	while(i<3){                                                               /* j : if its a test or an exam----------------*/
		if(i==0){
			printf(" *ALGEBRA*-->\t");
		}
		if(i==1){
			printf(" *HTML*----->\t");
		}
		if(i==2){
			printf(" *C++*------>\t");
		}
		while(j<2){
			printf(" %f \t",tab[i][j]);
			if(j==0){
				x=x+tab[i][j];                                                /* --------------x : for the tests-------------*/
			}
			else{
				h=h+tab[i][j];                                                /* --------------h :for the exams--------------*/
			}
			j++;
		}                                                                     /* --result : the result of a specific module--*/
		x=x*0.3,h=h*0.5;
		result=x+h+bonus;                                                     /* bonus : bonus points for participation etc..*/
		printf("*RESULT*--> %f <-- \n",result);
		y=y+result;
		x=0,h=0,j=0,result=0;
		i++;
	}
	y=y/3;                                                                    /* ---------------y : final result-------------*/
	printf("\n\n\t\t\t The final result is:\n\n\t\t\t----[[ %f ]]----\n",y);
	if(y>10){
		printf("\n\t>---You'll pass!!---<");
	}
	else{
		printf("\n\t>---You need to take another exam for Evaluation!!---<");
	}
	printf("\n\t\t\t\t\t\t\t\t\t\t\t Production by ayman lyesri :)");
	return 0;
}
