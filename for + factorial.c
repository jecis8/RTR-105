#include <stdio.h>
#include <stdlib.h>



int main(){
	
	char text;
	char izvele[3];
	int numb;
	int charInt = 1;
	long long charLong = 1;
	char charChar = '1';
	
	
	printf("%s", "Ievadi vienu decimālskaitli: ");
	scanf(" %c", &text);
	printf("%c", text);	
	printf("%s", "Izvēlies izejas datu tipu: char[c], int[i] vai long long [l]");

    scanf("%s", izvele);
	
	numb = text - '0';
	
	if(izvele[0] == 'c' ){
		printf("Nav iespējams aprēķināt faktoriālu char datu tipam");	
		
	}else if(izvele[0] == 'i'){
		for(int i = 1; i<=numb; i++){
			charInt = charInt * i;
			
		}
		
		printf("Rezutāts:%i", charInt);
		
	
		
		
	}else if(izvele[0] == 'l'){
		for(int i = 1; i<=numb; i++){
			charLong = charLong * i;
			
		}
		printf("Rezutāts:%lli", charLong);
	}
	
	
	

    
    

    return 0;
}