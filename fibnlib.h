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
