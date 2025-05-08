// Faça um progama que receba a idade de uma pessoa em anos e
// imprima essa idade em:Meses , Dias , Horas e Minutos.

//Variáveis 
int  idade = 0;//inicia a idade 
int  idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;


void setup()
{
  Serial.begin(9600);
}



void loop()
{
     //cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_02         |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");

  //entrada 
  Serial.println("Digite a sua idade");//pergunta a idade do usuário 
  while( ! Serial.available() ){}//Aguardar o usuário digitar
  idade = Serial.parseInt();
  
  //processamento
  idadeMeses   = idade * 12;
  idadeDias    = idade * 365;
  idadeHoras   = idadeDias * 24;
  idadeMinutos = idadeHoras *60;
     
  //saída
  Serial.println( "Sua idade em meses: " + String(idadeMeses) );
  Serial.println( "Sua idade em dias: " + String(idadeDias) );
  Serial.println( "Sua idade em horas: " + String(idadeHoras) );
  Serial.println( "Sua idade em minutos:" + String(idadeMinutos) );
    
}
  