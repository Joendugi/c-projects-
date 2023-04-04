#include <stdio.h> 
#include <string.h> 
#include <conio.h> 

//created by bitwise

int main() 
{ 
    char username[15]; 
    char password[20]; 


    printf("Enter your username:\n"); 
    scanf("%s",&username); 

    printf("Enter your password:\n"); 
    scanf("%s",&password); 

    if(strcmp(username,"kelvin")==0){ 
        if(strcmp(password,"0123")==0){ 

        printf("\nWelcome.Login Success!"); 
struct Person {

  char name[50];

  int age;
  int height;
  int weight;
};

 
printf("National Medical examination\n");
  // Create a Person struct variable

  struct Person person1;

 

  // Set the values of the member variables

  strcpy(person1.name, "John");

  person1.age = 30;
  person1.height= 177;
  person1.weight=85;
 

  // Access and print the member variables using the struct operator

  printf("Name: %s\n", person1.name);

  printf("Age: %d\n\n", person1.age);

 struct Person person2;
strcpy(person2.name, "Vincent");

  person2.age = 25;
  person2.height= 182;
  person2.weight=74;
printf("Name: %s\n", person2.name);

  printf("Age: %d\n", person2.age);
printf("Name: %d\n", person2.weight);

  printf("Age: %d\n\n", person2.height);


struct Person person3;
strcpy(person3.name, "Joy");

  person3.age = 45;
  person3.height= 142;
  person3.weight=120;
printf("Name: %s\n", person3.name);

  printf("Age: %d\n", person3.age);
printf("weight: %d\n", person3.weight);

  printf("Height: %d\n", person3.height);

  

}


        }else{ 
    printf("\nwrong password"); 
} 
    }else{ 
    printf("\nUser doesn't exist"); 
} 





    return 0; 

} 
