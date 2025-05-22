int n = 0;
String vetResultados;
String vetPalpite;


void desenhaCabecalho()
{
 Serial.println(" --- PROGRAMA JOGO DE DADOS --- ");
 Serial.println();
 delay(500);
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    Serial.println();
    delay(700);
  }
  Serial.println();
  
  
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//indica e normaliza a porta randomica para evitar o mesmo valor
}

void loop()
{
  desenhaCabecalho();//desenha o menu na tela 
   
  //Entrada
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();//rodadas digitadas pelo usuário 
  
  
  int vetPalpite[qtdRodadas];
  int vetResultados[qtdRodadas];
  
  
  //Processamento do jogo
  for(int r = 1; r <= qtdRodadas; r++)
  {//aqui dentro o jogo todo!!!
  //Solicita o palpite do usuário
  Serial.println("Digite o seu palpite de 1 ao 6:");
  while (!Serial.available());//espera o usuário digitar 
  int palpite = Serial.parseFloat();//guarda o palpite 
    
  Serial.print("Jogando o dado ");
  
  for(int i = 0; i <=2; i++){
  Serial.print(".");
  delay(700);
  
  }
 
 //jogar o dado sorteia um numero randônico/aleatório de 1 até 7 - 1, ou seja, 6 
  int nS = random(1, 7);//numero entre 1 e 6
    
  vetPalpite[r] = palpite;
  vetResultados[r] = nS;
  
  Serial.println();
  Serial.println();
  Serial.println("Seu palpite: " + String(palpite));//exibir o palpite do usuário 
  Serial.println("Numero Sorteado: " + String(nS));//exibir o numero sorteado
    
  if (n == nS)
  {
  Serial.println("Parabens, voce acertou!!");
  }else {
  Serial.println("Que pena, tente outra vez!!"); 
  }
   Serial.println("Reiniciando Programa");
   Serial.println();
   delay(700);
    
  }//fim do for
  
  //ao finalizar, mostrar as estatÍsticas das jogadas 
  Serial.println("ESTATISTICA DO JOGO");
  Serial.println();
  for(int i = 0; i < qtdRodadas; i++)
  {
    Serial.println("Rodada " + String(i + 1) + ":");
    Serial.println("   Palpite: " + String(vetPalpite[i]));
    Serial.println("   Dado: " + String(vetResultados[i]));
    Serial.println("   Resultado: " + String(vetResultados[i] == vetPalpite[i] ? "Acertou!" : "Errou!"));
    Serial.println("------------------------------");
    Serial.println();
    }//fim do for que exibe o relatório final (estatística)
    
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  desenhaPontinhos(3, 500);
  delay(700);//pausa de 3 segundos para reiniciar o loop
  
}//fim do loop
