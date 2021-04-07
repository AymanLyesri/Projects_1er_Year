/*PROGRAMME THAT WILL ENSURE THE FINAL RESULT WITHOUT MUCH CALCULATIONS !!!
PROGRAMMED AND DESIGNED BY THE ONE AND ONLY AYMAN LYESRI...*/

#include <stdio.h>
main()
{
	printf("Welcome!!\n");
	printf("This programe will show you how much you will have for each Module\n\n\n\n");
	float tab[9][9],x=0,y=0,h=0,result=0,bonus;
	int i=0,j=0;
	printf("first of all... enter the note that you think it representes\n the note of the absence as well as the participation-------->");
	scanf("%f",&bonus);
	printf("\n\n\n\n");
	bonus=bonus*0.2;                                                    //bonus regulations...
	while(i<8){
		while(j<1){
			switch(i){
				case 0:
			    printf("  #Please enter the notes (#0-20#) of Module-->*ALGEBRA*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
			    case 1:
			    printf("  #Please enter the notes (#0-20#) of Module-->*ANALITIQ*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
				case 2:
			    printf("  #Please enter the notes (#0-20#) of Module-->*FRENCH*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
				case 3:
			    printf("  #Please enter the notes (#0-20#) of Module-->*ENGLISH*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
				case 4:
			    printf("  #Please enter the notes (#0-20#) of Module-->*C++*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
				case 5:
			    printf("  #Please enter the notes (#0-20#) of Module-->*LINUX*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
				case 6:
			    printf("  #Please enter the notes (#0-20#) of Module-->*WINDOWS ARCH*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
				case 7:
			    printf("  #Please enter the notes (#0-20#) of Module-->*JAVASCRIPT*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);break;
			}
			j++;
			printf("\tExam_numero --------------------->1<---------------------------:");
			scanf("%f",&tab[i][j]);
		}
		i++;
		j=0;
		printf("\n\n");
	}                                                                         /* i : for the module--------------------------*/
	i=0,j=0;                    
	while(i<8){                                                               /* j : if its a test or an exam----------------*/
		switch(i){
			case 0:
			printf(" *ALGEBRA*----------->\t");  break;
		    case 1:
			printf(" *ANALITIQ*---------->\t");  break;
		    case 2:
			printf(" *FRENCH*------------>\t");  break;
			case 3:
			printf(" *ENGLISH*----------->\t");  break;
			case 4:
			printf(" *C++*--------------->\t");  break;
			case 5:
			printf(" *LINUX*------------->\t"); break; 
			case 6:
			printf(" *WINDOWS ARCH*------>\t"); break; 
			case 7:
			printf(" *JAVASCRIPT*-------->\t");  break;  
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
		result=x+h+bonus;                                                     /* bonus (*0.2) : bonus points for participation etc..*/

		printf("*RESULT*--> %f <-- \n",result);
		y=y+result;
		x=0,h=0,j=0,result=0;
		i++;
	}
	y=y/8;                                                                    /* ---------------y : final result-------------*/
	printf("\n\n\t\t\t The final result is:\n\n\t\t\t----[[ %f ]]----\n",y);
	if(y>10){
		printf("\n\n\t\t\t>---You'll pass!!---<");
	}
	else{
		printf("\n\t>---You need to take another exam for Evaluation!!---<");
	}
	printf("\n\t\t\t\t\t\t\t\t Production by ayman lyesri :)\n");
	system ("pause");
	system ("pause");
	return 0;
}
