#include "libft.h"

/* HOW LINKED LIST WORKS ?

This code aims to understand more deeply how works linked list in view of computer memory adresse. 


libft.h contains : 

typedef struct s_list
{
    void            *content; 
    struct s_list   *next; // pointor on structure s_list. Double pointor at the end ? 
}                   t_list;

*/

t_list *add_link(t_list *list, char *content)
{
    t_list  *tmp;

    tmp = malloc(sizeof(t_list));
    if (tmp)
    {
        (*tmp).content = content; // attribute the content given in the function
        (*tmp).next = list; // attribute the adress containing the adress of the content, NULL at first, nor after.
        printf(" string : %s\n", (char *)(*tmp).content);
        printf(" same as A : %p\n", &(*tmp).content); // = A
        printf(" same as D : %p\n", (*tmp).next); // = D
    }
    return (tmp);
}

void    print_list(t_list *list)
{
    while(list)
    {
        printf("%s\n", (char *)(*list).content);
        printf(" A memory adress of the variable which contains the adress where are stocked the data : %p\n", &(*list).content);
        printf(" A : %p\n", list); // adress of the pointor
        printf(" B memory adress of the content : %p\n", (*list).content); // adress of the variable which is pointed
        printf(" C memory adress of the variable which contains the adresse where is stocked the next node : %p\n", &(*list).next);
        printf(" D memory adress of the next node, which is the same as A normally : %p\n", (*list).next);

        list = (*list).next;
         /* If we execute the program, we can see that 'list' and '&(*list).content' have the same adress so that
        when we  put the '=', we tranfer the adress of the next node to the list variable, which contain */
    }
}

int main()
{
    t_list  *list; // we create a pointor on list on a structure s_list, renamed t_list thanks to typedef

    list = NULL;
    list = add_link(list, "tot");
    list = add_link(list, "tat");
    list = add_link(list, "tut");
    print_list(list);

    return (0);
}

/* EXAMPLE BELOW OF THE PROGRAM RUNNING

 string : tot
 same as A : 0x56327820c2a0
 same as D : (nil)
 string : tat
 same as A : 0x56327820c6d0
 same as D : 0x56327820c2a0
 string : tut
 same as A : 0x56327820c6f0
 same as D : 0x56327820c6d0
tut
 A memory adress of the variable which contains the adress where are stocked the data : 0x56327820c6f0
 A : 0x56327820c6f0
 B memory adress of the content : 0x563277ac1181
 C memory adress of the variable which contains the adresse where is stocked the next node : 0x56327820c6f8
 D memory adress of the next node, which is the same as A normally : 0x56327820c6d0
tat
 A memory adress of the variable which contains the adress where are stocked the data : 0x56327820c6d0
 A : 0x56327820c6d0
 B memory adress of the content : 0x563277ac117d
 C memory adress of the variable which contains the adresse where is stocked the next node : 0x56327820c6d8
 D memory adress of the next node, which is the same as A normally : 0x56327820c2a0
tot
 A memory adress of the variable which contains the adress where are stocked the data : 0x56327820c2a0
 A : 0x56327820c2a0
 B memory adress of the content : 0x563277ac1179
 C memory adress of the variable which contains the adresse where is stocked the next node : 0x56327820c2a8
 D memory adress of the next node, which is the same as A normally : (nil)


What can we learn from the above exeecution ?

Converting the hexadecimal adress in number (https://sebastienguillon.com/test/javascript/convertisseur.html) is lightening.

Make a manuscrit tab :  A   B
                        C   D

First, we can see that the adress of the content (B) follow each other by four (as the strings contains 4 char including '\0'). I assume it may change if it encounter a block of memory already taken because it is the goal of linked list.

Second, we can see that the adress of A and C follow by 8 bytes in a node and of betwen 20 and 30 between each node.

Third, A and the D of the previous node are the same as during this operation (list = (*list).next;), we do that.

Fourth, D seems to be a double pointor as it points toward the adress of a variable which also point toward the adress of a variable.

END
*/