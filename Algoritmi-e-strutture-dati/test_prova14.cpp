
appello: 2020-11-16 - Appello 7
esito:

MyList<int> trova_comuni(const MyBinTree<int> &b1, const MyBinTree<int> &b2)
{
    MyList<int> l1;
    MyList<int> l2;
    MyList<int> lista;

    pre_b1(b1, b1.radice(), l1);
    pre_b2(b2, b2.radice(), l2);

    lista = comuni(l1, l2);

    return lista;
}

void pre_b1(const MyBinTree<int> &b1, const MyBinTree<int>::Nodo r, MyList<int> &l1)
{
    l1.scrivi(b1.leggiNodo(r), l1.begin());

    if(!b1.sx_vuoto(r))
        pre_b1(b1, b1.sx(r), l1);
    
    if(!b1.dx_vuoto(r))
        pre_b1(b1, b1.dx(r), l1);
}

void pre_b2(const MyBinTree<int> &b2, const MyBinTree<int>::Nodo r, MyList<int> &l2)
{
    l2.scrivi(b2.leggiNodo(r), l2.begin());

    if(!b2.sx_vuoto(r))
        pre_b2(b2, b2.sx(r), l1);
    
    if(!b2.dx_vuoto(r))
        pre_b2(b2, b2.dx(r), l1);
}

MyList<int> comuni(MyList<int> &l1, MyList<int> &l2)
{
    MyList<int> finale;
    Mylist<int>::position i = l1.begin();
    Mylist<int>::position j = l2.begin();

    while(!l1.ultimo(i))
        while(!l2.ultimo(j))
            if(l1.leggi(i) == l2.leggi(j))
                finale.scrivi(l1.leggi(i), finale.begin());
            j = l2.successivo(j);
        i = l1.successivo(i);

    return finale;
}

main(...){ ... }