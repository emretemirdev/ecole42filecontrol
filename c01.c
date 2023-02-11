#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03"};
    char *files[] = {"ft_putchar.c", "ft_print.c", "ft_ssd.c", "ft_ft.c"};

    int i;
    for (i = 0; i < 4; i++)
    {
        char path[100];
        sprintf(path, "%s/%s", dirs[i], files[i]);

        struct stat sb;
        if (stat(path, &sb) == 0 && S_ISREG(sb.st_mode))
        {
            printf("%s dosyas� %s klas�r� i�inde mevcut\n", files[i], dirs[i]);
        }
        else
        {
            printf("%s dosyas� %s\n klas�r� i�inde yok", files[i], dirs[i]);
        }
    }
    return 0;
}

