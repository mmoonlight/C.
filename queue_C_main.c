void adicionar(int count, struct cand *) {
	printf("\nInforme o nome :\n");
    gets(candidato->nome);
    printf("Linguagem :");
    gets(candidato->lang);
    printf("Salario :");
	scanf("%f",&candidato->salario);
	int++;
}


int main() {
	Dados candidato;
	int count = 0, opcao = 0;
	Contratos lista, listaIni, listaFim, listaInitemp, listaFimtemp;
	void selecao(int opcao);
		while (opcao != 4){
		printf("informe a sua opcao");
		printf("1 - adicionar funcionario.\n");
		printf("2 - selecionar funcionario. \n");
		printf("3 - mostrar funcionarios.\n");
		printf("4 - fechar aplicacao.\n");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				adicionar(int count, &cand);
				enqueue(&listaIni, &listaFim, struct Dados *candidato);
				break;
			case 2:
				displayLista(Contratos &inicio, Contratos &fim, candidato);
				dequeue(&listaIni, &listaFim, struct Dados *candidato);
				break;
			case 3:
				displayLista(Contratos &inicio, Contratos &fim, Contratos &lista);
				break;	
		}
	}
	
}
