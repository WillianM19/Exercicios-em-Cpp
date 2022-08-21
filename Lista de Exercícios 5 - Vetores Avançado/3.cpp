//3. Escrever um aplicativo que possa armazenar o nome, as duas notas e a média dos alunos de uma turma. 
//O aplicativo deverá apresentar o seguinte menu MENU 1 - Cadastrar aluno 2 - Consultar dados de aluno 
//3 - Alterar dados de aluno 4 - Consultar média da turma 5 - Sair Opção:

#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    int quantAlunos = 30, respostaMenu, indiceCadastro = 0;
    string nome[quantAlunos], respostaConsulta;
    float nota1[quantAlunos], nota2[quantAlunos];
    float media[quantAlunos], mediaTurma;
    bool loop = true;
    
    while (loop){
        system("clear || cls");
        cout << "-------------MENU--------------\n\n";
        cout << "1 - Cadastrar aluno\n";
        cout << "2 - Consultar dados de aluno (" << indiceCadastro << " Cadastrados)\n";
        cout << "3 - Alterar dados de aluno\n";
        cout << "4 - Consultar média da turma\n";
        cout << "5 - Sair\n";
        cout << "-------------------------------\n\n";
        
        cin >> respostaMenu;
        
        switch(respostaMenu){
            case 1://1 - Cadastrar aluno
                system("clear || cls");
                cout << "Nome do aluno: ";
                cin >> nome[indiceCadastro];
                cout << "Nota 1: ";
                cin >> nota1[indiceCadastro];
                cout << "Nota 2: ";
                cin >> nota2[indiceCadastro];
                media[indiceCadastro] = (nota1[indiceCadastro] + nota2[indiceCadastro]) / 2;
                cout << "Aluno cadastrado!\n";
                sleep(1);
                indiceCadastro++;
                break;
            case 2://2 - Consultar dados de aluno 
                system("clear || cls");
                cout << "Alunos cadastrados: ";
                for (int i = 0; i < indiceCadastro; i++){
                    cout << nome[i] << "; ";
                }
                cout << "\nDigite o nome do aluno: ";
                cin >> respostaConsulta;
                for (int i = 0; i < indiceCadastro; i++){
                    if (respostaConsulta == nome[i]){
                        system("clear || cls");
                        cout << "-------------ALUNO------------\n\n";
                        cout << "Nome: " << nome[i] << "\n";
                        cout << "Nota 1: " << nota1[i] << "\n";
                        cout << "Nota 2: " << nota2[i] << "\n\n";
                        cout << "Media do aluno: " << media[i] << "\n\n";
                        cout << "-------------------------------\n\n";
                        sleep(3);
                        break;
                    }
                }
                break;
            case 3: // 3 - Alterar dados de aluno
                system("clear || cls");
                cout << "Alunos cadastrados: ";
                for (int i = 0; i < indiceCadastro; i++){
                    cout << nome[i] << "; ";
                }
                cout << "\nDigite o nome do aluno para alterar: ";
                cin >> respostaConsulta;
                for (int i = 0; i < indiceCadastro; i++){
                    if (respostaConsulta == nome[i]){
                        system("clear || cls");
                        cout << "Novo nome do aluno: ";
                        cin >> nome[i];
                        cout << "Nova nota 1: ";
                        cin >> nota1[i];
                        cout << "Nova nota 2: ";
                        cin >> nota2[i];
                        media[i] = (nota1[i] + nota2[i]) / 2;
                        cout << "Aluno Modificado!\n";
                        sleep(1);
                        break;
                    }
                }
                break;
            case 4: //4 - Consultar média da turma
                mediaTurma = 0;
                for (int i = 0; i < indiceCadastro; i++){
                    mediaTurma += media[i];
                }
                mediaTurma = mediaTurma/indiceCadastro;
                system("clear || cls");
                cout << "--------MEDIA DA TURMA---------\n\n";
                cout << "\nA media da turma é " << mediaTurma << ".\n";
                cout << "-------------------------------\n\n";
                sleep(3);
                break;
            case 5: //5 - Sair
                cout << "Saindo do sistema...";
                loop = false;
                break;
            }
        }
    return 0;
}

