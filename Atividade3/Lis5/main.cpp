/*Escreva um programa que simule contas bancárias, com as seguintes especificações:
• Ao iniciar o programa vamos criar contas bancárias para três clientes.
• Cada conta terá o nome e o CPF do cliente associado a ela.
• No ato da criação da conta o cliente precisará fazer um depósito inicial.
• Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas.
• Sempre que uma operação de saque ou depósito seja realizada, o sistema deverá imprimir o nome do titular e o
saldo final da conta.*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    evento obj;
    
    obj.lerDados();
    obj.modificar();
    return 0;
}

