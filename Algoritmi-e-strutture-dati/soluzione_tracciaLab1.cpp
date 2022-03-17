
// ----- soluzione con "travaso" ----- //

MyList<int> ammette_inverso(const ReadOnlyTree<int> &albero1, const ReadOnlyTree<int> &albero2)
{
    MyList<int> lista_finale;
    MyList<int> lista_A1;
    MyList<int> lista_A2;

    lista_A1 = previsita_su_a1(albero1, albero1.radice(), lista_A1);
    lista_A2 = previsita_su_a2(albero2, albero2.radice(), lista_A2);
    
    //mi serve per inserire in lista il valore della lista_a1, contenente i nodi di albero1, che ammettono inversa...
    lista_finale = trovare_inverso(lista_A1, lista_A2);

    return lista_finale;
}

MyList<int> previsita_su_a1(const ReadOnlyTree<int> &albero1, const ReadOnlyTree<int>::Nodo &radice, MyList<int> lista_A1)
{
    ReadOnlyTree<int>::Nodo n;

    //inserisco in lista_A1 il nodo corrente letto
    lista_A1.scrivi(albero1.leggiNodo(radice),  lista_A1.begin());

    //previsita su albero1
    if(!albero1.foglia(radice))
    {
        n = albero1.primofiglio(radice);
        while(!albero1.ultimofratello(n))
        {
            previsita_su_a1(albero1, n, lista_A1);
            n = albero1.succfratello(n);
        }
        previsita_su_a1(albero1, n, lista_A1);
    }
}

MyList<int> previsita_su_a2(const ReadOnlyTree<int> &albero2, const ReadOnlyTree<int>::Nodo &radice, MyList<int> lista_A2)
{
    ReadOnlyTree<int>::Nodo n;

    //inserisco in lista_A2 il nodo corrente letto
    lista_A2.scrivi(albero2.leggiNodo(radice),  lista_A1.begin());

    //previsita su albero1
    if(!albero2.foglia(radice))
    {
        n = albero1.primofiglio(radice);
        while(!albero2.ultimofratello(n))
        {
            previsita_su_a2(albero2, n, lista_A2);
            n = albero1.succfratello(n);
        }
        previsita_su_a2(albero2, n, lista_A2);
    }
}

MyList<int> trovare_inverso(MyList<int> lista_A1, MyList<int> lista_A2)
{
    //creo l'inidice di tipo posizione che parte dalla cima di lista_A1, analogo per lista_A2
    MyList<int>::position i = lista_A1.begin();
    MyList<int>::position j = lista_A2.begin();
    float reciproco = 0;
    int moltiplicazione = 0;
    
    //creo la lista finale che conterrà i nodi che ammettono l'inversa
    MyList<int> lista_finale;

    while(!lista_A1.ultimo(i))
    {
        while(!lista_A2.ultimo(j))
        {
            reciproco = 1 / lista_A2.leggi(j);
            moltiplicazione = lista_A1.leggi(i) * reciproco;
     
            //se è vero che l'i-esimo di lista_A1 ammette inverso, allora inserisco...
            if(moltiplicazione == 1)
            {
                lista_finale.scrivi(lista_A1.leggi(i), lista_finale.begin());
                break;
            }
            
            //passo al succesivo di lisat_A2...
            j = lista_A2.successivo(j);
        }
        //passo al succesivo di lisat_A2...
        i = lista_A1.successivo(i);
    }
}

main(...)
{
    ReadOnlyTree<int> albero1, albero2;
    MyList<int> lista_inversi;
    MyList<int>::position i = lista_inversi.begin();

    albero1 = get_albero_1();
    albero2 = get_albero_2();

    lista_inversi = ammette_inverso(albero1, albero2);

    while(!lista_imversi.ultimo(i))
    {
        //per spaziare i numeri uso " "..
        cout << " " << lista_inversi.leggi(i) << endl;
        i = lista_inversi.successivo(i);
    }

    return 0;
}

// ----- soluzione senza "travaso" ----- //

MyList<int> ammette_inverso(const ReadOnlyTree<int> &albero1, const ReadOnlyTree<int> &albero2)
{
    MyList<int> lista;
    invisita(albero1, albero2,albero1.radice(), lista);

    return lista;
}

void invisita(const ReadOnlyTree<int> &albero1, const ReadOnlyTree<int> &albero2, const ReadOnlyTree<int>::Nodo n, MyList<int> &lista)
{
    ReadOnlyTree<int>::Nodo u;
    
    if(albero1.foglia(n))
    {
        u = albero1.leggiNodo(n);
        previsita(albero2, albero2.radice(), lista, u);
    }else
    {
        u = albero1.primofiglio(n);
        while(!albero1.ultimofratello(u))
        {
            invisita(albero1, albero2, u, lista);
            u = albero1.succfratello(u);
        }
        previsita(albero2, albero2.radice(), lista, u);
    }
}

void previsita(const ReadOnlyTree<int> &albero2, const ReadOnlyTree<int>::Nodo n, MyList<int> &lista, const ReadOnlyTree<int>::Nodo u)
{
    ReadOnlyTree<int>::Nodo v;
    int moltiplicazione = 0;
    float reciproco = 0;

    //eamina nodo....
    reciproco = 1 / albero2.leggiNodo(n);
    moltiplicazione = u * reciproco;

    if(moltiplicazione == 1)
    {
        lista.scrivi(u, lista.begin());
    }
    
    //previsita su albero2
    if(!albero2.foglia(n))
    {
        v = albero1.primofiglio(radice);
        while(!albero2.ultimofratello(v))
        {
            previsita(albero2, v, lista, u);
            v = albero1.succfratello(v);
        }
        previsita(albero2, v, lista, u);
    }
}

main(...)
{
    ReadOnlyTree<int> albero1, albero2;
    MyList<int> lista_inversi;
    MyList<int>::position i = lista_inversi.begin();

    albero1 = get_albero_1();
    albero2 = get_albero_2();

    lista_inversi = ammette_inverso(albero1, albero2);

    while(!lista_imversi.ultimo(i))
    {
        //per spaziare i numeri uso " "..
        cout << " " << lista_inversi.leggi(i) << endl;
        i = lista_inversi.successivo(i);
    }

    return 0;
}