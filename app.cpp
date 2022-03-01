#include"Person.cpp"
#include"Etudiant.cpp"
#include"Enseignant.cpp"
#include"Matiere.cpp"
#include"GroupeModule.cpp"
#include"Groupe.cpp"


int main()
{

    Etudiant e1(3,1,"bob","John","B@gmail.tn");
    Etudiant e2(2,2,"boby","Johny","M@gmail.tn");
    vector<Etudiant>TabE;
    Add(TabE,e1);
    Add(TabE,e2);

    Enseignant es1(73,1,"bob","Marley","B.M@gmail.tn");
    Enseignant es2(22,2,"boby","Marley","B.M@gmail.tn");
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

    Del(Tmod,GM2);
    Tmod[1].Print();
    Groupe Gr1(17,"string","string","string","string",Tmod,TabE);
    Groupe Gr2(19,"str","str","str","str",Tmod,TabE);
    vector<Groupe>ListGr;
    Add(ListGr,Gr1);
    Add(ListGr,Gr2);
    Del(ListGr,Gr2);
    ListGr[0].Print();

    return 0;
}