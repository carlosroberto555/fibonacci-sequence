/*
	Função que verifica se um valor pertence à sequência de Fibonacci.
	Sequencia de Fibonacci f(N) = { 1,1,2,3,5,8,13,21,34,55,89,144,233,377,...)
	É formada pela soma de um número com seu anterior que pertence à sequencia,
	Começando do 1, ou seja, {1+1=2, 2+1=3, 3+2=5, ...}
	
	Exemplo de utilização:
		
		if(fibn(variavel))
		{
			printf("Pertence!");
		}
		else
		{
			printf("Não pertence!");
		}
*/

bool fibn(int n)
{
	int seqFi[3] = {1,1,0}; // Inicialização do vetor
	bool pertc = false;

	while(seqFi[2] <= n)
	{
		// Aqui ocorre a soma com o anterior
		seqFi[2] = seqFi[0]+seqFi[1];

		// Se o número informado for igual ao corrente, pertc recebe true
		if (n == seqFi[1])
			pertc = true;
		
		// Aqui ocorre a troca dos valores para testar o próximo
		seqFi[0] = seqFi[1];
		seqFi[1] = seqFi[2];
	}
	
	// Retorna true se pertencer, ou false se não pertencer à sequência
	return pertc;
}
