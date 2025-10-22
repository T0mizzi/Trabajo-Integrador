#include "Gol.h"
#include <cstring>

// Constructor
Gol::Gol(int _idGol, int _nroPartido, int _dniJugador, int _tipoGol, const char* _minuto, bool _eliminado, bool _golHistorico)
{
    idGol = _idGol;
    nroPartido = _nroPartido;
    dniJugador = _dniJugador;
    tipoGol = _tipoGol;
    strcpy(minuto, _minuto);
    eliminado = _eliminado;
    golHistorico = _golHistorico;
}

// Getters y Setters
int Gol::getIdGol() const { return idGol; }
void Gol::setIdGol(int _idGol) { idGol = _idGol; }

int Gol::getNroPartido() const { return nroPartido; }
void Gol::setNroPartido(int _nroPartido) { nroPartido = _nroPartido; }

int Gol::getDniJugador() const { return dniJugador; }
void Gol::setDniJugador(int _dniJugador) { dniJugador = _dniJugador; }

int Gol::getTipoGol() const { return tipoGol; }
void Gol::setTipoGol(int _tipoGol) { tipoGol = _tipoGol; }

const char* Gol::getMinuto() const { return minuto; }
void Gol::setMinuto(const char* _minuto) { strcpy(minuto, _minuto); }

bool Gol::isEliminado() const { return eliminado; }
void Gol::setEliminado(bool _eliminado) { eliminado = _eliminado; }
