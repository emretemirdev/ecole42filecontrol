#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03", "ex04", "ex05"};
    char *files[] = {"ft_strcmp.c", "ft_strncmp.c", "ft_strcat.c", "ft_strncat.c", "ft_strstr.c","ft_strlcat.c"};

    int i;
    for (i = 0; i < 6; i++)
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

