
appello: 2022-02-14-Appello II

MyList<AddOnlyGraph<char>::Nodo> raggiungibili(AddOnlyGraph<char> &g, AddOnlyGraph<char>::Nodo &n, int k)
{
    MyList<char> lista;

    dfs(g, n, lista, k);

    return lista;
}

void dfs(AddOnlyGraph<char> &g, AddOnlyGraph<char>::Nodo &n, MyList<char> &lista,int k)
{
    MyList<char> ad = g.adiacenti(n);            
    MyList<char>::position i = ad.begin();
    AddOnlyGraph<char>::Nodo u;             //creazione nuovo nodo

    G.marcaNodo(n, "true");                 //marcazione del nodo visitato impostando "true" per indicare che è stato visitato
    while(!ad.ultimo(i))
    {
        u = ad.leggi(i);                     //leggo l'adiacente nella sua pos. i-esima

        if(g.leggiArco(n,u) <= k)
        {
            lista.scrivi(u, lista.begin());
        }

        if(g.leggiMarcatura(u) == "false")
        {
            dfs(g, u, lista, k);
        }
    }
}

main(...) { ... }