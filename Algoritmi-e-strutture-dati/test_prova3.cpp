
appello: Appello 1 - 2021-01-14
esito: corretto!

MyList<int> pochifiglipari(const ReadOnlyTree<int> &t)
{
	MyList<int> l;
	postvisita(t, t.radice(), l);
	return l;
}

void postvisita(const ReadOnlyTree<int> &t, ReadOnlyTree<int>::Nodo &r, MyList<int> &lista)
{
	ReadOnlyTree<int>::Nodo n;
	int ele = t.leggiNodo(n);
	int numFigli = 0; 
	
	if(!t.foglia(r))
	{
		n = t.primofiglio(r);
		while(!t.ultimofratello(n))
		{
			if(ele %2 == 0)
			{
				numFigli++;
			}
			postvisita(t, n);
			n = t.succfratello(n);
		}
		if(numFigli < 3)
		{
			lista.inserisci(ele, lista.begin());
		}
		postvisita(t, n);
	}
}

main()
{
	ReadOnlyTree<int> t;
	MyList<int> listaFiglipari;
	MyList<int>::position p;
	
	t = leggi_albero();
	listaFigliPri = pochifiglipari(t);
	p = listaFigliPari.begin();

	while(!listaFigliPari.ultimo(p))
	{
		cout << " " << listaFigliPri.leggi(p) << endl;
		p = listaFigliPri.successivo(p);
	}

	return 0;
}