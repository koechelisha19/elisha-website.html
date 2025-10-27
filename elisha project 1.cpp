#include <stdio.h>


int main(){
char grade = 'A';
switch(grade)
{
case 'A': 
	printf("Exellent performance");
	break;
case 'B':
	printf("good work");
	break;
default: 
	printf("invalid grade input");

}


return 0;
}