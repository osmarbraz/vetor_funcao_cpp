//Programa mostra uma vetor de ponteiros para funcao

#include <iostream>

using namespace std;

//Declaração das funções
void funcao0(){ 
    cout << "\n\n*** Estou em funcao0() ***\n"; 
}

void funcao1(){ 
    cout << "\n\n*** Estou em funcao1() ***\n"; 
}

void funcao2(){ 
    cout << "\n\n*** Estou em funcao2() ***\n"; 
}

/**
 * Programa pincipal
 */
int main(int argc, char** argv) {
   //Declara um vetor de 3 posições de void
   void (*ptrf[3])(void);

   //Atribui cada função a uma posição do vetor
   ptrf[0] = funcao0;
   ptrf[1] = funcao1;
   ptrf[2] = funcao2;

   
   int opcao = -1;
   do
   {
      cout << "\n0 - Abrir";
      cout << "\n1 - Fechar";
      cout << "\n2 - Salvar";
      cout << "\n9 - Sair";
      cout << "\nOpção: ";
      cin >> opcao;
      
      //Somente executa a função da faixa de 0 até 2
      if (opcao >= 0 && opcao <= 2){
          //Chama a função de acordo com o valor da opcao
          (*ptrf[opcao])();
      }
      
   } while (opcao!=9);
      return 0;
}