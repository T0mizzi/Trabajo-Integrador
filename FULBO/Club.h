#ifndef CLUB_H
#define CLUB_H
#include "Fecha.h"

class Club {
private:
    int idClub;
    char nombre[40];
    char presidente[40];
    Fecha fechaInscripcion;
    int torneosGanados;
    char telefono[15];
    char email[40];
    int socios;
    int partidosJugados;
    int golesTotales;
    bool eliminado;

public:
    // Constructor
    Club(int _idClub = 0, const char* _nombre = "", const char* _presidente = "", Fecha _fechaInscripcion = Fecha(),
         int _torneosGanados = 0, const char* _telefono = "", const char* _email = "",
         int _socios = 0, int _partidosJugados = 0, int _golesTotales = 0, bool _eliminado = false);

    // Getters y Setters
    int getIdClub() const;
    void setIdClub(int _idClub);

    const char* getNombre() const;
    void setNombre(const char* _nombre);

    const char* getPresidente() const;
    void setPresidente(const char* _presidente);

    Fecha getFechaInscripcion() const;
    void setFechaInscripcion(Fecha _fecha);

    int getTorneosGanados() const;
    void setTorneosGanados(int _torneos);

    const char* getTelefono() const;
    void setTelefono(const char* _telefono);

    const char* getEmail() const;
    void setEmail(const char* _email);

    int getSocios() const;
    void setSocios(int _socios);

    int getPartidosJugados() const;
    void setPartidosJugados(int _partidos);

    int getGolesTotales() const;
    void setGolesTotales(int _goles);

    bool isEliminado() const;
    void setEliminado(bool _eliminado);
};

#endif
