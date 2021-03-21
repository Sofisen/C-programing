#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
	
//iskambil karti
	int x; 

 srand (time(NULL));	
	x=1+rand()%12;
	
	
	char y;
	 srand (time(NULL));
y=3+rand()%3;



printf("***********\n");

switch(x) {
	case 1:  printf("*A*******%c*\n",y);break;
	case 10: printf("*10******%c*\n",y);break;
	case 11: printf("*J*******%c*\n",y);break;
	case 12: printf("*Q*******%c*\n",y);break;
	case 13: printf("*K*******%c*\n",y);break;
	default: printf("*%d*******%c*\n",x,y);break;
		
	
}

 printf("***********\n");
 printf("***********\n");

switch(x) {
	case 1:  printf("*****A*****\n");break;
	case 10: printf("****10*****\n");break;
	case 11: printf("*****J*****\n");break;
	case 12: printf("*****Q*****\n");break;
	case 13: printf("*****K*****\n");break;
	default: printf("*****%d*****\n",x);break;
		
}

printf("***********\n");
printf("***********\n");

switch(x) {
	case 1:  printf("*%c*******A*\n",y);break;
	case 10: printf("*%c******10*\n",y);break;
	case 11: printf("*%c*******J*\n",y);break;
	case 12: printf("*%c*******Q*\n",y);break;
	case 13: printf("*%c*******K*\n",y);break;
	default: printf("*%c*******%d*\n",y,x);break;
			
}

	printf("***********\n");
	 return 0;		
	 
}
