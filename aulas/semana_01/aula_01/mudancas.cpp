#include <iostream>
using namespace std;

int main(){
  srand(time(NULL));
  bool jogar = true;

  while(jogar){
    int numero = rand() % 10;
    int escolha = 11;
    while(numero != escolha){
      cout << "escolha um numero: " << endl;
      cin >> escolha;

      if(escolha > numero)
        cout << "acima\n";
      else if(escolha < numero)
        cout << "abaixo\n";
      else
        cout << "numero correto\n";
    }
    cout << "deseja jogar novamente? ";
    string resposta;
    cin >> resposta;
    if(resposta != "sim")
      jogar = false;
  }
}