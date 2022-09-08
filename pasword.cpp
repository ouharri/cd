#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>


typedef struct psw{
	int alb=0;
	int nbr=0;
	int car=0;
	int maj=0;
	int min=0;
	
}psw;

// aaaAAA111@@@
psw Pasword (char p[])
{
	struct psw Is;
	int i;
	
	for (i=0; i<strlen(p) ;i++)
	{
		
		
		if (  	isalpha( p[i]  )    )Is.alb=1;
		if (  	isdigit( p[i]  )    )Is.nbr=1;
		if (  	islower( p[i]  )    )Is.min=1;
		if (  	isupper( p[i]  )    )Is.maj=1;
		if (    isprint( p[i]  )    )Is.car=1;
		
	}
	
	return Is;
	
}

int main()
{
	again: 
	
	
	struct psw Is;
	char pasword[20];
	
	printf("\n\n\tENTER YOUR PASWORD:(more than 8, uppercase, number and character)\n");
	printf("\n\t*****************************************************************\n");
	printf("\t**\n");
	printf("\t**   ");
	gets(pasword);
	printf("\t**");
	printf("\n\t*****************************************************************\n");

	
	Is=Pasword(pasword);
	    
	   // puts(pasword);
	   // printf("\n\t%d\t%d\t%d\t%d\t%d",Is.car,Is.alb,Is.maj,Is.min,Is.nbr);
	    
	    
	    if ( strlen(pasword)<8 ) {
	    	printf("\n\tVEUILER ENTRER UN MOT DE PASSE PLUS GRAND >8"); 
	    }
	    	
	    if(  Is.car!=1 )  {
	    	printf("\n\tVEUILER ENTRER AU MOIN UN CARACTER !"); 
	    }
	    
	    if (  	Is.alb!=1   ) {
			printf("\n\tVEUILER ENTRER AU MOIN UNE ALPHABET !");
		}
			
		if (  	Is.nbr!=1   ){
			printf("\n\tVEUILER ENTRER AU MOIN UN NOMBRE !"); 
		}
			
		if (  	Is.min!=1   ) {
			printf("\n\tVEUILER ENTRER AU MOIN UNE LETTRE NINISCUL !"); 
		}
			
		if (  	Is.maj!=1 ) {
			printf("\n\tVEUILER ENTRER AU MOIN UNE LETTRE MAJUSCUL !"); 
		}
			
	    	
	    	
	    	
	    if ( strlen(pasword)<8 ) {
	    	
	    	sleep(4);
			system("cls"); 
			printf("TRY AGAIN !");
			goto again;
		} 
	    else if(  Is.car!=1 )  {
	    	
	    	sleep(4);
	    	system("cls"); 
			printf("TRY AGAIN !");
			goto again;
		}      
		else if (  	Is.alb!=1   ) {
			
			sleep(4);
			system("cls"); 
			printf("TRY AGAIN !");
			goto again;
		}
		else if (  	Is.nbr!=1   ){
			
			sleep(4);
			system("cls"); 
			printf("TRY AGAIN !");
			goto again;
		} 
		else if (  	Is.min!=1   ) {
			
			sleep(4);
			system("cls"); 
			printf("TRY AGAIN !");
			goto again;
		}
		else if (  	Is.maj!=1 ) {
			
			sleep(4);
			system("cls"); 
			printf("TRY AGAIN !");
			goto again;
		}else
		{
			printf("\n\n\tVOTRE MOT DE PASSE EST SECURESER (");
			puts(pasword);
			//printf(""")");
		}
		
	
	
	
	
	
}
