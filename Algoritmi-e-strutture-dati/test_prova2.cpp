
appello: Esonero 2 - 2021-01-14
esito: corretto!

MyList<int> tanifigli(const ReadOnlyTree<int> &t)
{
	MyList<T> l;
	previsita(t, t.radice(), l);
	return l;
} 

previsita(const ReadOnlyTree<int> &t, ReadOnlyTree::Nodo r, MyList<int> &l)
{
	ReadOnlyTree<int>::Nodo n;
	int j = 3; //il numero di figli che devo contare

	if(!t.foglia(r))
	{
		n = t.primofiglio(r);
		while(!albero.ultimofratello(n) && c >= j)
		{
			l.inserisci(t.leggi(n), l.begin());
			previsita(t, n);
			n = t.succfratello(n);
			c++;
		}
		previsita(t, n);
	}
}

main()
{
	ReadOnlyTree<int> t;
	MyList<int> l;
	MyList<int>::position p;
	
	t = leggi_albero();
	l = tantifigli(t);
	p = l.begin();

	while(!l.ultimo(p))
	{
		cout << l.leggi(p) << " " << endl;
		p = l.successivo(p);
	}

	return 0;
}