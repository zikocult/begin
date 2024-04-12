#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);
int str_lenght(char **argv);
int comprobar(char **argv);
void escribir(int lenght, char *line, char **argv);
int busqueda (char *line, char *find);

int main(int argc, char **argv)
{
    int lenght;
    char linea[1024];


    if (argc < 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (argc == 2)
    {
        int l;

        lenght = str_lenght(&argv[1]);
        l = lenght;
        if (comprobar(&argv[1]) == 0)
            return (0);
        while (l > 0)
        {
            ssize_t bytes_read;
            int dict;

            dict = open("numbers.dict", O_RDONLY);
            if (dict == -1)
                write(1, "Error", 5);
            else
            {
                bytes_read = read(dict, linea, 1024);
                close(dict);
                if (bytes_read == 0)
                    write(1, "Archivo vacio", 13);
                else
                    escribir(lenght, linea, &argv[1]);
            }
			printf("Chars %d, contingut: %s", (int)bytes_read, linea);
            l--;
        }
    }
    if (argc == 3)
    {
        int l;

        lenght = str_lenght(&argv[2]);
        l = lenght;
        if (comprobar(&argv[2]) == 0)
            return (0);
        while (l > 0)
        {
            ssize_t bytes_read;
            int dict;

            dict = open(argv[1], O_RDONLY);
            if (dict == -1)
                write(1, "Error", 5);
            else
            {
                bytes_read = read(dict, linea, 1024);
                close(dict);
                if (bytes_read == 0)
                    write(1, "Archivo vacio", 13);
                else
                    escribir(lenght, linea, &argv[2]);
            }
            l--;
        }
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int str_lenght(char **argv)
{
    int lenght;

    lenght = 0;
    while (**argv != 0)
        lenght++;
    return (lenght);
}

int comprobar(char **argv)
{
    while (**argv != 0)
    {
        if (**argv < '0' || **argv > '9')
            return (0);
        argv++;
    }
    return (1);
}

int busqueda(char *str, char *find)
{
    int i;
    int j;
    int tmp;

    j = 0;
    while (str[j] != '\0')
    {
        if (*str == *find)
        {
            i = 0;
            tmp = 0;
            while (find[i] != '\0')
            {
                if (str[i] != find[i])
                    tmp = 1;
                i++;
            }
            if (tmp == 0)
                return (j + i);
        }
        j++;
    }
    return (j);
}

void escribir(int lenght, char *line, char **argv)
{
    int trio;
    int i;
    int count;
    
    trio = 0;
    while (**argv != '\0')
    {

    }
}


// Aparto el siguiente texto, estaba dentro de Void Escribir, pero no me gusta y no acaba de tener sentido

// count = 0;
// while (count % 3 != 0)
// {
//     if (trio == 3)
//     {
//         i = busqueda('100: ', *line);
//         while (line[i] != '\n')
//         {
//             ft_putchar(line[i]);
//             i++;
//         }
//     }
//     if (trio == 4)
//     {
//         i = busqueda('1000: ', line);
//         while (line[i] != '\n')
//         {
//             ft_putchar(line[i]);
//             i++;
//         }
//     }
//     if (trio == 7)
//     {
//         i = busqueda('1000000: ', line);
//         while (line[i] != '\n')
//         {
//             ft_putchar(line[i]);
//             i++;
//         }
//     }
//     if (trio == 10)
//     {
//         i = busqueda('1000000000: ', line);
//         while (line[i] != '\n')
//         {
//             ft_putchar(line[i]);
//             i++;
//         }
//     }
// }
