#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03", "ex04", "ex05", "ex06", "ex07", "ex08","ex09","ex10","ex11","ex12"};
    char *files[] = {"ft_strcpy.c", "ft_strncpy.c", "ft_str_is_alpha.c", "ft_str_is_numeric.c", "ft_str_is_lowercase.c", "ft_str_is_uppercase.c","ft_str_is_printable.c","ft_strupcase.c","ft_strlowcase.c","ft_strcapitalize.c","ft_strlcpy.c","ft_putstr_non_printable.c","ft_print_memory.c"};

    int i;
    for (i = 0; i < 13; i++)
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

