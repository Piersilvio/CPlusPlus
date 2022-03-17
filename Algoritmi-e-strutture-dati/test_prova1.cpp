
appello: 2020-09-28 - Appello 6
esito: correto!

MyList<T> travasa(const MyBinTree<int> &b){
	MyList lista;
	simm(b, b.radice(), lista);
	return lista
}

void simm(const MyBinTree<int> &b, MyBinTree<int>::Nodo n, MyList<int> &l){

	if(!b.sinistroVuoto(n))
	{
		simm(B, b.figlio_sx(n), l);
	}

	int elemento = b.leggi(n);
	if(elemento %2 == 0)
	{
		l.inserisci(ele, l.begin());
	}	
	
	if(!b.destroVuoto(n))
	{
		simm(B, b.figlio_dx(n), l);
	}
}

void allocaB(MyBinTree<int> b, MyBinTree<int>:: nodo r, MyBinTree<int>:: nodo n)
{
	bin.inserisci_radice(r);
 	bin.scrivi(r, 6);
 	bin.inserisci_figlio_sx(r);
 	bin.scrivi(bin.sx(r), 3);
 	bin.inserisci_figlio_dx(r);
 	bin.scrivi(bin.dx(r),2);
 
 	n = b.sx(r);
 	b.inserisci_figlio_sx(n);
 	b.scrivi(bin.sx(n),1);
 	b.inserisci_figlio_dx(n);
 	b.scrivi(bin.dx(n),4);
}

int s(MyList<int> l, MyList<int>::position p)
{
	p = l.begin();
	while(!l.ultimo(p))
	{
		somma = somma + l.leggi(p);
		p = l.successivo(p);
	}
	return somma;
}

main()
{
	MyBinTree<int> b; //albero bin.
	MyBinTree<int>:: nodo r, n;

	allocaB(b, r, n);	

	MyList<int> l;
	MyList<int>::position p;
	int somma = 0;

	l = travasa(b);
	somma = s(l, p);
	cout << "somma: " << somma << endl;
	
	return 0;
}