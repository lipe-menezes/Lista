#include<stdio.h>

int main() {
    int ano;
    printf("Digite um ano para verificar se ocorreram Jogos Olimpicos e/ou Copa do Mundo: ");
    scanf("%d", &ano);


    int jogosolimpicos[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};

    int copadomundo[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};

    int numjogosolimpicos = sizeof(jogosolimpicos) / sizeof(jogosolimpicos[0]);
    int numcopadomundo = sizeof(copadomundo) / sizeof(copadomundo[0]);

    int encontrarjogosolimpicos = 0;
    int encontrarcopa = 0;
    
    int i;

    // Verificar se o ano fornecido está na lista de anos olímpicos
    for (; i < numjogosolimpicos; i++) {
        if (ano == jogosolimpicos[i]) {
            encontrarjogosolimpicos = 1;
            break;
        }
    }

    // Verificar se o ano fornecido está na lista de anos da Copa do Mundo
    for (; i < numcopadomundo; i++) {
        if (ano == copadomundo[i]) {
            encontrarcopa = 1;
            break;
        }
    }

    if (encontrarjogosolimpicos) {
        printf("Jogos Olimpicos ocorreram em %d.\n", ano);
    }
    if (encontrarcopa) {
        printf("Copa do Mundo de Futebol ocorreu em %d.\n", ano);
    }

    if (!encontrarjogosolimpicos && !encontrarcopa) {
        printf("Nem Jogos Olimpicos de Verao nem Copa do Mundo de Futebol ocorreram em %d.\n", ano);
    }

    return 0;
}