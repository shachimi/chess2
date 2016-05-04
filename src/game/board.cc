#include "board.h"

Board::Board()
    : cells(std::vector<Cell *>())
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            this->cells.push_back(new Cell(i, j));
        }
    }
}

Board::~Board()
{
}

Cell *Board::get_cell(int x, int y) const
{
    if ((0 <= x && x <= 7) && (0 <= y && y <= 7)) {
        return this->cells[x + y * 8];
    }
    return NULL;
}

std::ostream &Board::print(std::ostream &out) const
{
    static std::string columns[8] = {
        "A ", "B ", "C ", "D ", "E ", "F ", "G ", "H "
    };

    out << "  |";
    for (int i = 0; i < 8; i++) {
        out << columns[i] << "|";
    }
    out << std::endl;
    for (int x = 0; x < 9; x++) {
        out << "--+";
    }
    out << std::endl;

    for (int y = 7; y >= 0; y--) {
        out << " " << (y + 1) << "|";

        for (int x = 0; x < 8; x++) {
            out << *this->get_cell(x, y) << "|";
        }
        out << std::endl;
        for (int x = 0; x < 9; x++) {
            out << "--+";
        }
        out << std::endl;
    }

    return out;
}

std::ostream &operator<<(std::ostream &out, const Board& board)
{
    return board.print(out);
}
