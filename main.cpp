#include <iostream>
#include <iomanip>
using namespace std;
//TEMP
int main() {

  class pessoa {
  private:
    string nome, sexo, nacionalidade, estado_Civil, profissao;
    int idade;
    float altura, peso;
  public:
    void setTextos(string seletor ,string input) {
        if(seletor == "nome") {
          nome = input;
          cout << endl << "Nome registrado com sucesso!" << endl;
        }
          else {
            if(seletor == "sexo") {
              sexo = input;
              cout << "Sexo registrado com sucesso!" << endl;
            }
            else {
              if(seletor == "nacionalidade") {
                nacionalidade = input;
                cout << "Nacionalidade registrada com sucesso!" << endl;
              }
              else {
                if(seletor == "estado_Civil") {
                  estado_Civil = input;
                  cout << "Estado civil registrado com sucesso!" << endl;
                }
                else {
                  if(seletor == "profissao") {
                    profissao = input;
                    cout << "Profissão registrada com sucesso!" << endl << endl;
                }
                  else {
                    cout << "FRACASSO!" << endl << endl;
                  }
                }
              }
            }
          }
    };
    string getTextos(string seletor) {
      if(seletor == "nome") {
        return nome;
      }
      else {
        if(seletor == "sexo") {
          return sexo;
        }
        else {
          if(seletor == "nacionalidade") {
            return nacionalidade;
          }
          else {
            if(seletor == "estado_Civil") {
              return estado_Civil;
            }
            else {
              if(seletor == "profissao") {
                return profissao;
            }
              else {
                cout << endl << "FRACASSO!" << endl << endl;
              }
            }
          }
        }
      }
    };
  };

  pessoa pedro;
  pedro.setTextos("nome", "Pedro José");
  pedro.setTextos("sexo", "Masculino");
  pedro.setTextos("nacionalidade", "Brasileiro");
  pedro.setTextos("estado_Civil", "Solteiro");
  pedro.setTextos("profissao", "Professor");

  cout << "Nome" << setw(15) << "Sexo" << setw(22) << "Nacionalidade" << setw(18) << "Estado Civil" << setw(18) << "Profissão" << endl;

  cout << pedro.getTextos("nome") << setw(14)
  << pedro.getTextos("sexo") << setw(14)
  << pedro.getTextos("nacionalidade") << setw(17)
  << pedro.getTextos("estado_Civil") << setw(21)
  << pedro.getTextos("profissao") << endl;
  return 0;
}
