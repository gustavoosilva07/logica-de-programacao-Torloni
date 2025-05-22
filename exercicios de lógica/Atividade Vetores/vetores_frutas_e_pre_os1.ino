// C++ code
//variáveis globais 
String frutas [6];//cria um vetor tamanho 6 (preenchendo as posições com string vazias)
float precoFrutas[6];
void setup()
{
Serial.begin(9600);
  
Serial.println("*** SACOLAO DO ZEH ***");
Serial.println();
  
Serial.println("OH ZEH, bora cadastrar as frutas!");
  
Serial.println();
   //pede a fruta para o usúario 
  for(int i = 0; i <= 5; i++){
    //pega as frutas do usúario 
  Serial.println("Informe a " + String(i + 1) +"a fruta:");
  while(!Serial.available());
  String frutaDigitada = Serial.readString();
    
  //pega o preço da fruta
  Serial.println("Qual o preco de " + frutaDigitada + "?");
  while(!Serial.available());
  float precoDigitado = Serial.parseFloat();
    
   // põe a fruta na sacola / cadastra a fruta no array/vetor
   frutas[i] = frutaDigitada;
   precoFrutas[i] = precoDigitado;
    
}//fim do for
  
  for(int i = 0; i <= 5; i++)
  {
  Serial.println(String(i + 1) + "a fruta: " + frutas [i] );
  Serial.println("Preco da Fruta: " + String(precoFrutas[i]));
  }
  
}//fim do setup

void loop()
{

}