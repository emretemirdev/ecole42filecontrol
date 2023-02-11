#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03"};
    char *files[] = {"ft_print_program_name.c", "ft_print_params.c", "ft_rev_params.c", "ft_sort_params.c"};

    int i;
    for (i = 0; i < 4; i++)
    {
        char path[100];
        sprintf(path, "%s/%s", dirs[i], files[i]);

        struct stat sb;
        if (stat(path, &sb) == 0 && S_ISREG(sb.st_mode))
        {
            printf("%s dosya %s da mevcut\n", files[i], dirs[i]);
        }
        else
        {
            printf("%s dosya %s da yok\n", files[i], dirs[i]);
        }
    }
    return 0;
}

