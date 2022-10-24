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
    //%2s == 
    char card_name[3];
    puts("Enter the card_name");
    scanf("%2s",card_name);
    int val = 0;
    if (card_name[0]=='K'){val = 10;}
    else if(card_name[0] == 'Q'){val=11;}

    //atoi int atoi(const char *str)
    else {val = atoi(card_name);}
    printf("The card value is: %i\n", val);
    return 0;
   
    
}

