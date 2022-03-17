
appello: 2020-01-13 - Esonero 2 - Appello 1
esito:

MyList<int> processa_pari(const MyBinTree<int> &b)
{
	MyList<int> l;
	simmetrica(b, b.radice(), l);

	return l;
}

void simmetrica(const MyBinTree<int> &b, const MyBinTree<int>::Nodo &n, MyList<int> &l)
{
	int el = b.leggi(n);
	MyList<int>::position i = l.begin();

	if(!b.sx_vuoto(n))
	{
		simmetrica(b, b.sx(n), l);
	}
	
	if(el%2 == 0)
	{
		l.inserisci(el, i);
		i = successivo(i);
	}

	if(!b.dx_vuoto(n))
	{
		simmetrica(b, b.dx(n), l);
	}
}

void allocaBin(MyBinTree<int> &b)
{
	MyBinTree<int>::Nodo n, u;
	MyBinTree<int>::Nodo radice;

	b.inserisci_radice(radice)
	b.scrivi(radice, 1);
	b.inserisci_figlio_sx(radice);
	b.scrivi(b.sx(radice), 3);
	b.inserisci_figlio_dx(radice);
	b.scrivi(b.dx(radice), 4);

	n = b.sx(radice);

	b.inserisci_figlio_sx(n);
	b.scrivi(b.sx(n), 8);
	b.inserisci_figlio_dx(n);
	b.scrivi(b.sx(n), 2);
	
	u = b.dx(radice);
	b.inserisci_figlio_dx(u);
	b.scrivi(b.dx(u), 6);
}

main()
{
	MyBinTree<int> b;
	MyList<int> l;
	MyList<int>::position i;
	
	allocaBin(b);
	
	l = processa_pari(b);
	i = l.begin();
	while(!l.ultimo(i)
	{
		cout << " " << l.leggi(i) << endl;
		i = successivo(i);
	}
	
	return 0;
}