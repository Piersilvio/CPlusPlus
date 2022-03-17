
appello: sotto "esercizi e commenti"
esito: corretto!

void trasforma(MyList<int> &l, int x)
{
	MyList<int>::position i;
	i = l.begin();
	int ele = 0;

	while(!l.ultimo(i))
	{
		ele = list.leggi(i);
		if(ele %2 == 0)
		{
			list.scrivi(ele + x, i);
		}
	}
}

main()
{
	MyList<int> l;
	MyList<int>::position i;
	
	l.inserisci(1, i = l.successivo(i));
	l.inserisci(7, i = l.successivo(i));
	l.inserisci(2, i = l.successivo(i));
	l.inserisci(4, i = l.successivo(i));
	l.inserisci(5, i = l.successivo(i));
	l.inserisci(1, i = l.successivo(i));

	trasforma(l, 3);
	i = l.begin();

	while(!l.ultimo(i))
	{
		cout << " " << l.leggi(i) << endl;
		i = l.successivo(i);
	}	

	return 0;
}