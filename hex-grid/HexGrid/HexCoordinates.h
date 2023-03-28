// HexGrid Demo. Copyright (C) 2022-23 Stanislav Moskalev

#ifndef CPP_HEX_GRID_HEXCOORDINATES_H
#define CPP_HEX_GRID_HEXCOORDINATES_H

#pragma once

#include <string>
#include <ostream>
#include <sstream>

struct HexCoordinates {
public:
    int x;  // x-coordinate
    int y;  // y-coordinate
    int z;  // z-coordinate

    // Constructor from set of individual coordinates
    HexCoordinates(int new_x, int new_y, int new_z);
    // Constructor from offset coordinates
    static HexCoordinates FromOffsetCoordinates (int offset_x, int offset_y, int offset_z);

    // Converts struct data into a string line
    [[nodiscard]] std::string ToString() const;
    // Converts struct data into a string with each field on its own row
    [[nodiscard]] std::string ToStringOnSeparateLines() const;
};

// Stream output operator. Dumps all struct content to the stream
std::ostream& operator << (std::ostream &os, const HexCoordinates &hexCoordinates);

#endif //CPP_HEX_GRID_HEXCOORDINATES_H