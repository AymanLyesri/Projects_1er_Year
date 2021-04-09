/*PROGRAMME THAT WILL ENSURE THE FINAL RESULT WITHOUT MUCH CALCULATIONS !!!
PROGRAMMED AND DESIGNED BY THE ONE AND ONLY AYMAN LYESRI...*/

#include <stdlib.h>
#include <stdio.h>


void storage(float val[][2], int bonus, float result){                     //to store the values create a file and name it : "bruh.txt"
	int tab[16];                                              
    int i=0,j=0,x=0;
	
    while(i<9){
        while(j<2){
            tab[x]=val[i][j];
            j++,x++;
        }
    i++,j=0;
    }
    i=0,j=0,x=0;
	FILE *f;
	f = fopen("bruh.txt","w+");
	fseek(f,0,SEEK_END);
    while(i<16){
		fprintf(f," %d ",tab[i]);
		i++;
    }
	fprintf(f,"   bonus : %d  // result : %f ",bonus,result);
}
 //                                                             ---the values will be erased once the programme is being used again...
void modules(int x,int y){                        //function for displaying different modules...
    char nom[25];
	if(y==0){
			system("cls");
	}
    switch(x){
        case 0:
    strcpy(nom," ALGEBRA               ");
    printf("%s",nom);break;
        case 1:
    strcpy(nom," ANALITIQ              ");
    printf("%s",nom);break;
        case 2:
    strcpy(nom," FRENCH                ");
    printf("%s",nom);break;
        case 3:
    strcpy(nom," ENGLISH               ");
    printf("%s",nom);break;
        case 4: 
    strcpy(nom," C++                   ");
    printf("%s",nom);break;
        case 5:
    strcpy(nom," LINUX - git           ");
    printf("%s",nom);break;
        case 6:
    strcpy(nom," WINDOWS - network     ");
    printf("%s",nom);break;
        case 7:
    strcpy(nom," JAVASCRIPT - economics");
    printf("%s",nom);break;
    }

}


void main(){
	printf("Welcome!!\n");
	printf("This programe will show you how much you will have for each Module\n\n\n\n");
	float tab[8][2],x=0,y=0,h=0,result=0,bonus,bp;
	int i=0,j=0;
	printf("first of all... enter the note that you think it representes\n the note of the absence as well as the participation-------->");
	scanf("%f",&bp);
	printf("\n\n\n\n");
	bonus=bp;                                                                 //bp : bonus point
	bonus=bonus*0.2;                                                          //bonus = bonus point regulations...
	while(i<8){
		while(j<1){
			    modules(i,0);printf("*<--//Test_numero->1<-------:");
			    scanf("%f",&tab[i][j]);
			j++;
			printf("\n\tExam_numero --------------------->1<---------------------------:");
			scanf("%f",&tab[i][j]);
		}
		i++,j=0;
		printf("\n\n");
	}                                                                         /* i : for the module--------------------------*/
	i=0,j=0;                    
	while(i<8){                                                               /* j : if its a test or an exam----------------*/
	printf("MODULE---------> ");modules(i,1);printf(" -->");                                                
		while(j<2){
			printf("\t %f \t",tab[i][j]);
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
		x=0,h=0,j=0;
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
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Production by ayman lyesri :)\n");

	storage(tab,bp,y);

	system ("pause");
	system ("pause");
	return 0;
}
