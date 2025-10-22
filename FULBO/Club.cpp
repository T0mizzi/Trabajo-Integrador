#include "Club.h"
#include <cstring>

// Constructor
Club::Club(int _idClub, const char* _nombre, const char* _presidente, Fecha _fechaInscripcion,
           int _torneosGanados, const char* _telefono, const char* _email,
           int _socios, int _partidosJugados, int _golesTotales, bool _eliminado)
{
    idClub = _idClub;
    strcpy(nombre, _nombre);
    strcpy(presidente, _presidente);
    fechaInscripcion = _fechaInscripcion;
    torneosGanados = _torneosGanados;
    strcpy(telefono, _telefono);
    strcpy(email, _email);
    socios = _socios;
    partidosJugados = _partidosJugados;
    golesTotales = _golesTotales;
    eliminado = _eliminado;
}

// Getters y Setters
int Club::getIdClub() const { return idClub; }
void Club::setIdClub(int _idClub) { idClub = _idClub; }

const char* Club::getNombre() const { return nombre; }
void Club::setNombre(const char* _nombre) { strcpy(nombre, _nombre); }

const char* Club::getPresidente() const { return presidente; }
void Club::setPresidente(const char* _presidente) { strcpy(presidente, _presidente); }

Fecha Club::getFechaInscripcion() const { return fechaInscripcion; }
void Club::setFechaInscripcion(Fecha _fecha) { fechaInscripcion = _fecha; }

int Club::getTorneosGanados() const { return torneosGanados; }
void Club::setTorneosGanados(int _torneos) { torneosGanados = _torneos; }

const char* Club::getTelefono() const { return telefono; }
void Club::setTelefono(const char* _telefono) { strcpy(telefono, _telefono); }

const char* Club::getEmail() const { return email; }
void Club::setEmail(const char* _email) { strcpy(email, _email); }

int Club::getSocios() const { return socios; }
void Club::setSocios(int _socios) { socios = _socios; }

int Club::getPartidosJugados() const { return partidosJugados; }
void Club::setPartidosJugados(int _partidos) { partidosJugados = _partidos; }

int Club::getGolesTotales() const { return golesTotales; }
void Club::setGolesTotales(int _goles) { golesTotales = _goles; }

bool Club::isEliminado() const { return eliminado; }
void Club::setEliminado(bool _eliminado) { eliminado = _eliminado; }
