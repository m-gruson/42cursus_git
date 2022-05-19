#include "libft.h"

/* = ce qui est présent dans la libft.h
typedef struct s_list
{
    void            *content; // pointeur sur char par exemple pour mettre une suite de caractères
    struct s_list   *next; // creer un pointeur, appelé next, sur une structure s_list 
}                   t_list;
*/

t_list *add_link(t_list *list, char *content)
{
    t_list  *tmp;

    tmp = malloc(sizeof(t_list));
    if (tmp)
    {
        (*tmp).content = content;
        (*tmp).next = list;
        printf(" TMP : adresse du content : %s\n", (char *)(*tmp).content);
        printf(" TMP : adresse du content : %p\n", &(*tmp).content);
        printf(" TMP : adresse du content suivant précédent : %p\n", (*tmp).next);
    }
    return (tmp);
}

void    print_list(t_list *list)
{
    while(list)
    {
        printf("%s\n", (char *)(*list).content);
        //printf("%p\n", list); // même adresse qu'au dessus
        printf(" adresse du content : %p\n", &(*list).content);
        printf(" adresse du content suivant précédent : %p\n", (*list).next);
        //printf(" %p\n", &(*list).next); 

        list = (*list).next;
    }
}

int main()
{
    t_list  *list; // on crée un pointeur list sur une structure s_list (rennomé t_list grâce au typedef)

    list = NULL;
    printf(" BOUOUOU : %p\n", list);
    printf(" BOUOUOU : %p\n", &list);
    list = add_link(list, "toto");
    printf(" BOUOUOU : %p\n", list);
    printf(" BOUOUOU : %p\n", &list);
    list = add_link(list, "tata");
    printf(" BOUOUOU : %p\n", list);
    printf(" BOUOUOU : %p\n", &list);
    list = add_link(list, "tutu");
    printf(" BOUOUOU : %p\n", list);
    print_list(list);

    return (0);
}