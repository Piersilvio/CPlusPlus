
appello: Appello 3 - 2021-02-22
esito: 

MyList<int> contiene_successivo(const ReadOnlyTree<int> &a1, const ReadOnlyTree<int> &a2)
{
    MyList<int> lista;
    invisita(a1, a2, a1.radice(), lista);

    return lista;
}

void invisita(const ReadOnlyTree<int> &a1, const ReadOnlyTree<int> &a2, const ReadOnlyTree<int>::Nodo r, MyList<int> &l)
{
    ReadOnlyTree<int>::Nodo u;

    if(a1.foglia(r))
        u = a1.leggiNodo(r);
        previsita(a2, a1, a2.radice(), lista, u);
    else
        u = a1.primofiglio(r);
        while(!a1.ultimofratello(u))
            invisita(a1, a2, u, l);
            u = a1.succfratello(u);
        previsita(a2, a1, a2.radice(), lista, u);
}

void previsita(const ReadOnlyTree<int> &a2, const ReadOnlyTree<int> &a2, const ReadOnlyTree<int>::Nodo r, MyList<int> &l, const ReadOnLyTree<int>::Nodo u)
{
    ReadOnlyTree<int>::Nodo n;

    if(a2.leggiNodo(r) == a1.leggiNodo(u) + 1)
        l.scrivi(a1.leggiNodo(u), l.begin());

    if(!a2.foglia(r))
        n = a2.primofiglio(r);
        while(!a2.ultimofratello(n))
            previsita(a2, n, l, u);
            n = a2.succfratello(n);
        previsita(a2, n, l, u);
}

main(...){ ... }