// C++ code
//
void setup()
{
   Serial.begin(9600);
   //vetores - variavéis constrúidas (estruturas de dados)
  //podem guardar vários valores em um único nome
  
  //                 0   1   2   3   4 - ídices/posições  
  int numeross[5] = {10, 20, 30, 40, 50};//gaveteiro com 5 gavetas
  numeross[3] = 400;//troca o valor que está na 4a gaveta 
  
 //imprime os valores do array/vetor 
  for(int i = 0; i <= 4; i++){
    Serial.println(numeross[i]);//imprime o valor atual (varíavel: i)
  }
}

void loop()
{

}