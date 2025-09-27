#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    i = 0;

    if(argc != 2)  // si le nombre dargument nest pas 1 write nouvelle ligne
    {
        write(1, "\n", 1);
        return (0);
    }

    while(argv[1][i] != '\0')  // tant quon est pas a la fin dla string
    {
        if(argv[1][i] >= 'a' && argv[1][i] <= 'm')   // si c entre a et m on fait + 13
        {
            argv[1][i] = argv[1][i] + 13;
            write(1, &argv[1][i], 1);
        }
        else if(argv[1][i] >= 'A' && argv[1][i] <= 'M')  // la meme que celle ddavant mais on gere les majuscule +13
        {
            argv[1][i] = argv[1][i] + 13;
            write(1, &argv[1][i], 1);
        }
        else if(argv[1][i] >= 'n' && argv[1][i] <= 'z') // on gere les miniscule -13
        {
            argv[1][i] = argv[1][i] - 13;
            write(1, &argv[1][i], 1);
        }
        else if(argv[1][i] >= 'N' && argv[1][i] <= 'Z') // on gere les majuscule -13
        {
            argv[1][i] = argv[1][i] - 13;
            write(1, &argv[1][i], 1);
        }
        else                               // la c pour le reste les carractere qui ne sont pas alphabetique
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1); // touujours un backslash N ! :)
    return(0);
}