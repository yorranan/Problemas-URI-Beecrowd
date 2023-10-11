#include <iostream>
#include<windows.h>
#include<conio.h>  
#include<string>
#include<ctime>
#define N 10
#define M 7


//arrumar o nivel 3 nao esta iniciando quando clica em uma tecla ele para, parar de pular uma casa


using namespace std;


string cenario[N][M];
string cenario3[N*2][M*2];
string cenarioTemp[N][M];
string posicaoPersonagem[M];
string posicaoPersonagem3[M*2];
void CriarCenarioZerado();
void MostrarCenario();
void CriarCenario();
void Mostrar();
void Teclas();
int tecla, posPers = 3;


int main() {
    int posCaracter = 0;
    int posPers3 = 6;
    int pontos = 0, vida = 1;
    char tecla;//caracter
    int nivel;


    cout<<"Bem vindo(a) a essa viajem no espaço sideral"<<endl;
    cout<<"Seu objetivo principal é coletar as estrelas, mas atenção cada nível escolhido tem diferenças!"<<endl;
    cout<<"Para iniciar escolha o nivel do jogo:"<<endl;
    cout<<"Nível 1: Colete as estrelas(*) mas cuidado você precisa atingir 10 pontos para acabar."<<endl;
    cout<<"Nível 2: Cuidado à meteoros(!) indo em sua direção, desvie e continue no jogo."<<endl;
    cout<<"Nível 3: Nesse nível seu objetivo é coletar as estrelas em um espaço maior colete 5 e vença o jogo."<<endl;
    cout<<"Boa viajem!"<<endl;
    cin>>nivel;


    if(nivel==1|| nivel==2 || nivel==3){
        switch (nivel){
        case 1:
            CriarCenarioZerado();
            MostrarCenario();
                while (true) {
                    Teclas();
                   
                    for (int i = 0; i < 10; i++) {  //cria uma cópia do cenário
                        for (int j = 0; j < 7; j++) {
                            cenarioTemp[i][j] = cenario[i][j];
                        }
                    }


                    posCaracter = rand() % 7; //define a posição da estrela
                    for (int j = 1; j < 6; j++) {
                        cenario[1][j] = " ";
                    }
                    if (posCaracter != 0 && posCaracter != 6) {
                        cenario[1][posCaracter] = "*";
                    }


                    for (int i = 2; i <= 10; i++) { //valida se o personagem vai ganhar pontos
                        for (int j = 0; j < 7; j++) {
                            cenario[i][j] = cenarioTemp[i-1][j];
                        }
                    }
                    if(cenario[9][posPers]=="*"){ //ver se ta na mesma posição
                        pontos++;
                    }


                    MostrarCenario();


                    for (int i = 0; i < 6; i++) { //exibe o personagem na tela
                        if (posPers == i) {
                            posicaoPersonagem[i] = "o";
                        }
                        cout << posicaoPersonagem[i];
                    }
                    cout << endl;


                    cout << "Pontos: " + to_string(pontos)<<endl;
                    if (pontos==10){ //se chegou a 10 para
                        cout << "Acabou o jogo";
                    return 0;
                    }
                }
        return 0;
        break;
        case 2:
            CriarCenarioZerado();
            MostrarCenario();
                while (true){
                   Teclas();


                        for (int i = 0; i < 10; i++) {  //cria uma cópia do cenário
                            for (int j = 0; j < 7; j++) {
                                cenarioTemp[i][j] = cenario[i][j];
                            }
                        }


                        posCaracter = rand() % 7; //define a posição do inimigo
                        for (int j = 1; j < 6; j++) {
                            cenario[1][j] = " ";
                        }
                        if (posCaracter != 0 && posCaracter != 6) {
                            cenario[1][posCaracter] = "!";
                        }


                        for (int i = 2; i <= 10; i++) { //valida se o personagem vai perder vida ou nao
                            for (int j = 0; j < 7; j++) {
                                cenario[i][j] = cenarioTemp[i - 1][j];
                            }
                        }
                        if(cenario[9][posPers]=="!"){ //ver se ta na mesma posição
                            vida--;
                        }


                        MostrarCenario();


                        for (int i = 0; i < 6; i++) { //exibe o personagem na tela
                            if (posPers == i) {
                                posicaoPersonagem[i] = "o";
                            }
                            cout << posicaoPersonagem[i];
                        }
                        cout << endl;


                        cout << "Vidas: " + to_string(vida)<<endl; //converte a string em numero converte o numro de vidas=0 com o numero de vidas do jogo
                        if (vida == 0){ //se ficou sem vidas acaba o jogo
                            cout << "Acabou o jogo";
                            return 0;
                        }
                }  
            return 0;
            break;
            case 3:
                CriarCenario();
                Mostrar();
                    while (true) {
                        tecla = _getch(); // Função para ler uma tecla sem exibir no console (Windows)
                        switch (tecla) { // Vai ver qual tecla foi pressionada pra mover o personagem
                            case 77: // >
                                posPers3++;
                            if (posPers3 == 13) {
                                posPers3--;
                            }else {
                            posicaoPersonagem3[posPers3] = "o";
                            posicaoPersonagem3[posPers3 - 1] = " ";
                            }
                            break;
                            case 75: // <
                                posPers3--;
                            if (posPers3 == 0) {
                                posPers3++;
                            }else {
                            posicaoPersonagem3[posPers3] = "o";
                            posicaoPersonagem3[posPers3 + 1] = " ";
                            }
                        break;
                        default:
                        break;
                    }
                   
                    for (int i = 0; i < 20; i++) {  //cria uma cópia do cenário
                        for (int j = 0; j < 14; j++) {
                            cenarioTemp[i][j] = cenario3[i][j];
                        }
                    }


                    posCaracter = rand() % 14; //define a posição da estrela
                    for (int j = 1; j < 13; j++) {
                        cenario3[1][j] = " ";
                    }
                    if (posCaracter != 0 && posCaracter != 13) {
                        cenario3[1][posCaracter] = "*";
                    }


                    for (int i = 2; i <= 20; i++) { //valida se o personagem vai ganhar pontos
                        for (int j = 0; j < 14; j++) {
                            cenario3[i][j] = cenarioTemp[i - 1][j];
                        }
                    }
                    if(cenario3[13][posPers3]=="*"){ //ver se ta na mesma posição
                        pontos++;
                    }


                    Mostrar();


                    for (int i = 0; i < 13; i++) { //exibe o personagem na tela
                        if (posPers3 == i) {
                            posicaoPersonagem3[i] = "o";
                        }
                        cout << posicaoPersonagem3[i];
                    }
                    cout << endl;


                    cout << "Pontos: " + to_string(pontos)<<endl;
                    if (pontos==5){ //se chegou a 5 para
                        cout << "Venceu o jogo";
                    return 0;
                    }
                }
        return 0;
        break;
        }
    }
}


