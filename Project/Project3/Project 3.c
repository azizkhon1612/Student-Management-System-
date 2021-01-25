#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "typedef.h"
#include "registration.h"
#include "showall.h"
#include "delete.h"
#include "findbybirth.h"
#include "regfromfile.h"
#include "exit.h"







//Menu
void menu() {
    printf("*****Menu*****\n");
    printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.RegFromFile><6.Exit\n");
    printf("Enter_the_menu_number:");
}





int main(void)
{
    ///Initialization
    int select, count = 0, n, i;
    ///Num for allocation
    st** list = NULL;

    printf("Max_num:");
    scanf("%d", &n);

    //Allocating memory for struct
    list = (st**)malloc(n * sizeof(st*));

    for (i = 0; i < n; i++) {
        list[i] = (st*)malloc(sizeof(st));
    }





    ///Begining;

    while (1) {
        menu();
        scanf("%d", &select);
        switch (select)
        {
        case 1: {
            if (count == n)
                printf("Overflow\n");

            else
                registration(list, &count);
            break;
        }
        case 2:
            showall(list, count);
            break;
        case 3: {
            if (count == 0) {
                printf("NO MEMBER\n");
            }
            else
            {
                delete(list, &count);
            }
            break;
        }
        case 4: {
            find_by_birth(list, count);
            break;
        }
        case 5: {
            RegFromFile(list, &count,n);
            break;
        }


        case 6: {
            renew(list,&count);
            
           for (i = 0; i < n; i++) {
                free(list[i]);
            }
            free(list);

            break;
        }
              return 0;

        }
    }
}
