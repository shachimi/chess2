#include "cell.h"

Cell::Cell(int x, int y)
    : content(NULL),
      x(x),
      y(y)
{
}

Cell::~Cell(void)
{
}

std::ostream &Cell::print(std::ostream &out) const
{
    if (this->content) {
        this->content->print(out);
    } else {
        out << "  ";
    }

    return out;
}

std::ostream &operator<<(std::ostream &out, const Cell& cell)
{
    return cell.print(out);
}
