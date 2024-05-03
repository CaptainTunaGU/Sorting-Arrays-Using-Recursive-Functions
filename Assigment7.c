/* Problem Statement: List integers in ascending order using recursions*/
/* Author: Ian Langelett */
/* Created Date: 04/25/2024 */
/* Revised by: Ian Langelett */
/* Revision Date: 04/26/2024 */



/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h> /*printf scanf functions*/
        #include<conio.h> /*console input/output (my computer could not identify '0' for some reason and after a bit of research I used it*/
        #include <math.h> /*math functions*/

    /* ---- Constant macro definitions ---- */



/* ---- Function prototype definitions ---- */
     /*returndatatype functionname (argumentdatatype argumentname);*/
     /*Subprogram to sort integers*/
void select_sort(int list[], int list_size)
{
    int temp;
    if(list_size == 1) /*when to end recursion*/
    {
        return;
    }
    for(int i=1; i< list_size ; i++)
    {
        if(list[i] > list[i+1])
        {
            temp = list[i];     /*recursion function math*/
            list[i]=list[i+1];
            list[i+1] = temp;
        }
    }
    list_size = list_size-1;   /*how to get to end of recursion*/
    select_sort(list,list_size);
}
/*int get_min(int list[], int first_sub, int list_size);*/
/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main(void)
{
    /*Declare variables*/
int list_size=4;
int list[list_size];
int i=1;
int j;
list[list_size]=0;

for(j=1;j <= list_size; j++)
{
    printf("Enter a 2 digit integer > \n");
    scanf("%d", &list[j]);
}   /*Relay user inputs back to user*/
    printf("You entered the numbers %d %d %d %d \n", list[1], list[2], list[3], list[4]);
    /*retrieve sub-function array data*/
    select_sort(list, list_size);
    /*print sub function array data, now sorted*/
    printf("Your numbers in ascending order are %d %d %d %d \n", list[1], list[2], list[3], list[4]);
return(0);
}

/* ---- Function subprograms ---- */

    /* Description of subprogram actions */

