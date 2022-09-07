#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>


    int u(int a, int b)
	{
	  
	  int h;
	  h+=a;
	  if ( b==0 ) return 0;
	  else if (b%2!=0)
	  {
	  	
	  	printf("\n\t\t\t= %d * %d + %d",a,b-1,a);
	  	return ( u(a,b-1) +a );
	  } 
	  else if (b!=0) {
	  	//h+=a;
	  	printf("\n\t\t\t== %d * %d + %d",a*2,b/2,h);
	  	return ( u(2*a,b/2) );
	  }
	  
	}

int main()
{

  int a,b;
  	
  printf("\n\n\t\t**** VEUILLER ENTRER a :");
  scanf("%d",&a);
  
  printf("\n\n\t\t**** VEUILLER ENTRER a :");
  scanf("%d",&b);
  
  printf("\n\t\t%d * %d  ",a,b);
  //u(a,b);
  printf("\n\t\t\t=%d",u(a,b));
	
}
