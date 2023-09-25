#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano para verificar se ocorreram Jogos Olímpicos de Verão e/ou Copa do Mundo de Futebol: ");
    scanf("%d", &ano);

    // Jogos Olímpicos de Verão 
    int jogosolimpicos[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};

    // Anos em que ocorreram a Copa do Mundo de Futebol
    int copadomundo[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};

    int numjogosolimpicos = sizeof(jogosolimpicos) / sizeof(jogosolimpicos[0]);
    int numcopadomundo = sizeof(copadomundo) / sizeof(copadomundo[0]);

    int foundOlympic = 0;
    int foundWorldCup = 0;

    // Verifica se o ano fornecido está na lista de anos olímpicos
    for (int i = 0; i < numOlympicYears; i++) {
        if (year == olympicYears[i]) {
            foundOlympic = 1;
            break;
        }
    }

    // Verifica se o ano fornecido está na lista de anos da Copa do Mundo
    for (int i = 0; i < numWorldCupYears; i++) {
        if (year == worldCupYears[i]) {
            foundWorldCup = 1;
            break;
        }
    }

    // Exibe os resultados
    if (foundOlympic) {
        printf("Jogos Olímpicos de Verão ocorreram em %d.\n", year);
    }
    if (foundWorldCup) {
        printf("Copa do Mundo de Futebol ocorreu em %d.\n", year);
    }

    if (!foundOlympic && !foundWorldCup) {
        printf("Nem Jogos Olímpicos de Verão nem Copa do Mundo de Futebol ocorreram em %d.\n", year);
    }

    return 0;
}