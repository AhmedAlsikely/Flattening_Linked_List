#include <stdio.h>
#include <stdlib.h>
#include "FlattenLL.h"


struct Node *ListHead = NULL;

int main()
{
    unsigned char UserChoice = 0;
    uint32 ListLength = 0;

    printf("-> Hello to Single Linked List \n");
    while(1){
        printf("\n");
        printf("===============================\n");
        printf("-> 1) Insert_Node_In_Right_Direction_At_Beginning \n");
        printf("-> 2) Insert_Node_In_Right_Direction_At_End \n");
        printf("-> 3) Insert_Node_In_Right_Direction_At_End \n");
        printf("-> 4) Insert_Node_In_Down_Direction_At_End \n");
        printf("-> 5) Delete_Node_In_Right_Direction \n");
        printf("-> 6) Delete_Node_In_Down_Direction \n");
        printf("-> 7) Get_Length \n");
        printf("-> 8) Display_All_Nodes \n");
        printf("-> 9) Quit from application \n");
        printf("===============================\n");

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

        switch(UserChoice){
            case 1:
                Insert_Node_In_Right_Direction_At_Beginning(&ListHead);
            break;
            case 2:
                Insert_Node_In_Right_Direction_At_End(&ListHead);
            break;
            case 3:
                Insert_Node_In_Right_Direction_At_End(&ListHead);
            break;
            case 4:
                Insert_Node_In_Down_Direction_At_End(ListHead);
            break;
            case 5:
                Delete_Node_In_Right_Direction(&ListHead);
            break;
            case 6:
                Delete_Node_In_Down_Direction(ListHead);
            break;
            case 7:
                ListLength = Get_length(ListHead);
                printf("List Length : << %i >> Nodes\n", ListLength);
            break;
            case 8:
                Display_All_Nodes(ListHead);
            break;
            case 9:
                printf("Quit from application \n");
                exit(1);
            break;
            default:
                printf("User Choice out of range !!\n");
            break;
        }
    }
    return 0;
}

