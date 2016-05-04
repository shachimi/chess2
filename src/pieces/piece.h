#ifndef PIECE_H_
# define PIECE_H_

# include <iostream>
# include <vector>

class Cell;

class Piece {
public:
    Piece(void);
    ~Piece(void);

    virtual std::ostream& print(std::ostream& out) = 0;
    virtual std::vector<Cell *> get_move(void) = 0;

    /* Getter and setters */
    int getY(void) { return this->y; };
    void setY(int y) { this->y = y; };
    int getX(void) { return this->x; };
    void setX(int x) { this->x = x; };

protected:
    int y;
    int x;
};

# include "game/cell.h"

#endif /* !PIECE_H_ */
