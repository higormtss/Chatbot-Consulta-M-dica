#include <stdio.h>
#include <string.h>

void mostrarMenu() {
    printf("\nBem-vindo ao chat da Clínica Médica!\n");
    printf("Por favor, escolha uma opção:\n");
    printf("1. Agendar uma consulta\n");
    printf("2. Informações sobre os médicos\n");
    printf("3. Horários de funcionamento\n");
    printf("4. Sair\n");
    printf("Digite o número da sua opção: ");
}

void agendarConsulta() {
    char nome[50];
    char data[20];
    printf("Vamos agendar sua consulta.\n");
    printf("Por favor, informe seu nome: ");
    scanf("%s", nome);
    printf("Informe a data desejada (dd/mm/aaaa): ");
    scanf("%s", data);
    printf("Obrigado, %s! Sua consulta foi agendada para %s.\n", nome, data);
}

void informacoesMedicos() {
    printf("Nossos médicos são altamente qualificados.\n");
    printf("Dr. João Silva - Cardiologista\n");
    printf("Dra. Maria Oliveira - Pediatra\n");
    printf("Dr. Pedro Santos - Clínico Geral\n");
}

void horariosFuncionamento() {
    printf("Nosso horário de funcionamento é de segunda a sexta, das 8h às 18h.\n");
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                agendarConsulta();
                break;
            case 2:
                informacoesMedicos();
                break;
            case 3:
                horariosFuncionamento();
                break;
            case 4:
                printf("Obrigado por usar nosso serviço. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
    } while(opcao != 4);
    return 0;
}