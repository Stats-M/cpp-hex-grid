//
// Created by smoskalev on 28.03.2023.
//

#include "HexCoordinates.h"

HexCoordinates::HexCoordinates(int new_x, int new_y, int new_z)
    : x(new_x), y(new_y), z(new_z)
{
}

HexCoordinates HexCoordinates::FromOffsetCoordinates(int offset_x, int offset_y, int offset_z)
{
    return {offset_x, offset_y, offset_z};
}

std::string HexCoordinates::ToString() const {
    std::stringstream ss;
    // Realization is done through using of << operator, which does exactly what required
    ss << (*this);
    return ss.str();
}

std::string HexCoordinates::ToStringOnSeparateLines() const {
    std::stringstream ss;
    // Manual realization since standard << operator does not implement usage of line breaks
    ss << "(" << this->x << std::endl << this->y << std::endl << this->z << ")";
    return ss.str();
}

std::ostream& operator << (std::ostream &os, const HexCoordinates &hexCoordinates) {
    return os << "(" << hexCoordinates.x << ", " << hexCoordinates.y << ", " << hexCoordinates.z << ")";
}
