
appello: Esonero 1 - Turno 1
esito: corretto!

void processa_liste(MyList<int> &l1, MyList<int> &l2, MyList<int> &l3)
{
	MyList<int>::position i;
	i = l1.begin();
	
	while(!l1.ultimo(i))
	{
		if(l1.leggi(i) > 100)
		{
			l2.inserisci(l1.leggi(i), l2.begin());
		}
		else if(l1.leggi(i) < 50)
		{
			l3.inserisci(l1.leggi(i), l3.begin());
		}
	}
}

void creaL1(MyList<int> &l)
{
	MyList<int>::position i;
	
	l.inserisci(30, i = l.successivo(i));
	l.inserisci(40, i = l.successivo(i));
	l.inserisci(50, i = l.successivo(i));
	l.inserisci(60, i = l.successivo(i));
	l.inserisci(80, i = l.successivo(i));
	l.inserisci(120, i = l.successivo(i));
}


main()
{
	MyList<int> l1, l2, l3;
	
	creaL1(l1);
	
	if(l2.vuoto() && l3.vuoto())
	{
		processa_liste(l1, l2, l3);
		cout << " fine! " << endl;
	}

	return 0;
}

//////////////////////////////////////////////////////////////////

void processa_liste(MyList<int> &l1, MyList<int> &l2, MyList<int> &l3)
{
	MyList<int>::position i;
	i = l1.begin();
	
	while(!l1.ultimo(i))
	{
		if(l1.leggi(i) > 10 && l1.leggi(i)%2 == 0)
		{
			l2.inserisci(l1.leggi(i), l2.begin());
			l1.rimuovi(i);
		}
		else if(l1.leggi(i) < 10 && l1.leggi(i)%2 != 0)
		{
			l3.inserisci(l1.leggi(i), l3.begin());
			l1.rimuovi(i);
		}
		else
		{
			if(l1.vuoto() == true)
			{
				cout << " l1 è vuota " << endl;
			}
		}
	}
}

void creaL1(MyList<int> &l)
{
	MyList<int>::position i;
	
	l.inserisci(5, i = l.successivo(i));
	l.inserisci(15, i = l.successivo(i));
	l.inserisci(2, i = l.successivo(i));
	l.inserisci(14, i = l.successivo(i));
	l.inserisci(13, i = l.successivo(i));
	l.inserisci(7, i = l.successivo(i));
}


main()
{
	MyList<int> l1, l2, l3;
	
	creaL1(l1);
	
	if(l2.vuoto() && l3.vuoto())
	{
		processa_liste(l1, l2, l3);
		cout << " fine! " << endl;
	}

	return 0;
}
