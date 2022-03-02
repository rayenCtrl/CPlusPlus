#include"Person.cpp"
#include"Etudiant.cpp"
#include"Enseignant.cpp"
#include"Matiere.cpp"
#include"GroupeModule.cpp"
#include"Groupe.cpp"
#include"Note.cpp"

int main()
{
    Etudiant e1(3,1,"bob","Brim","B@gmail.tn");
    Etudiant e2(2,2,"boby","Sova","M@hotmail.tn");
    Etudiant e3(354,1,"Mah","Kayo","cs@gmail.tn");
    Etudiant e4(211,2,"boby","Sage","Miro@gmail.tn");
    vector<Etudiant>TabE;
    Add(TabE,e1);
    Add(TabE,e2);
    Add(TabE,e3);
    Add(TabE,e4);

    Enseignant es1(73,1,"bob","Marley","B @gmail.tn");
    Enseignant es2(22,2,"boby","Marley","B @gmail.tn");
    vector<Enseignant>TabEs;
    Add(TabEs,es1);
    Add(TabEs,es2);

    Matiere M1("00","Math",3.4,es1);
    Matiere M2("01","Phy",7.2,es2);
    vector<Matiere>TabM;
    Add(TabM,M1);
    Add(TabM,M2);

    GroupeModule GM1("00","Mathematique",2.1,TabM);
    GroupeModule GM2("01","Langue",1.0,TabM);
    vector<GroupeModule>Tmod;
    Add(Tmod,GM1); 
    Add(Tmod,GM2); 

    Groupe Gr1(17,"id","niveau","diplome","spc",Tmod,TabE);
    Groupe Gr2(19,"str","str","str","str",Tmod,TabE);
    vector<Groupe>ListGr;
    Add(ListGr,Gr1);

    Note n1(M1,e3,19.24,"DS");
    vector<Note>ListeN;
    Add(ListeN,ListGr,n1);
    ListeN[0].Print();
    return 0;
}