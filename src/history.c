#include <stdio.h>
#include <readline/history.h>

void print_history()
{
    HIST_ENTRY **list = history_list();

    if (list == NULL)
    {
        printf("No history available.\n");
        return;
    }

    printf("\n----- Command History -----\n");

    for (int i = 0; list[i] != NULL; i++)
    {
        printf("%d %s\n", i + history_base, list[i]->line);
    }
}
