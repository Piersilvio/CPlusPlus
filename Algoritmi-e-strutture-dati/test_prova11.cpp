
appello: Esonero 1 - Turno 1
esito: attesa!

void accoda(const MyList<int> &l1, const MyList<int> &l2)
{
	MyList<int>::Position i1 = l1.begin();
	MyList<int>::Position i2 = l2.begin();
	bool flag = false;

	while(!l1.ultimo(i1))
	{
		while(!l2.ultimo(i2))
		{
			if(l1.leggi(i1) != l2.leggi(i2))
			{
				flag = true;
			}
			i2 = successivo(i2);
		}
		if(flag)
		{
			l2.inserisci(l1.leggi(i1), i2);
		}
		i1 = successivo(i1);
	}
}

void creaLi(MyList<int> &l1, MyList<int> &l2)
{
	MyList<int>::Position i1, i2;
	
	l.inserisci(3, i1 = l.successivo(i1));
	l.inserisci(5, i1 = l.successivo(i1));
	l.inserisci(6, i1 = l.successivo(i1));
	l.inserisci(1, i1 = l.successivo(i1));
	l.inserisci(5, i1 = l.successivo(i1));
	l.inserisci(7, i1 = l.successivo(i1));

	l.inserisci(4, i2 = l.successivo(i2));
	l.inserisci(1, i2 = l.successivo(i2));
	l.inserisci(7, i2 = l.successivo(i2));
}

main()
{
	MyList<int> l1, l2;
	MyList<int>::Position i;
	
	creaLi(l1, l2);
	accoda(l1, l2);

	i = l2.begin();
	while(!l2.begin(i))
	{
		cout << " " << l2.leggi(i) << endl;
		i = successivo(i);
	}

	return 0;
}