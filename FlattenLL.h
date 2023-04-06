#ifndef _FLATTENLL_H_
#define _FLATTENLL_H_

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32;
typedef signed int   sint32;



struct Node {
    sint32 NodeData;
    struct Node *RightPtr;
    struct Node *DownPtr;
};

void Insert_Node_In_Right_Direction_At_Beginning(struct Node **List);
void Insert_Node_In_Right_Direction_At_End(struct Node **List);
void Insert_Node_In_Down_Direction_At_End(struct Node *List);
void Delete_Node_In_Right_Direction(struct Node **List);
void Delete_Node_In_Down_Direction(struct Node *List);
void Display_All_Nodes(struct Node *List);
unsigned int Get_length(struct Node *List);

#endif // _FLATTENLL_H_
