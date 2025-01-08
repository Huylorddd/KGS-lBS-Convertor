#include <stdio.h>
#include <time.h>

int main(){

    int choice;
    double input, output;

    printf("\nWelcome to Weight Convertor Basic program !");
    printf("\n\t\t-----\t\t\n\n");
    printf("\t1. Convert Kgs ---> Lbs\n\t2. Convert Lbs ---> Kgs\n\t3. Close");
    printf("\n\t\t-----\t\t\n\n");

    printf("My choice is:  ");
        scanf("%d", &choice);
            switch(choice){
                case 1:
                    printf("\n");
                    printf("----------------------------------------------\n");
                    printf("Convert lgs to lbs\n");
                    printf("Insert a value (kg(s)): ");
                        scanf("%lf", &input);
                        output = input * 2.20462262;
                    printf("\nThe program is converting...\n");
                    printf("Convert Successfully !\n");
                    printf("%.2lf kg(s) is equal to %.2lf lb(s).", input, output);
                    printf("\n----------------------------------------------");
                    printf("\n\n Thanks for using my program <3\n");
                break;

                case 2:
                    printf("\n");
                    printf("----------------------------------------------\n");
                    printf("Convert lb(s) to kg(s)\n");
                    printf("Insert a value (lb(s)): ");
                        scanf("%lf", &input);
                        output = input * 0.45359237;
                    printf("\nThe program is converting...\n");
                    printf("Convert Successfully !\n");
                    printf("%.2lf lb(s) is equal to %.2lf kg(s).", input, output);
                    printf("\n----------------------------------------------");
                    printf("\n\n Thanks for using my program <3\n");
                break;

                case 3:
                    printf("\n");
                    printf("----------------------------------------------\n");
                    printf("\tThe program is being closed....");
                    printf("\n----------------------------------------------");
                    printf("\n\n Thanks for using my program <3\n");
                break;

                default:
                    printf("----------------------------------------------\n");
                    printf("\nThe choice is not existed !");
                break;
            }
}