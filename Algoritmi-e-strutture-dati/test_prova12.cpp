
appello: 2020-07-20 - Appello 4
esito: corretto!

int trasforma(MyBinTree<t> &b)
{
	int s = 0;
	simm(b, b.radice(), s);
	
	return s;
}

void simm(MyBinTree<t> &b, MyBinTree<t>::Nodo &n, int s)
{
	if(!b.sx_vuoto(n))
		simm(b, b.sx(n), s);
	
	std :: cout << "corrente: " << b.leggi(n) << std :: endl;
	if(!b.sx_vuoto(n) || !b.dx_vuoto(n))
		b.scrivi(n, b.leggi(n) + 1);
		s = s + b.leggi(n);

	if(!b.dx_vuoto(n))
		simm(b, b.dx(n), s);
}

int main()
{
  MyBinTree<int> bin;
  MyBinTree<int>::Nodo radice, nodo;
  
  bin.inserisci_radice(radice);
  bin.scrivi(3, radice);
  bin.inserisci_figlio_sx(radice);
  bin.scrivi(5, bin.sx(radice));
  bin.inserisci_figlio_dx(radice);
  bin.scrivi(5, bin.dx(radice));
  
  nodo = bin.sx(radice);
  bin.inserisci_figlio_sx(nodo);
  bin.scrivi(2, bin.sx(nodo));
  bin.inserisci_figlio_dx(nodo);
  bin.scrivi(1, bin.dx(nodo));
  
  nodo = bin.dx(nodo);
  bin.inserisci_figlio_dx(nodo);
  bin.scrivi(4, bin.dx(nodo));
  
  int valore = bin.trasforma(bin, bin.radice());
  cout << "Valore: " << valore << endl;
  
  return 0;
}