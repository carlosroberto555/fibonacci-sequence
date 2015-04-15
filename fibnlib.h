bool fibn(int n)
{
	int seqFi[3] = {1,1,0};
	bool pertc = false;

	while(seqFi[2] <= n) {

		seqFi[2] = seqFi[0]+seqFi[1];

		if (n == seqFi[1])
			pertc = true;

		seqFi[0] = seqFi[1];
		seqFi[1] = seqFi[2];

	}
	seqFi[0] = 1;
	seqFi[1] = 1;
	seqFi[2] = 0;

	return pertc;
}