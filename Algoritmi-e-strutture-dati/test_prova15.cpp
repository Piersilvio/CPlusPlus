
Esempi Esercizi - Possibili soluzioni3
esito: 

MyBinTree<int> sposta(MyBinTree<int> &b)
{
    MyBinTree<int> a;

    a = simm(b, b.radice());

    return a;
}

MyBinTree<int> simm(MyBinTree<int> &b, MyBinTree<int>::Nodo r)
{
    if(!b.sx_vuoto(r))
        simm(b, b.sx(r));
    
    if(!b.sx_vuoto(r) && b.dx_vuoto(r))
        b.scrivi(r, b.leggi(b.sx(r)));
        b.scrivi(b.sx(r), b.leggi(r));

    if(!b.dx_vuoto(r));
        simm(b, b.dx(r));
}

main(...) { ... }