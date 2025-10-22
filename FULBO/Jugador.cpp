#include "Jugador.h"
#include <cstring>

// Constructor
Jugador::Jugador(int _dni, int _idClub, const char* _nombre, const char* _apellido,
                 const char* _telefono, const char* _email, Fecha _fechaNacimiento,
                 const char* _posicion, int _partidosJugados, int _golesConvertidos,
                 bool _lesionado, bool _eliminado)
{
    dni = _dni;
    idClub = _idClub;
    strcpy(nombre, _nombre);
    strcpy(apellido, _apellido);
    strcpy(telefono, _telefono);
    strcpy(email, _email);
    fechaNacimiento = _fechaNacimiento;
    strcpy(posicion, _posicion);
    partidosJugados = _partidosJugados;
    golesConvertidos = _golesConvertidos;
    lesionado = _lesionado;
    eliminado = _eliminado;
}

// Getters y Setters
int Jugador::getDni() const { return dni; }
void Jugador::setDni(int _dni) { dni = _dni; }

int Jugador::getIdClub() const { return idClub; }
void Jugador::setIdClub(int _idClub) { idClub = _idClub; }

const char* Jugador::getNombre() const { return nombre; }
void Jugador::setNombre(const char* _nombre) { strcpy(nombre, _nombre); }

const char* Jugador::getApellido() const { return apellido; }
void Jugador::setApellido(const char* _apellido) { strcpy(apellido, _apellido); }

const char* Jugador::getTelefono() const { return telefono; }
void Jugador::setTelefono(const char* _telefono) { strcpy(telefono, _telefono); }

const char* Jugador::getEmail() const { return email; }
void Jugador::setEmail(const char* _email) { strcpy(email, _email); }

Fecha Jugador::getFechaNacimiento() const { return fechaNacimiento; }
void Jugador::setFechaNacimiento(Fecha _fecha) { fechaNacimiento = _fecha; }

const char* Jugador::getPosicion() const { return posicion; }
void Jugador::setPosicion(const char* _posicion) { strcpy(posicion, _posicion); }

int Jugador::getPartidosJugados() const { return partidosJugados; }
void Jugador::setPartidosJugados(int _partidos) { partidosJugados = _partidos; }

int Jugador::getGolesConvertidos() const { return golesConvertidos; }
void Jugador::setGolesConvertidos(int _goles) { golesConvertidos = _goles; }

bool Jugador::isLesionado() const { return lesionado; }
void Jugador::setLesionado(bool _lesionado) { lesionado = _lesionado; }

bool Jugador::isEliminado() const { return eliminado; }
void Jugador::setEliminado(bool _eliminado) { eliminado = _eliminado; }

