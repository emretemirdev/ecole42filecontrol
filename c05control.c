#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
    char *dirs[] = {"ex00", "ex01", "ex02", "ex03", "ex04", "ex05", "ex06", "ex07", "ex08"};
    char *files[] = {"ft_iterative_factorial.c", "ft_recursive_factorial.c", "ft_iterative_power.c", "ft_recursive_power.c", "ft_fibonacci.c","ft_sqrt.c","ft_is_prime.c","ft_find_next_prime.c","ft_ten_queens_puzzle.c"};

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

