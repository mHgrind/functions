#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    i = 0;

    int alphabet[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};

    if(argc != 2)   // la je gere si zehma ya + de 1 arguments ou moin
    {
        write(1, "\n", 1);
        return (0);
    }
    while(argv[1][i] != '\0') // et la c si tout est bon je rentre dans la boucle 
    {
        char c = argv[1][i];
        if (c >= 'a' && c <= 'z')
        {
            int index = c - 'a';
            int fois = alphabet[index];
            int j = 0;
            while (j < fois)
            {
                write(1, &c, 1);
                j++;
            }

        }
        else if (c >= 'A' && c <= 'Z')
        {
            int index = c - 'A';
            int fois = alphabet[index];
            int j = 0;
            while (j < fois)
            {
                write(1, &c, 1);
                j++;
            }
        }
        else
            write(1, &c, 1);

        i++;

    }
    write(1, "\n", 1);
    return (0);
}

