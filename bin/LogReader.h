//---------- Interface de la classe <LogReader> (fichier LogReader.h) ----------------
#if ! defined ( LOGREADER_H )
#define LogReader_H

#include<string>
#include<fstream>
#include<iostream>
using namespace std;

typedef struct {
    unsigned int day;
    unsigned int month;
    unsigned int year;
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned int delay;
} Date ;

typedef struct {
    string IP;
    string userLogName;
    string userName;
    Date dateVisite;
    string action;
    string URL;
    string typeDocument;
    int status;
    int sizeData;
    string referer;
    string client;
} log ;

class LogReader : public ifstream
{
//----------------------------------------------------------------- PUBLIC

public:

//-------------------------------------------- Constructeurs - destructeur
    bool openLogFile(string fileName) ;

    log readLog();

    LogReader ( );
    // std::getline(*this,struct.string,delim);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~LogReader ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
};

//-------------------------------- Autres définitions dépendantes de <LogReader>

#endif // LogReader_H

