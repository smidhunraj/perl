/*Example Program Using Pointers

The following program contains pointer arrays:*/

/********************************************************************
**   Program to search for the first occurrence of a specified     **
**   character string in an array of character strings.            **
********************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define  SIZE  20
 
int main(void)
{
   static char *names[ ] = { "Jim", "Amy", "Mark", "Sue", NULL };
   char * find_name(char **, char *);
   char new_name[SIZE], *name_pointer;
 
   printf("Enter name to be searched.\n");
   scanf("%s", new_name);
   name_pointer = find_name(names, new_name);
   printf("name %s%sfound\n", new_name,
          (name_pointer == NULL) ? " not " : " ");
} /* End of main */
 
 
 
/********************************************************************
**     Function find_name.  This function searches an array of     **
**     names to see if a given name already exists in the array.   **
**     It returns a pointer to the name or NULL if the name is     **
**     not found.                                                  **
**                                                                 **
** char **arry is a pointer to arrays of pointers (existing names) **
** char *strng is a pointer to character array entered (new name)  **
********************************************************************/
 
char * find_name(char **arry, char *strng)
{
   for (; *arry != NULL; arry++)         /* for each name          */
   {
      if (strcmp(*arry, strng) == 0)     /* if strings match       */
         return(*arry);                  /* found it!              */
   }
   return(*arry);                        /* return the pointer     */
} /* End of find_name */

/*Interaction with this program could produce the following sessions:

Output
    Enter name to be searched. 

Input
    Mark 

Output
    name Mark found 

or:

Output
    Enter name to be searched. 

Input
    Deborah 

Output
    name Deborah not found */
