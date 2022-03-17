
appello: Appello 2 - 2021-01-28
esito: in attesa di revisione!

MyList<T> adiacenti_rilevanti(const AddOnlyGraph<T> &G, const AddOnlyGraph<T>::Nodo &n, int k)
{
	MyList<T> l1;
	MyList<T>::position p1;
	MyLIst<T> l2;
	MyList<T>::position p2;
	AddOnlyGraph<T>::Nodo x, y;
	MyLIst<T> listaFinale;
	
	l1 = adiacenti(n, G);
	p1 = l1.begin();
	while(!l1.ultimo(p1))
	{	
		somma = 0;

		x = l1.leggi(p1);
		l2 = adiacenti(x, G);

		p2 = l2.begin();
		while(!l2.ultimo(p2))
		{
			y = l2.leggi(p2);
			somma = somma + G.leggiArco(x, y, G);
			p2 = successivo(p2);
			
			if(somma > k)
			{
				listaFinale.inserisci(x, listaFinale.begin());
			}
		}
		p1 = successivo(p1);
	}
	
	return listaFinale;
} 

void creaGrafo(AddOnlyGraph<T> &G)
{
	
	G.insNodo("A");
	G.insNodo("B");
	G.insNodo("C");
	G.insNodo("D");
	G.insNodo("E");
	G.insNodo("F");
	G.insNodo("G");i
	
	G.insArco("A", "C");
	G.insArco("A", "B");
	G.insArco("C", "B");
	G.insArco("C", "E");
	G.insArco("C", "D");
	G.insArco("D", "B");
	G.insArco("D", "F");
	G.insArco("B", "G");

	G.scriviArco("A", "C", 2);
	G.scriviArco("A", "B", 1);
	G.scriviArco("C", "E", 2);
	G.scriviArco("C", "D", 1);
	G.scriviArco("C", "B", 4);
	G.scriviArco("D", "F", 1);
	G.scriviArco("D", "B", 2);
	G.scriviArco("B", "G", 3);
}

main()
{
	AddOnlyGraph<int> G;
	AddOnlyGraph<int>::Nodo n;
	MyList<int> l;
	MyList<int>::position i;
	i = l.begin();

	creaGrafo(G);

	l = adiacenti_rilevanti(G, n, 3);
	while(!l.ultimo(i))
	{
		cout << " " << l.leggi(i) << endl;
		i = successivo(i);

	}

	return 0;
}
