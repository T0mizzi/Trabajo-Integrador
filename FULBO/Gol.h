#ifndef GOL_H
#define GOL_H

class Gol {
private:
    int idGol;
    int nroPartido;
    int dniJugador;
    int tipoGol;       // 1: penal, 2: tiro libre, 3: jugada
    char minuto[10];
    bool eliminado;

public:
    // Constructor
    Gol(int _idGol = 0, int _nroPartido = 0, int _dniJugador = 0, int _tipoGol = 0, const char* _minuto = "", bool _eliminado = false);

    // Getters y Setters
    int getIdGol() const;
    void setIdGol(int _idGol);

    int getNroPartido() const;
    void setNroPartido(int _nroPartido);

    int getDniJugador() const;
    void setDniJugador(int _dniJugador);

    int getTipoGol() const;
    void setTipoGol(int _tipoGol);

    const char* getMinuto() const;
    void setMinuto(const char* _minuto);

    bool isEliminado() const;
    void setEliminado(bool _eliminado);
};

#endif
