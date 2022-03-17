Algoritmo di visita in profondità di un grafo.
Per poterlo utilizzare, la classe AddOnlyGraph<T> DEVE CONTENERE I SEGUENTI METODI:

-> void marcaNodo(Nodo &, bool stato);
-> bool leggiMarcatura(const Nodo &);

SE LA CLASSE AddOnlyGraph<T> NON CONTIENE QUESTI METODI, BISOGNA INGEGNARSI PER POTER TROVARE UNA SOLUZIONE...



void dfs(AddOnlyGraph<T> &G, AddOnlyGraph<T>::Nodo n)
{
	AddOnlyGraph<T>::Nodo u; 						//mi serve per leggere in modo ricorsivo gli adiacenti di n
	MyList<T> A = G.adiacenti(n);					//mi serve per ottenere la lista di adiacenti di n
	MyList<T>::position i = A.begin();				//mi serve per scandire la lista di adiacenti di n

	
	//----esamina nodo n----//

	G.marcaNodo(n, true); 						//imposto true in quanto ho "visitato" il nodo corrente
	while(!A.ultimo(i))							//finchè non raggiungo l'ultimo adiacente...
	{
		u = A.leggi(i);							//leggo il suo adiacente i-esimo...
		
		//----esamina arco(n, u)----//
		
		if(G.leggiMarcatura(u) == "false")		//se il suo adiacente i-esimo non è stato "visitato", allora faccio la visita su quel nodo...
		{
			dfs(G, u);
		}
	}
}