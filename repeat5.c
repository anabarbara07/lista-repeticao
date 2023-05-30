/*05- Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um
pais B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, calcular e imprimir o
tempo necessário para que a população do país A ultrapasse a população do país B.*/

main(){

float percentA=0.03,percentB=0.03,cont=0;
int paisA=5000000,paisB=7000000;

while(paisA<paisB){

paisA=paisA*percentA;

paisB=paisB*percentB;


cont++;
}

printf("O tempo necessario para que o pais A ultrapasse o B e de %f",cont);
}
