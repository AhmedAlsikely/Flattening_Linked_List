#include "FlattenLL.h"

void Insert_Node_In_Right_Direction_At_Beginning(struct Node **List){
    struct Node *TempNode = NULL;
    TempNode = (struct Node *)malloc(sizeof(struct Node));

    if(NULL != TempNode)
    {
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        if(NULL == *List)
        {
            TempNode->RightPtr = NULL;
        }
        else
        {
            TempNode->RightPtr = *List;
        }
        TempNode->DownPtr = NULL;
        *List = TempNode;
    }
    else
    {
        printf("Can not created new node \n");
    }
}
/*----------------------------------------------------------------*/
void Insert_Node_In_Right_Direction_At_End(struct Node **List){
    struct Node *TempNode = NULL;
    struct Node *NextNodeCounter = *List;

    TempNode = (struct Node *)malloc(sizeof(struct Node));

    if(NULL != TempNode)
    {
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        TempNode->RightPtr = NULL;
        TempNode->DownPtr = NULL;
        if(NULL == *List)
        {

            *List = TempNode;
        }
        else
        {
            while(NextNodeCounter->RightPtr != NULL){

                NextNodeCounter = NextNodeCounter->RightPtr;
            }
            NextNodeCounter->RightPtr = TempNode;
        }

    }
    else
    {
        printf("Can not created new node \n");
    }
}
/*----------------------------------------------------------------*/
void Insert_Node_In_Down_Direction_At_End(struct Node *List){
    struct Node *TempNode = NULL;
    struct Node *RightNodeCounter = List;
    struct Node *DownNodeCounter = NULL;
    uint32 RightPosition = 0;
    uint32 RightLength = 0;
    uint32 RightCounter = 1;


    TempNode = (struct Node *)malloc(sizeof(struct Node));
    if(TempNode != NULL)
    {
        TempNode->DownPtr  = NULL;
        TempNode->RightPtr = NULL;
        RightLength = Get_length(List);
        printf("Enter of Position Node in Right Direction:");
        scanf("%i",&RightPosition);
        printf("Enter Node Data : ");
        scanf("%i", &TempNode->NodeData);

        if(RightPosition > RightLength)
        {
            printf("the position is out of the linked list");
        }
        else
        {
            while(RightCounter != RightPosition){
                RightCounter++;
                RightNodeCounter = RightNodeCounter->RightPtr;
            }
            while(RightNodeCounter->DownPtr != NULL){
                RightNodeCounter = RightNodeCounter->DownPtr;
            }

            RightNodeCounter->DownPtr = TempNode;
            printf("%i \t",RightNodeCounter->NodeData);
            RightNodeCounter = RightNodeCounter->DownPtr;
            printf("%i \n",RightNodeCounter->NodeData);
        }

    }
    else
    {
        printf("can not create node\n");
    }
}


/*----------------------------------------------------------------*/
void Delete_Node_In_Right_Direction(struct Node **List){
    struct Node *TempNode = *List;
    struct Node *NodeListCounter = *List;
    struct Node *NextNode_L = *List;
    uint32 NodePosition = 0;    /*  */
    uint32 ListLength = 0;      /*  */
    uint32 NodeCounter = 1;     /* Points to the first node */

    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &NodePosition);
    ListLength = Get_length(List);
    if(NodePosition > ListLength || ListLength == 0)
    {
        printf("the position out of the range! or Empty \n");
    }
    else if(NodePosition == 1)
    {
            TempNode = *List ;
            *List = TempNode->RightPtr;
            TempNode->RightPtr = NULL;
            free(TempNode);
    }
    else
    {
        while(NodeCounter<NodePosition-1){
            NodeCounter++;
            NodeListCounter = NodeListCounter->RightPtr;
        }
        NextNode_L = NodeListCounter->RightPtr;
        NodeListCounter->RightPtr = NextNode_L->RightPtr;
        NextNode_L->RightPtr = NULL;
        free(NextNode_L);
    }

}
/*----------------------------------------------------------------*/
void Delete_Node_In_Down_Direction(struct Node *List){

}
/*----------------------------------------------------------------*/
void Display_All_Nodes(struct Node *List){
    struct Node *TempNode = List;
    struct Node *DownNodes = NULL;

    if(NULL == List)
    {
        printf(" The Linked List is Empty\n");
    }
    else
    {
        while(TempNode){
            if(TempNode->RightPtr != NULL)
            {
                printf("%i \t",TempNode->NodeData);
                DownNodes = TempNode;
                while(DownNodes->DownPtr != NULL){
                    DownNodes = DownNodes->DownPtr;
                    printf("%i \t",DownNodes->NodeData);
                }
                printf("\n");
                TempNode = TempNode->RightPtr;
            }
            else
            {

                printf("%i \t",TempNode->NodeData);

                DownNodes = TempNode;
                while(DownNodes->DownPtr){
                    DownNodes = DownNodes->DownPtr;
                    printf("%i \t",DownNodes->NodeData);
                }
                break;
            }
        }
    }
}
/*----------------------------------------------------------------*/
unsigned int Get_length(struct Node *List){

}
/*----------------------------------------------------------------*/
