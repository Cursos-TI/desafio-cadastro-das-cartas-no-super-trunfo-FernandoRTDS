#include <stdio.h>

int main() {

    // Primeira Carta do Super Trunfo!
    char Estado1[50], NomeCidade1[50], CodigoCarta1[3];
    int Populacao1, PontosT1;
    float Area1, PIB1;

    // Segunda Carta!
     char Estado2[50], NomeCidade2[50], CodigoCarta2[3];
    int Populacao2, PontosT2;
    float Area2, PIB2;

    // Cadastro da Primeira Carta:
    printf("Digite o nome do Estado em que a primeira cidade está localizada: \n");
    scanf("%s", Estado1); 

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", NomeCidade1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", CodigoCarta1); 

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &PontosT1);

    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o (PIB) da primeira cidade: \n");
    scanf("%f", &PIB1);

    // Cadastro da Segunda Carta:
    printf("Digite o nome do Estado em que a segunda cidade está localizada: \n");
    scanf("%s", Estado2); 

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", NomeCidade2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", CodigoCarta2); 

    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &PontosT2);

    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o (PIB) da segunda cidade: \n");
    scanf("%f", &PIB2);

    // Resultado - Primeira Carta!
    printf(
        "Primeira Carta:"
        "Estado: %s\n"
        "Cidade: %s\n"
        "Código da Carta: %s\n"
        "População: %d\n"
        "Pontos Turísticos: %d\n"
        "Área da Cidade: %.2f\n"
        "PIB: %f\n",
        Estado1, NomeCidade1, CodigoCarta1, Populacao1, PontosT1, Area1, PIB1
    );

    // Resultado - Segunda Carta!
    printf(
        "Segunda Carta:"
        "Estado: %s\n"
        "Cidade: %s\n"
        "Código da Carta: %s\n"
        "População: %d\n"
        "Pontos Turísticos: %d\n"
        "Área da Cidade: %.2f\n"
        "PIB: %f\n",
        Estado2, NomeCidade2, CodigoCarta2, Populacao2, PontosT2, Area2, PIB2
    );

    return 0;
}
