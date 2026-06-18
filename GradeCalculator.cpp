#include <stdio.h>


int quizScore(void){

int qscore;

	printf("Enter Quiz Score:");
	scanf("%d", &qscore); 

return qscore; 

}
int examScore(void){

int escore;

	printf("Enter Exam Score:");
	scanf("%d", &escore); 

return escore; 

}
float finalGrade(int quiz, int exam){
	
	float finalcalculation;		
	finalcalculation = (quiz * 0.4) + (exam * 0.6);

return finalcalculation;
}


char letterGrade(float final){
	
	char lettergrade;
	
	lettergrade=final;
	
	if (final >=90)
	printf("Letter Grade: A");
	else if (final >=80) 
	printf("Letter Grade: B");
	else if (final >=70) 
	printf("Letter Grade: C");
	else if (final >=60) 
	printf("Letter Grade: D");
	
	
	return  lettergrade;
}




int main(){
	
	int quiz;
	int exam;
	float final;
	char letter;
	
	
	quiz= quizScore();
	exam= examScore();
	final= finalGrade(quiz,exam);
	letter= letterGrade(final);

	printf("\nFinal Grade %.2f",final);
	printf("%c",letter);
}








