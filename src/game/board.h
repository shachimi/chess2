#ifndef BOARD_H_
# define BOARD_H_

# include <vector>
# include <iostream>

# include "cell.h"

class Board {
public:
    Board(void);
    ~Board(void);

    Cell *get_cell(int x, int y) const;

    std::ostream &print(std::ostream &out) const;
private:
    std::vector<Cell *> cells;
};

std::ostream &operator<<(std::ostream &out, const Board& board);


#endif /* !BOARD_HH_ */
