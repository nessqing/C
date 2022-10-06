//
//  main.c
//  C_project
//
//  Created by 黃沛晴 on 2022/9/17.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    // insert code here...
//     printf("Hello, World!\n");
// //    return 0;
//     if (20 > 18) {
//         printf("20 is greater than 18");
//       }
//       return 0;

//    int decks;
//    puts("enter anumber of decks");
//    scanf("%2i", &decks);
//    if (decks < 1){puts("thats is not a valid number of");
//    return 1;
//    }
//    printf("there are %i card\n",(decks * 52));
//    return 0;
    char card_name[3];
    puts("Enter the card_name");
    scanf("%2s",card_name);
    int val = 0;
    if (card_name[0]=='K'){val = 10;}
    else if(card_name[0] == 'Q'){val=11;}
    else {val = atoi(card_name);}
    printf("The card value is: %i\n", val);
    return 0;
   
    
}

