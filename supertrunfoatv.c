#include <stdio.h>

int main(){
    //variaveis
    char estado[2];
    char codigo[3];
    char nome[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int num_turista1;
    //carta 1
    float den_pop1;
    float percapita1;
    float super_poder1;
    float carta1, carta2;
    super_poder1 = area1 + pib1 + num_turista1 + percapita1 + populacao1;
    den_pop1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
//carta 2
    unsigned long int populacao2;
    float area2;
    float pib2;
    int num_turista2;
    float den_pop2;
    float percapita2;
    float super_poder2;
    super_poder2 = area2 + pib2 + num_turista2 + percapita2 + populacao2;
    den_pop2 = populacao2 / area2;

    percapita2 = pib2 / populacao2;
    //entrada e saida
    printf("atributos da carta 1:");
    printf("digite seu estado de 'A' a 'H':\n");
    scanf("%s", estado);

    printf("digite o codigo da cidade, de 01 a 04:\n");
    scanf("%s", &codigo);

    printf("digte o nome da sua cidade:\n");
    scanf("%s", &nome);

    printf("digite a populacao da cidade:\n");
    scanf("%d", &populacao1);

    printf("digite a area da sua cidade:\n");
    scanf("%f", &area1);

    printf("digite seu PIB:\n");
    scanf("%f", &pib1);

    printf("digite a quantidade de numero turistico:\n");
    scanf("%d", &num_turista1);


    //resultado das informações digitadas acima
    printf("carta1:\n");
    printf("ESTADO:%s\n", estado);
    printf("CODIGO:%s%s\n", estado,codigo);
    printf("nome da cidade:%s\n", nome);
    printf("populacao:%d\n",populacao1);
    printf("area:%.3f\n", area1);
    printf("PIB:%2.f\n", pib1);
    printf("numero de ponto turistico:%d\n", num_turista1);
    printf("densidade populacional e: %f \n", den_pop1);
    printf("o pib per capita da sua populacao e: %f\n", percapita1);

    // carta 2:
    printf("atributos da carta 2:");
    printf("digite seu estado de 'A' a 'H':\n");
    scanf("%s", &estado);

    printf("digite o codigo da cidade, de 01 a 04:\n");
    scanf("%s", &codigo);

    printf("digte o nome da sua cidade:\n");
    scanf("%s", &nome);

    printf("digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("digite a area da sua cidade:\n");
    scanf("%f", &area2);

    printf("digite seu PIB:\n");
    scanf("%f", &pib2);

    printf("digite a quantidade de numero turistico:\n");
    scanf("%d", &num_turista2);
    //informações da carta2:
    printf("carta2:\n");
    printf("ESTADO:%s\n", estado);
    printf("CODIGO:%s%s\n", estado,codigo);
    printf("nome da cidade:%s\n", nome);
    printf("populacao:%d\n",populacao2);
    printf("area:%.3f\n", area2);
    printf("PIB:%2.f\n", pib2);
    printf("numero de ponto turistico:%d\n", num_turista2);

    const char *resultado1 =  (populacao1 > populacao2) ? "carta(2):populacao (2) ganhou\n" : "carta(1):populacao (1) ganhou\n";

    const char *resultado2 =  (area1 > area2) ? "carta:area (2) ganhou\n" : "carta(1):populacao (1) ganhou\n";
    const char *resultado3 =  (pib1 > pib2) ? "carta(2):pib (2) ganhou\n" : "carta(1):pib (1) ganhou\n";
    const char *resultado4 =  (num_turista1 > num_turista2) ? "carta(2):num_turista (2) ganhou\n" : "num_turista(1): (1) ganhou\n";
    printf("%s\n", resultado1);
    printf("%s\n", resultado2);
    printf("%s\n", resultado3);
    printf("%s\n", resultado4);
    carta1 = populacao1 + area1 + pib1 + num_turista1;
    carta2 = populacao2 + area2 + pib2 + num_turista2;
    /*if(carta1 > carta2){
        printf("carta1 ganhou. %.2f", carta1);
    }else if(carta1 == carta2){
        printf("deu empate");
    }else{
        printf("carta2 ganhou. %.2f", carta2);
    }
    */
    int opcao;
    printf("escolher atributo:\n");
    printf("1.populacao\n");
    printf("2.area\n");
    printf("3.pib\n");
    printf("4.turismo\n");
    printf("5.geral\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        const char *resultado1 =  (populacao1 > populacao2) ? "carta(2):populacao (2) ganhou\n" : "carta(1):populacao (1) ganhou\n";

        break;
        case 2:
        const char *resultado2 =  (area1 > area2) ? "carta:area (2) ganhou\n" : "carta(1):populacao (1) ganhou\n";
        break;
        case 3:
        const char *resultado3 =  (pib1 > pib2) ? "carta(2):pib (2) ganhou\n" : "carta(1):pib (1) ganhou\n";
        break;
        case 4:
        const char *resultado4 =  (num_turista1 > num_turista2) ? "carta(2):num_turista (2) ganhou\n" : "num_turista(1): (1) ganhou\n";
        break;
        case 5: 
            if(carta1 > carta2){
            printf("carta1 ganhou. %.2f", carta1);
        }else if(carta1 == carta2){
            printf("deu empate");
        }else{
            printf("carta2 ganhou. %.2f", carta2);
        }
        break;
        default:
        printf("invalido, escolha uma das opcoes acima!");
    }

    //menu 2 interativo
    printf("escolher atributo:\n");
    printf("1.populacao\n");
    printf("2.area\n");
    printf("3.pib\n");
    printf("4.turismo\n");
    printf("5.geral\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        const char *resultado1 =  (populacao1 > populacao2) ? "carta(2):populacao (2) ganhou\n" : "carta(1):populacao (1) ganhou\n";

        break;
        case 2:
        const char *resultado2 =  (area1 > area2) ? "carta:area (2) ganhou\n" : "carta(1):populacao (1) ganhou\n";
        break;
        case 3:
        const char *resultado3 =  (pib1 > pib2) ? "carta(2):pib (2) ganhou\n" : "carta(1):pib (1) ganhou\n";
        break;
        case 4:
        const char *resultado4 =  (num_turista1 > num_turista2) ? "carta(2):num_turista (2) ganhou\n" : "num_turista(1): (1) ganhou\n";
        break;
        case 5: 
            if(carta1 > carta2){
            printf("carta1 ganhou. %.2f", carta1);
        }else if(carta1 == carta2){
            printf("deu empate");
        }else{
            printf("carta2 ganhou. %.2f", carta2);
        }
        break;
        default:
        printf("invalido, escolha uma das opcoes acima!");
    }
    

    printf("resultado final:\n");
    if(carta1 > carta2){
        printf("carta1 ganhou. %.2f", carta1);
    }else if(carta1 == carta2){
        printf("deu empate");
    }else{
        printf("carta2 ganhou. %.2f", carta2);
    }
    return 0;
}
