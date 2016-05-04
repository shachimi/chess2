#ifndef CELL_H_
# define CELL_H_

# include <iostream>

# include "pieces/piece.h"

class Cell {
public:
    Cell(int x, int y);
    ~Cell(void);

    /* Getter and setters */
    Piece *getContent(void) const { return this->content; };
    void setContent(Piece *content) { this->content = content; };
    int getX(void) const { return this->x; };
    void setX(int x) { this->x = x; };
    int getY(void) const { return this->y; };
    void setY(int y) { this->y = y; };

    std::ostream &print(std::ostream &out) const;

protected:
    Piece *content;
    int x;
    int y;
};

std::ostream &operator<<(std::ostream &out, const Cell &cell);


#endif /* !CELL_H_ */
