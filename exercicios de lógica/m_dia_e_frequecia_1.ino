/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/


int   Variaveis = 0;
int   Variaveis = 0;
float n1, n2, media;

  void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada 
    Serial.println("Digite a primeira nota");
    while (! Serial.available ());//nao lembrava do available
    n1 = Serial.parseFloat();
  
  
   Serial.println("Digite a segunda nota");
   while (! Serial.available ());
   n2 = Serial.parseFloat();
  
   
  //processamento
    
}