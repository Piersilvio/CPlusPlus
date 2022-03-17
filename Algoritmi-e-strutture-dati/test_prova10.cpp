
appello: 2020-02-10 - Appello 3
esito: attesa!

int trasforma_e_somma(const MyBinTree<int> &b)
{
	int s = 0;
	pre(b, b.radice(), s);
	
	return s;
}

void pre(MyBinTree<int> &b, MyBinTree<int>::Nodo n, int s)
{
	cout << "valore corrente: " << b.leggi(n) << endl;
	if(b.leggi(n)%2 == 0)
	{
		b.scrivi(b.leggi(n), b.leggi(n) + 1);
		
	}
	s = s + b.leggi(n);
	
	if(!b.sx_vuoto(n))
	{
		pre(b, b.sx(n), s);
	}

	if(!b.dx_vuoto(n))
	{
		pre(b, b.dx(n), s);
	}
}

void creaB(MyBinTree<int> &b)
{
	MyBinTree<int>::Nodo n, u;
	MyBinTree<int>::Nodo radice;

	b.inserisci_radice(radice)
	b.scrivi(radice, );
	b.inserisci_figlio_sx(radice);
	b.scrivi(b.sx(radice), 3);
	b.inserisci_figlio_dx(radice);
	b.scrivi(b.dx(radice), 2);

	n = b.sx(radice);

	b.inserisci_figlio_sx(n);
	b.scrivi(b.sx(n), 1);
	b.inserisci_figlio_dx(n);
	b.scrivi(b.sx(n), 4);
	
	u = b.dx(n);
	b.inserisci_figlio_dx(u);
	b.scrivi(b.dx(u), 7);
}

main()
{
	MyBinTree<int> b;
	int s = 0;
	
	creaB(b);
	s = trasforma_e_somma(b);
	
	cout << "strana somma: " << s << endl;

	return 0;
}