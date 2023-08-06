#include <stdio.h>
#include <conio.h>

int option, choice;
float simple_interest, principle, rate, time;

int SimpleInterest(){
    printf("\nEnter principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    simple_interest = (principle*rate*time)/100;
    printf("Simple Interest is: %.2f\n\n", simple_interest);
}

int Principle(){
    printf("\nEnter simple interest: ");
    scanf("%f", &simple_interest);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    principle = (simple_interest*100)/(rate*time);
    printf("Principle amount is: %.2f\n\n", principle);
}

int Rate(){
    printf("\nEnter simple interest: ");
    scanf("%f", &simple_interest);
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    rate = (simple_interest*100)/(principle*time);
    printf("Rate is: %.2f\n\n", rate);
}

int Time(){
    printf("\nEnter simple interest: ");
    scanf("%f", &simple_interest);
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    time = (simple_interest*100)/(principle*rate);
    printf("Time is: %.1f\n\n", time);
}

int descision(){
    printf("Enter your choice:\n0 To exit\n1 To continue\n= ");
    scanf("%d", &choice);
}

int main(){
    puts("\n       <-----Welcome To Simple Interest Calculator----->       ");
    while(1){
        printf("\nChoose the option below to calculate:\n1. Simple Interest\n2. Principle\n3. Rate\n4. Time\n= ");
        scanf("%d", &option);
        switch(option){
            case 1:
                SimpleInterest();
                break;
            
            case 2:
                Principle();
                break;
            
            case 3:
                Rate();
                break;
            
            case 4:
                Time();
                break;

            default:
                printf("Invalid selection\n\n");
                break;
        }

        descision();
        if(choice==0){
            break;
        } else{
            continue;
        }
    }

    return 0;
}