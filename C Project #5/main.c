#include <stdio.h>
#include <string.h>
int main() {
    float calculate;
    float vat = 0.96;
    char choice[64];
    char card_number[64];
    char location[64];
    int rtx5090 = 2099;
    int rtx4090 = 1300;
    int coreultra9 = 400;
    int ryzen7 = 600;
    int ssd = 200; 
    printf("Welcome To PCPARTS\n");
    printf("ID > NAME > PRICE\n");
    printf("--------------------------------------\n");
    printf("1 > RTX 5090 > $2099\n");
    printf("2 > RTX 4090 > $1300\n");
    printf("3 > Intel Core Ultra 9 285K > $400\n");
    printf("4 > AMD RYZEN 7 9800X3D> $600\n");
    printf("5 > 1TB NVME M.S SSD > $200\n");
    printf("--------------------------------------\n");
    printf("Enter ID \n");
    fgets(choice,sizeof(choice),stdin);
    choice[strlen(choice)-1] = '\0';
    if (strcmp(choice,"1") == 0) {
        printf("You Choose %s \n",choice);
        calculate = rtx5090 + vat;
        printf("Price : %d + %.2f = %.2f\n",rtx5090,vat,calculate);
        printf("Enter Card Detail\n");
        fgets(card_number,sizeof(card_number),stdin);
        card_number[strlen(card_number)-1] = '\0';
        printf("Enter Location\n");
        fgets(location,sizeof(location),stdin);
        location[strlen(location)-1] = '\0';
        printf("Order Is Placed");
    }
    else if (strcmp(choice,"2") == 0) {
        printf("You Choose %s \n",choice);
        calculate = rtx4090 + vat;
        printf("Price : %d + %.2f = %.2f\n",rtx4090,vat,calculate);
        printf("Enter Card Detail\n");
        fgets(card_number,sizeof(card_number),stdin);
        card_number[strlen(card_number)-1] = '\0';
        printf("Enter Location\n");
        fgets(location,sizeof(location),stdin);
        location[strlen(location)-1] = '\0';
        printf("Order Is Placed");
    }
    else if (strcmp(choice,"3") == 0) {
        printf("You Choose %s \n",choice);
        calculate = coreultra9 + vat;
        printf("Price : %d + %.2f = %.2f\n",coreultra9,vat,calculate);
        printf("Enter Card Detail\n");
        fgets(card_number,sizeof(card_number),stdin);
        card_number[strlen(card_number)-1] = '\0';
        printf("Enter Location\n");
        fgets(location,sizeof(location),stdin);
        location[strlen(location)-1] = '\0';
        printf("Order Is Placed");
    }
    else if (strcmp(choice,"4") == 0) {
        printf("You Choose %s \n",choice);
        calculate = ryzen7 + vat;
        printf("Price : %d + %.2f = %.2f\n",ryzen7,vat,calculate);
        printf("Enter Card Detail\n");
        fgets(card_number,sizeof(card_number),stdin);
        card_number[strlen(card_number)-1] = '\0';
        printf("Enter Location\n");
        fgets(location,sizeof(location),stdin);
        location[strlen(location)-1] = '\0';
        printf("Order Is Placed");
    }
    else if (strcmp(choice,"5") == 0) {
        printf("You Choose %s \n",choice);
        calculate = ssd + vat;
        printf("Price : %d + %.2f = %.2f\n",ssd,vat,calculate);
        printf("Enter Card Detail\n");
        fgets(card_number,sizeof(card_number),stdin);
        card_number[strlen(card_number)-1] = '\0';
        printf("Enter Location\n");
        fgets(location,sizeof(location),stdin);
        location[strlen(location)-1] = '\0';
        printf("Order Is Placed");
    }
    else{
        printf("ID NOT FOUND");
    }
return 0;
}
