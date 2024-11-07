/*
 * main.c
 *
 * Created: 9/4/2021 
 *   
 * determine the highest average
 *
 * Author: Mohamed Salah
 */

#include <stdio.h>
// here is the declaring of the student struct
typedef struct{
	int id;
	char name[10];
	unsigned int math_Grade, physics_Grade, electronics_Grade ;
	float average; 
}student;

int main()
{
	
	float max_average=0; // for comparing averages
	student st[5];// array of student type
	
	printf("Enter Records of 5 students\n");// to tell the user to enter the data of 5 different students    

	for(int i=0;i<5;i++) // for loop to get the data from user and put it in our variables
	{    
	  printf("Enter student %d First Name:", i+1);    
	  scanf("%s",&st[i].name);    
	  printf("Enter student id:");    
	  scanf("%d",&st[i].id);    
	  printf("Enter math grade, physics grade,and electronics grade:");
	  scanf("%d %d %d",&st[i].math_Grade,&st[i].physics_Grade,&st[i].electronics_Grade);
	
	// in case you want it in separate rows use the following code
	/*printf("Enter math grade:");
	  scanf("%d",&st[i].math_Grade);
	  printf("Enter physics grade:");
	  scanf("%d",&st[i].physics_Grade);
	  printf("Enter electronics grade:");
	  scanf("%d",&st[i].electronics_Grade);*/
	  
	  st[i].average= (st[i].math_Grade+st[i].physics_Grade+st[i].electronics_Grade)/3; // calculating averge using formula (sum/total)
	
	  if (st[i].average> max_average) // if statement to determine the highest average
	  max_average= st[i].average;
	   
	}  
	
	for(int i=0; i<5;i++) // for loop to get the info of the student with the highest average
	{
	if (st[i].average == max_average)
	 {
	printf("%s has the highest average which is equal to %.2f ", st[i].name,st[i].average);
	 }
	}
}