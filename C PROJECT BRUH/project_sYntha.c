/*This is my first clock programme.
h : hour ; m : minute ; s : seconde ;
*double* : Responsible for holding big big values.
system("cls") : responsible for centering a specifique section.
Goto : responsible for *goto* something*/

#include <stdio.h>
main()
{
    int h=0,m=0,s=0;
    double i=0;
    printf("Please enter the actual time in this format hh:mm:ss \n");
    scanf("%d %d %d",&h,&m,&s);
    start:;
    while(h<24){
    	while(m<60){
    		while(s<60){
    			system("cls");
    			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t >---------[ %d:%d:%d ]----------<",h,m,s);
    			s++;
    			i=0;
    			while(i<83000000){
    				i++;
    				i++;
    				i--;
				}
			}
			s=0;
    		m++;
		}
		m=0;
    	h++;
	}
	h=0;
	goto start;
	return 0;
}
