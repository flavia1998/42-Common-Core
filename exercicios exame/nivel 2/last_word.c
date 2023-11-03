#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc != 2)
    {
        write (1, "\n", 1);
    } else 
    {
        while (argv[1][i] != '\0')
        {
            i++;
        }
        while (argv[1][i-1] == '\n' || argv[1][i-1] == ' ')
        {
            i--;
        }
          while (argv[1][i-1] >= 33 && argv[1][i-1] <= 126)
        {
            i--;
        }
        int j = i + 1;
        while (argv[1][j-1] >= 33 && argv[1][j-1] <= 126)
        {
            write(1, &argv[1][j-1], 1);
            j++;
        }
        write(1,"\n",1);
    }

    return 0;
}