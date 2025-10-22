#ifndef JUGADOR_H
#define JUGADOR_H

#include "Fecha.h"

class Jugador {
private:
    int dni;
    int idClub;
    char nombre[30];
    char apellido[30];
    char telefono[15];
    char email[40];
    Fecha fechaNacimiento;
    char posicion[20];
    int partidosJugados;
    int golesConvertidos;
    bool lesionado;
    bool eliminado;

public:
    // Constructor
    Jugador(int _dni = 0, int _idClub = 0, const char* _nombre = "", const char* _apellido = "",
            const char* _telefono = "", const char* _email = "", Fecha _fechaNacimiento = Fecha(),
            const char* _posicion = "", int _partidosJugados = 0, int _golesConvertidos = 0,
            bool _lesionado = false, bool _eliminado = false);

    // Getters y Setters
    int getDni() const;
    void setDni(int _dni);

    int getIdClub() const;
    void setIdClub(int _idClub);

    const char* getNombre() const;
    void setNombre(const char* _nombre);

    const char* getApellido() const;
    void setApellido(const char* _apellido);

    const char* getTelefono() const;
    void setTelefono(const char* _telefono);

    const char* getEmail() const;
    void setEmail(const char* _email);

    Fecha getFechaNacimiento() const;
    void setFechaNacimiento(Fecha _fecha);

    const char* getPosicion() const;
    void setPosicion(const char* _posicion);

    int getPartidosJugados() const;
    void setPartidosJugados(int _partidos);

    int getGolesConvertidos() const;
    void setGolesConvertidos(int _goles);

    bool isLesionado() const;
    void setLesionado(bool _lesionado);

    bool isEliminado() const;
    void setEliminado(bool _eliminado);
};

#endif
