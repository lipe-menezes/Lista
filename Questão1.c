#include <stdio.h>

int main() {
    int ano;
    
    scanf("%d", &ano);

    int jogosolimpicos[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};
    int copadomundo[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};

    int numjogosolimpicos = sizeof(jogosolimpicos) / sizeof(jogosolimpicos[0]);
    int numcopadomundo = sizeof(copadomundo) / sizeof(copadomundo[0]);

    int encontrarjogosolimpicos = 0;
    int encontrarcopa = 0;
    
    int i;
    
    for (i = 0; i < numjogosolimpicos; i++) {
        if (ano == jogosolimpicos[i]) {
            encontrarjogosolimpicos = 1;
            break;
        }
    }
    
    for (i = 0; i < numcopadomundo; i++) {
        if (ano == copadomundo[i]) {
            encontrarcopa = 1;
            break;
        }
    }

    if (encontrarjogosolimpicos) {
        printf("Os Jogos Olimpicos de Verão ocorreram no ano de %d.\n", ano);
    }
    if (encontrarcopa) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }
    if (!encontrarjogosolimpicos && !encontrarcopa) {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}