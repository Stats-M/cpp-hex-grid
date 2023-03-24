// HexGrid Demo. Copyright (C) 2022-23 Stanislav Moskalev

#pragma once

#include "HexGridMetrics.h"

/**
 * Class defines a hexagonal map, consisted from a set
 * of small map chunks (each one with ProceduralMesh actor).
 * Contains:
 *  - all text labels for all chunks
 *  - all cells data (chunks get pointers to them)
 */
class HexGrid
{
public:
    // Sets default values for grid properties
    explicit HexGrid(
            int chunkSizeWidth = 6,
            int chunkSizeHeight = 6,
            int chunksCountWidth = 1,
            int chunksCountHeight = 1
    );

    // Chunk width (number of hexes) (even integer)
    const int ChunkSizeWidth;

    // Chunk height (number of hexes) (even integer)
    const int ChunkSizeHeight;

    // Total chunks count on the grid (width)
    const int ChunksCountWidth;

    // Total chunks count on the grid (height)
    const int ChunksCountHeight;

    // Returns amount of cells in the grid (grid width)
    [[nodiscard]] int GetTotalCellsCountWidth() const;

    // Returns amount of cells in the grid (grid height)
    [[nodiscard]] int GetTotalCellsCountHeight() const;

    // Returns total cells on map
    [[nodiscard]] int GetTotalCellsCount() const;

    // Returns total chunks on map
    [[nodiscard]] int GetTotalChunksCount() const;


    // Creates a cell instance and adds it to cell array(s)
    // X,Y,Z are cell's indexes in rectangular 3D array
    //void CreateCell(int32 X, int32 Y, int32 Z);

protected:
    // Called when the game mode starts or when spawned
    //virtual void BeginPlay() override;

    // Linear array of spawned map chunks. From left to right, from closest line to most far away.
    // In UE4 coords that means from y=0 to TotalChunkCountWidth, from x=0 to TotalChunkCountHeight
    //TArray<ADMDMapChunk *> MapChunks{}; // Linear array of DMDMapChunk* (map chunks)

    // Linear array of map cells. From left to right, from closest line to most far away.
    // In UE4 coords that means from y=0 to TotalChunkCountWidth*ChunkSizeWidth,
    // from x=0 to TotalChunkCountHeight*ChunkSizeHeight
    //TArray<UDMDHexCell *> GridCells{}; // Linear array of UDMDHexCell* (map cells)

private:
    // Amount of chunks in the grid (grid width)
    int totalChunksCountWidth;

    // Amount of chunks in the grid (grid height)
    int totalChunksCountHeight;

    // Total cells on map
    int cellsTotalCount;

    // Total chunks on map
    int chunksTotalCount;

    // Init grid-related variables with boundaries check
    // (to be called in BeginPlay())
//    void InitGridVariables();

};