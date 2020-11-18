bool fibn(int num)
{
    int seqFi[3] = { 1, 1, 0 }; // Inicialização do vetor

    while(seqFi[2] <= num)
    {
        // Aqui ocorre a soma com o anterior
        seqFi[2] = seqFi[0] + seqFi[1];

        // Se o número informado for igual ao corrente, retorna true
        if (num == seqFi[1]) {
            // (PERTENCE)
            return true;
        }

        // Aqui ocorre a troca dos valores para testar o próximo
        seqFi[0] = seqFi[1];
        seqFi[1] = seqFi[2];
    }

    // Se chegar aqui é porque não pertence
    return false;
}