void Teclas(){
    tecla = _getch(); // Função para ler uma tecla sem exibir no console (Windows)
        switch (tecla) { // Vai ver qual tecla foi pressionada pra mover o personagem
            case 77: // >
                posPers++;
            if (posPers == 6) {
                posPers--;
            }else {
                posicaoPersonagem[posPers] = "o";
                posicaoPersonagem[posPers - 1] = " ";
            }
            break;
            case 75: // <
                posPers--;
            if (posPers == 0) {
                posPers++;
            }else {
                posicaoPersonagem[posPers] = "o";
                posicaoPersonagem[posPers + 1] = " ";
            }
            break;
            default:
            break;
        }
}


void Mostrar() {
    system("cls");


    for (int i = 0; i < N*2; i++) {
        for (int j = 0; j < M*2; j++) {
            cout << cenario3[i][j];
        }
        cout << endl;
    }
}


void CriarCenario() {
    for (int i = 0; i < N*2; i++) {
        for (int j = 0; j < M*2; j++) {
            if (i == 0) {
                cenario3[i][j] = "-";
            }
            else if (j == 0) {
                cenario3[i][j] = "|";
            }
            else if (j == 13) {
                cenario3[i][j] = "|";
            }
            else {
                cenario3[i][j] = " ";
            }
        }
    }


    for (int i = 0; i < M*2; i++) {
        if (i == 0) {
            posicaoPersonagem3[i] = "|";
        }
        else if (i == 13) {
            posicaoPersonagem3[i] = "|";
        }
        else if (i == 6) {
            posicaoPersonagem3[i] = "o";
        }
        else {
            posicaoPersonagem3[i] = " ";
        }
    }
}


void MostrarCenario() {
    system("cls");


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << cenario[i][j];
        }
        cout << endl;
    }
}


void CriarCenarioZerado() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0) {
                cenario[i][j] = "-";
            }
            else if (j == 0) {
                cenario[i][j] = "|";
            }
            else if (j == 6) {
                cenario[i][j] = "|";
            }
            else {
                cenario[i][j] = " ";
            }
        }
    }


    for (int i = 0; i < N; i++) {
        if (i == 0) {
            posicaoPersonagem[i] = "|";
        }
        else if (i == 6) {
            posicaoPersonagem[i] = "|";
        }
        else if (i == 3) {
            posicaoPersonagem[i] = "o";
        }
        else {
            posicaoPersonagem[i] = " ";
        }
    }
}





