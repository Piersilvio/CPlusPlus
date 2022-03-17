
appello: Appello 4 - 2021-07-01
esito: corretto ma poco efficiente!

MyList<T> differenza_alberi(const ReadOnlyTree<T> &b1, const ReadOnlyTree<T> &b2)
{
	MyList<T> l1, l2, lista;
	previsita_su_b1(b1, b1.radice(), l1);
	previsita_su_b2(b2, b2.radice(), l2);
	lista = diff(l1, l2);
	return lista;
}

void previsita_su_b1(const ReadOnlyTree<T> b1, ReadOnlyTree<T>::Nodo r, MyList<T> l1)
{
	ReadOnlyTree<T>::Nodo n;
	MyList<T>::position i;
	
	T elem = b1.leggi(r);
	i = l1.begin();
	l1.inserisci(elem, i);
	
	
	if(!b1.foglia(r))
	{
		n = b1.primofiglio(r);
		while(!b1.ultimofratello(n))
		{
			previsita_su_b1(b1, n);
			n = b1.succfratello(n);
		}
		previsita_su_b1(b1, n);
	}
}

void previsita_su_b2(const ReadOnlyTree<T> b2, ReadOnlyTree<T>::Nodo r, MyList<T> l2)
{
	ReadOnlyTree<T>::Nodo n;
	MyList<T>::position i;
	
	T elem = b2.leggi(r);
	i = l2.begin();
	l2.inserisci(elem, i);
	
	
	if(!b2.foglia(r))
	{
		n = b2.primofiglio(r);
		while(!b2.ultimofratello(n))
		{
			previsita_su_b2(b2, n);
			n = b2.succfratello(n);
		}
		previsita_su_b2(b2, n);
	}
}

MyList<T> diff(MyList<T> l1, MyList<T> l2)
{
	MyList<T> l;
	MyList<T>::position p;
	
	p = l.begin();
	while(!l1.ultimo(p) and !l2.ultimo(p))
	{
		if(l1.leggi(p) != l2.leggi(p))
		{
			l.inserisci(l1.leggi(p), l.begin());
		}
		p = successivo(p);
	}
}

main()
{
	ReadOnlyTree<T> b1, b2;
	MyList<T> l;
	MyList<T>::position i;
	
	b1 = get_albero_1();
	b2 = get_albero_2();
	l = differenza_alberi(b1, b2);

	i = l.begin();
	while(!l.ultimo(i))
	{
		cout << " " << l.leggi(i) << endl;
		i = successivo(i);
	}
		
	return 0;
}




