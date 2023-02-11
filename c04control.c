#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03", "ex04", "ex05"};
    char *files[] = {"ft_strlen.c", "ft_putstr.c", "ft_putnbr.c", "ft_atoi.c", "ft_putnbr_base.c", "ft_atoi_base"};

    int i;
    for (i = 0; i < 6; i++)
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

