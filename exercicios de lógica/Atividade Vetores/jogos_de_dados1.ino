int n = 0;

void desenhaCabecalho()
{
 Serial.println(" --- PROGRAMA JOGO DE DADOS --- ");
 Serial.println();
 delay(500);
}
/*
 Desenha quantos pontinhos o usúario quiser
 se o usúario não passar nada, desenha 5 pontinhos 
*/

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(700);
  }
}


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  desenhaCabecalho();//desenha o menu na tela 
  //solicitar o palpite do uúario -3 comandos 
  
  Serial.println("Digite o seu palpite de 1 ao 6:");
  Serial.println();
  while (!Serial.available());
  n = Serial.parseFloat();
  
  for(int i = 0; i <=2; i++){
  Serial.print(".");
  delay(700);
  
  }
 
  
 //jogar o dado sorteia um numero randônico/aleatório de 1 até 7 - 1, ou seja, 6 
  int nS = random(1, 7);//numero entre 1 e 6
  
  Serial.print("Jogando o dado ");
  
  Serial.println();

  
  
  //exibir o palpite do usuario
  Serial.println("Seu palpite: " + String(n));
  //exibir o número sorteado
  Serial.println("Numero do Dado: " + String(nS));
  
  if (n == nS)
  {
  Serial.println("Parabens, voce acertou!!");
  }else {
  Serial.println("Que pena, tente outra vez!!"); 
  }
   Serial.println("Reiniciando Programa");
   Serial.println();
   delay(700);
  
}

