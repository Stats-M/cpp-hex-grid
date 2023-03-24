// HexGrid Demo. Copyright (C) 2022-23 Stanislav Moskalev

#pragma once

#include <array>

/**
 * Class that defines all metrics for grid.
 * Most of them are static.
 */
class HexGridMetrics
{
public:
    HexGridMetrics();

    // Vertices count for a cell
    static const int CellVerticesCount;

    // Outer hex radius in Units. The root value for all others' metrics.
    static const float OuterRadius;
    // Inner hex radius
    static const float InnerRadius;
    // Default coordinates of hex vertices in 3D (Counter Clock-wise).
    // 7th vertice is a copy of 1st for easy loops programming
    static const std::array<std::array<float, 3>, 7> HexGridMetrics3D;
    // Default coordinates of hex vertices in 2D (Counter Clock-wise).
    // 7th vertice is a copy of 1st for easy loops programming
    static const std::array<std::array<float, 2>, 7> HexGridMetrics2D;

    // Maximum chunks amount in the grid (grid height)
    static const int MaximumChunksCountHeight;
    // Maximum chunks amount in the grid (grid width)
    static const int MaximumChunksCountWidth;

    // Maximum single chunk height in number of cells (along UE Forward (X) axis)
    static const int MaximumChunkSizeHeight;
    // Maximum single chunk width in number of cells (along UE Right (Y) axis)
    static const int MaximumChunkSizeWidth;
};