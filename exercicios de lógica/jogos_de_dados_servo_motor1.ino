
#include <Servo.h>
Servo meuServo; //cria um objeto/variavel do motor servo
Servo motor;

void desenhaCabecalho()
    {
    Serial.println("--- PROGRAMA JOGO DE DADOS ---");
    Serial.println();
    delay(500);
  }

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
    {
    for(int i = 1; i <= qtdPontos; i++);
    {
    Serial.print(".");
    delay(tempo);
      
}
  
}

int ledVerde = 10;
int ledVermelho = 7;
int led1 = 4;
int led2 = 3;
int led3 = 2;
int LEDs = 0;

void setup()
{
    Serial.begin(9600);
    randomSeed(analogRead(0));//inicia e normaliza a porta randômica para evitar pega o mesmo valor

}

void loop()
{
    desenhaCabecalho();//desenha o cabeçalho na tela
  
    //solicita o palpite do usuário
    Serial.println("Digite um palpite entre 1 e 6:");
  
    while(!Serial.available());//espera o usuário digitar
  
    int palpite = Serial.parseInt();//guarda o palpite do usuário
  
    //jogar o dado - sorteia um número randômico/aleatório de 1 até 7 - 1, ou seja,6
    int numeroSorteado = random(1, 7);//número entre 1 e 6
  
    Serial.print("Jogando o dado ");
  
    desenhaPontinhos();

    Serial.println();
    Serial.println();
    Serial.println("Seu palpite: " + String(palpite));//exibir o palpite do usuário
    Serial.println("Numero Sorteado: " + String(numeroSorteado));//exibir o número sorteado
  
    //valida o resultado
    if(palpite == numeroSorteado)
    {
    Serial.println("Parabens, voce acertou!!");
    } else {
    Serial.println("Que pena, tente outra vez!!");
    }
    Serial.println("Reiniciando o programa...");
    Serial.println();
    delay(700);
  
  
  digitalWrite(ledVermelho, HIGH);
   }
    switch (LEDs) {
      case 1:
        digitalWrite(ledVerde, HIGH);
        delay(500);
        break;
      case 2:
        digitalWrite(ledVermelho, HIGH); 
        delay(500);
        break;
      
      case 3:
        digitalWrite(led1, HIGH);
        delay(500);
        break;
      
      case 5:
        digitalWrite(led2, HIGH);
        delay(500);
        break;
      
      case 7:
        digitalWrite(led3, HIGH);
        delay(500);
        break;
      
      default:
        break;
    }
  
}

