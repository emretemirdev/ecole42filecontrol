#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03", "ex04", "ex05", "ex06", "ex07", "ex08"};
    char *files[] = {"ft_ft.c", "ft_ultimate_ft.c", "ft_swap.c", "ft_div_mod.c", "ft_putstr.c","ft_strlen.c","ft_rev_int_tab.c","ft_sort_int_tab.c"};

    int i;
    for (i = 0; i < 9; i++)
    {
        char path[100];
        sprintf(path, "%s/%s", dirs[i], files[i]);

        struct stat sb;
        if (stat(path, &sb) == 0 && S_ISREG(sb.st_mode))
        {
            printf("%s dosyasý %s klasörü içinde mevcut\n", files[i], dirs[i]);
        }
        else
        {
            printf("%s dosyasý %s\n klasöründe yok", files[i], dirs[i]);
        }
    }
    return 0;
}

