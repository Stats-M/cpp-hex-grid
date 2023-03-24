// HexGrid Demo. Copyright (C) 2022-23 Stanislav Moskalev

#include "HexGridMetrics.h"

/**
 * Static members initialization
 * (outside of any class definitions).
 */

const int HexGridMetrics::CellVerticesCount = 6;

const float HexGridMetrics::OuterRadius = 50.0f;
const float HexGridMetrics::InnerRadius = HexGridMetrics::OuterRadius * 0.866025404f;

const std::array<std::array<float, 3>, 7> HexGridMetrics::HexGridMetrics3D
{
    {
        // Uses UE coordinates (Forward,Right,Up instead of X,Y,Z)
        // Counter clock-wise, starting from 12 hours
        {HexGridMetrics::OuterRadius, 0.0f, 0.0f},
        {0.5f * HexGridMetrics::OuterRadius, -HexGridMetrics::InnerRadius, 0.0f},
        {-0.5f * HexGridMetrics::OuterRadius, -HexGridMetrics::InnerRadius, 0.0f},
        {-HexGridMetrics::OuterRadius, 0.0f, 0.0f},
        {-0.5f * HexGridMetrics::OuterRadius, HexGridMetrics::InnerRadius, 0.0f},
        {0.5f * HexGridMetrics::OuterRadius, HexGridMetrics::InnerRadius, 0.0f},
        {HexGridMetrics::OuterRadius, 0.0f, 0.0f} // 7th vertice is a copy of the 1st one
    } // End of outer array
};  // End of initializer list

const std::array<std::array<float, 2>, 7> HexGridMetrics::HexGridMetrics2D
{
    {
        // Uses UE coordinates (Forward,Right,Up instead of X,Y,Z)
        // Counter clock-wise, starting from 12 hours
        {HexGridMetrics::OuterRadius, 0.0f},
        {0.5f * HexGridMetrics::OuterRadius, -HexGridMetrics::InnerRadius},
        {-0.5f * HexGridMetrics::OuterRadius, -HexGridMetrics::InnerRadius},
        {-HexGridMetrics::OuterRadius, 0.0f},
        {-0.5f * HexGridMetrics::OuterRadius, HexGridMetrics::InnerRadius},
        {0.5f * HexGridMetrics::OuterRadius, HexGridMetrics::InnerRadius},
        {HexGridMetrics::OuterRadius, 0.0f} // 7th vertice is a copy of the 1st one
    }  // End of outer array
};  // End of initializer list

const int HexGridMetrics::MaximumChunksCountHeight = 20;
const int HexGridMetrics::MaximumChunksCountWidth = 20;

const int HexGridMetrics::MaximumChunkSizeHeight = 8;
const int HexGridMetrics::MaximumChunkSizeWidth = 8;

HexGridMetrics::HexGridMetrics() = default;