// HexGrid Demo. Copyright (C) 2022-23 Stanislav Moskalev

#include "HexGrid.h"

HexGrid::HexGrid(int chunkSizeWidth, int chunkSizeHeight, int chunksCountWidth, int chunksCountHeight)
    : ChunkSizeWidth(chunkSizeWidth),
      ChunkSizeHeight(chunkSizeHeight),
      ChunksCountWidth(chunksCountWidth),
      ChunksCountHeight(chunksCountHeight)
{}

int HexGrid::GetTotalCellsCountWidth() const {
    return ChunkSizeWidth * ChunksCountWidth;
}

int HexGrid::GetTotalCellsCountHeight() const {
    return ChunkSizeHeight * ChunksCountHeight;
}

int HexGrid::GetTotalCellsCount() const {
    return GetTotalCellsCountWidth() * GetTotalCellsCountHeight();
}

int HexGrid::GetTotalChunksCount() const {
    return ChunksCountWidth * ChunksCountHeight;
}
