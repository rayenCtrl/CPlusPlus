#include "Note.h"

Note::Note(Matiere mat,Etudiant etu,float nte,string tpe)
:Mat(mat),Etu(etu),note(nte),type(tpe)
{
}

Note::Note()
:Mat(),Etu(),note(0.0),type("")
{
}


void Note::Print()
{
    Mat.Print();
    Etu.Print();
    cout<<note<<""<<type<<endl;
}