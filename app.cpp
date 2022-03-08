#include<iomanip>
#include"Person.cpp"
#include"Etudiant.cpp"
#include"Enseignant.cpp"
#include"Matiere.cpp"
#include"GroupeModule.cpp"
#include"Groupe.cpp"
#include"Note.cpp"
#include"PV.cpp"

int main()
{
    Etudiant e1(2100,1,"bob","Brim","B@gmail.tn");
    Etudiant e2(2101,2,"Steve","Sova","M@hotmail.tn");
    Etudiant e3(2110,3,"Mah","Kayo","cs@gmail.tn");
    Etudiant e4(2111,4,"boby","Sage","Miro@gmail.tn");
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

    Matiere M1("00","Math",2.0,es1);
    Matiere M2("01","Phy",3.0,es2);
    vector<Matiere>TabM;
    Add(TabM,M1);
    Add(TabM,M2);
    
    Matiere M3("02","fr",2.0,es1);
    Matiere M4("03","eng",3.0,es2);
    vector<Matiere>TabM2;
    Add(TabM2,M3);
    Add(TabM2,M4);

    GroupeModule GM1("00","Mathematique",TabM);
    GroupeModule GM2("01","Langue",TabM2);
    vector<GroupeModule>Tmod;
    Add(Tmod,GM1);
    Add(Tmod,GM2);

    Groupe Gr1(17,"id","niveau","diplome","spc",Tmod,TabE);
    Groupe Gr2(19,"str","str","str","str",Tmod,TabE);
    vector<Groupe>ListGr;
    Add(ListGr,Gr1);

    Note n1(M1,e1,15.00,"DS");      Note n9(M1,e2,14.00,"DS");
    Note n3(M1,e1,10.00,"EX");      Note n10(M1,e2,6.00,"EX");
  
    Note n2(M2,e1,12.00,"DS");      Note n11(M2,e2,18.00,"DS");
    Note n4(M2,e1,16.00,"EX");      Note n12(M2,e2,2.00,"EX");
  
    Note n5(M3,e1,16.00,"DS");      Note n13(M3,e2,1.00,"DS");
    Note n6(M3,e1,16.00,"EX");      Note n14(M3,e2,16.00,"EX");
  
    Note n7(M4,e1,11.00,"DS");      Note n15(M4,e2,11.00,"DS");
    Note n8(M4,e1,9.00,"Ex");       Note n16(M4,e2,19.00,"Ex");

    Note n17(M1,e3,5.00,"DS");      Note n25(M1,e4,4.00,"DS");
    Note n18(M1,e3,10.00,"EX");     Note n26(M1,e4,6.00,"EX");
  
    Note n19(M2,e3,12.00,"DS");     Note n27(M2,e4,18.00,"DS");
    Note n20(M2,e3,16.00,"EX");     Note n28(M2,e4,20.00,"EX");
  
    Note n21(M3,e3,10.00,"DS");     Note n29(M3,e4,14.00,"DS");
    Note n22(M3,e3,16.00,"EX");     Note n30(M3,e4,18.00,"EX");
  
    Note n23(M4,e3,7.00,"DS");      Note n31(M4,e4,16.00,"DS");
    Note n24(M4,e3,15.00,"Ex");     Note n32(M4,e4,9.00,"Ex");

    vector<Note>ListeN;
    Add(ListeN,ListGr,n1);          Add(ListeN,ListGr,n9);
    Add(ListeN,ListGr,n2);          Add(ListeN,ListGr,n10);
    Add(ListeN,ListGr,n3);          Add(ListeN,ListGr,n11);
    Add(ListeN,ListGr,n4);          Add(ListeN,ListGr,n12);
    Add(ListeN,ListGr,n5);          Add(ListeN,ListGr,n13);
    Add(ListeN,ListGr,n6);          Add(ListeN,ListGr,n14);
    Add(ListeN,ListGr,n7);          Add(ListeN,ListGr,n15);
    Add(ListeN,ListGr,n8);          Add(ListeN,ListGr,n16);
    
    Add(ListeN,ListGr,n17);          Add(ListeN,ListGr,n25);
    Add(ListeN,ListGr,n18);          Add(ListeN,ListGr,n26);
    Add(ListeN,ListGr,n19);          Add(ListeN,ListGr,n27);
    Add(ListeN,ListGr,n20);          Add(ListeN,ListGr,n28);
    Add(ListeN,ListGr,n21);          Add(ListeN,ListGr,n29);
    Add(ListeN,ListGr,n22);          Add(ListeN,ListGr,n30);
    Add(ListeN,ListGr,n23);          Add(ListeN,ListGr,n31);
    Add(ListeN,ListGr,n24);          Add(ListeN,ListGr,n32);
    
    Affiche(Gr1,ListeN);
    
    return 0;
}