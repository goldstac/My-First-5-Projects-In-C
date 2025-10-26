#include <stdio.h>
#include <strings.h>
int main() {
    char input[64];
    char choice[50];
    char card_details[64];
    char location[64];
    char yes[10];
    printf("Welcome To RandomPhoneShop\n");
    printf("Type list To See Our Phones\n");
    fgets(input,sizeof(input),stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input,"list") == 0) {
        printf("ID > NAME > PRICE\n");
        printf(" 1 > Xiaomi 15 Pro > $700\n");
         printf(" 2 > Iphone 17 Pro Max > $1099\n");
          printf(" 3 > Poco F7 Ultra > $600\n");
           printf(" 4 > Samsung Galaxy S25 Ultra > $1045\n");
           printf("Enter The ID Of The Phone You Want\n");
           fgets(choice,sizeof(choice),stdin);
           choice[strlen(choice)-1] = '\0';
           if (strcmp(choice,"1") == 0){
            printf("You Chose %s \n",choice);
            printf("Enter Card Details \n");
            fgets(card_details,sizeof(card_details),stdin);
            card_details[strlen(card_details)-1] = '\0';
            printf("Enter Location\n");
            fgets(location,sizeof(location),stdin);
            location[strlen(location)-1] = '\0';
            printf("Type yes To Place Order\n");
            fgets(yes,sizeof(yes),stdin);
            yes[strlen(yes)-1] = '\0';
            printf("Order Is Placed\n");
           }
            else if (strcmp(choice,"2") == 0){
            printf("You Chose %s \n",choice);
            printf("Enter Card Details \n");
            fgets(card_details,sizeof(card_details),stdin);
            card_details[strlen(card_details)-1] = '\0';
            printf("Enter Location\n");
            fgets(location,sizeof(location),stdin);
            location[strlen(location)-1] = '\0';
            printf("Type yes To Place Order\n");
            fgets(yes,sizeof(yes),stdin);
            yes[strlen(yes)-1] = '\0';
            printf("Order Is Placed\n");
           }
            else if (strcmp(choice,"3") == 0){
            printf("You Chose %s \n",choice);
            printf("Enter Card Details \n");
            fgets(card_details,sizeof(card_details),stdin);
            card_details[strlen(card_details)-1] = '\0';
            printf("Enter Location\n");
            fgets(location,sizeof(location),stdin);
            location[strlen(location)-1] = '\0';
            printf("Type yes To Place Order\n");
            fgets(yes,sizeof(yes),stdin);
            yes[strlen(yes)-1] = '\0';
            printf("Order Is Placed\n");
           }
            else if (strcmp(choice,"4") == 0){
            printf("You Chose %s \n",choice);
            printf("Enter Card Details \n");
            fgets(card_details,sizeof(card_details),stdin);
            card_details[strlen(card_details)-1] = '\0';
            printf("Enter Location\n");
            fgets(location,sizeof(location),stdin);
            location[strlen(location)-1] = '\0';
            printf("Type yes To Place Order\n");
            fgets(yes,sizeof(yes),stdin);
            yes[strlen(yes)-1] = '\0';
            printf("Order Is Placed\n");
           }
           else{
            printf("ID Not Found");
           }

    }
    else{
        printf("Command Not Found");
    }
}
