// C++ code
//
void setup()
{
Serial.begin(9600);
  
Serial.println("*** SACOLAO DO ZEH ***");
Serial.println();
  
String frutas [6];//cria um vetor tamanho 6 (preenchendoas posições com string vazias)
  
Serial.println("OH ZEH, bora cadastrar as frutas!");
  
Serial.println();

  for(int i = 0; i <= 5; i++){
    //pega a fruta do usúario 
  Serial.println("Informe a " + String(i + 1) +"a fruta:");
  while(!Serial.available());
  String fruta = Serial.readString();
    
   // põe a fruta na sacola / cadastra a fruta no array/vetor
   frutas[i] = fruta;
    
}//fim do for
  
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + "a fruta: " + frutas [i] );
  
  }
  
}

void loop()
{

}