#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03", "ex04", "ex05", "ex06", "ex07", "ex08"};
    char *files[] = {"ft_putchar.c", "ft_print_alphabet.c", "ft_print_reverse_alphabet.c", "ft_print_numbers.c", "ft_is_negative.c","ft_print_comb.c","ft_print_comb2.c","ft_putnbr.c","ft_print.combn"};

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

