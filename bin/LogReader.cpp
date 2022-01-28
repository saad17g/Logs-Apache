//---------- Réalisation de la classe <LogReader> (fichier LogReader.cpp) ------------
//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "LogReader.h"

//------------------------------------------------- Surcharge d'opérateurs
LogReader & LogReader::operator = ( const LogReader & unLogReader )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
// LogReader::LogReader ( const LogReader & unLogReader )
// // Algorithme :
// //
// {
// #ifdef MAP
//     cout << "Appel au constructeur de copie de <LogReader>" << endl;
// #endif
// } //----- Fin de LogReader (constructeur de copie)


LogReader::LogReader ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <LogReader>" << endl;
#endif
} //----- Fin de LogReader


LogReader::~LogReader ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <LogReader>" << endl;
#endif
} //----- Fin de ~LogReader


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

