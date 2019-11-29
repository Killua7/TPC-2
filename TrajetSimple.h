/*************************************************************************
                           Xxx  -  description
                             -------------------
    d�but                : $11/22/2019$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Xxx> (fichier Xxx.h) ----------------
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H
#include "Trajet.h"
//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
    char * GetMoyen() const;
    void Afficher();
//----------------------------------------------------- M�thodes publiques
    // type M�thode ( liste des param�tres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'op�rateurs
    //Xxx & operator = ( const Xxx & unXxx );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    TrajetSimple ( const char * &unMoyen, const char * &unDepart, const char * &uneArrivee);
    // Mode d'emploi (construVoid Trajet::GetDepart() const{cteur de copie) :
    //
    // Contrat :
    //

    TrajetSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetSimple ( ); //pas besoin du virtual pour tous les dest askip
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s
const char * moyen;
};

//-------------------------------- Autres d�finitions d�pendantes de <Xxx>

#endif // XXX_H

