#include <stdio.h>

int main(){
	
	
	char grade;
        double per = -1;
	double curr_per = -1;
	double final = -1;
	double score = 0;


	
	printf("Enter the grade you want in the class: ");

	scanf("%c", &grade);


	while(per < 0 || per > 100){

	        printf("Enter the percent you need to get that grade: ");

	        scanf("%lf", &per);
	}
        
	
	while(curr_per < 0 || curr_per > 100){

        
	        printf("Enter your current percent in the class: ");

	        scanf("%lf", &curr_per);
	}
	
	while(final < 0 || final > 100){
        
	        printf("Enter the weight of the final: ");

	        scanf("%lf", &final);
	}
		
	score = (per - (100 - final) / 100 * curr_per) / (final / 100);


	printf("You need to get at least %.2f%% on the final to get a %c in the class.\n", score, grade);
	
	


}




