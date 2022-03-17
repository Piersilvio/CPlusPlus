
appello: 2020-01-27 - Appello 2
esito: attesa!

int trasforma_in_pari(const MyBinTree<int> %b)
{
	int aggiornamenti = 0;
	simm(b, b.radice, aggiornamenti);
	
	return aggiornamenti;
}

void simm(MyBinTree<int> &b, MyBinTree<int>::Nodo n, int agg)
{
	cout << "valore corrente : " << b.leggi(n) << endl;
	
	if(!sx_vuoto(n))
	{
		simm(b, b.sx(n), agg);
	}
	
	if(b.leggi(n)%2 != 0)
	{
		agg++;
		b.scrivi(b.leggi(n), b.leggi(n) + 1);
		cout << "valore corrente aggiornato: " << b.leggi(n) << endl;
	}

	if(!dx_vuoto(n))
	{
		simm(b, b.dx(n), agg);
	}
}

void creaBin(MyBinTree<int> &b)
{
	MyBinTree<int>::Nodo radice, n;

 	bin.inserisci_radice(radice);
 	bin.scrivi(radice, 1);
 	bin.inserisci_figlio_sx(radice);
 	bin.scrivi(bin.sx(radice), 3);
 	bin.inserisci_figlio_dx(radice);
 	bin.scrivi(bin.dx(radice),2);
	
	n = b.sx(r);
 	b.inserisci_figlio_sx(n);
 	b.scrivi(bin.sx(n),5);
 	b.inserisci_figlio_dx(n);
 	b.scrivi(bin.dx(n),6);
}

main()
{
	MyBinTree<int> b;
	int aggiornamenti = 0;

	creaBin(b);
	aggiornamenti = trasforma_in_pari(b);

	cout << "aggiornamenti effettuati: " << aggiornamenti << endl;
	
	return 0;
}