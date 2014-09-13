#ifndef ROUTING_H
#define ROUTING_H

void Routing_determineLandCitizen();
void Routing_determineLandNonCitizen();
void Routing_determineWater();
void Routing_determineWalls();

void Routing_clearLandTypeCitizen();

void Routing_getDistance(int x, int y);
int Routing_getCalculatedDistance(int gridOffset);

void Routing_deleteClosestWallOrAqueduct(int x, int y);

int Routing_canTravelOverLandCitizen(int xSrc, int ySrc, int xDst, int yDst);
int Routing_canTravelOverRoadGardenCitizen(int xSrc, int ySrc, int xDst, int yDst);
int Routing_canTravelOverWalls(int xSrc, int ySrc, int xDst, int yDst);
int Routing_canTravelOverLandNonCitizen(int xSrc, int ySrc, int xDst, int yDst, int onlyThroughBuildingId, int maxTiles);
int Routing_canTravelThroughEverythingNonCitizen(int xSrc, int ySrc, int xDst, int yDst);

int Routing_getPath(int numDirections, int routingPathId, int xSrc, int ySrc, int xDst, int yDst);

int Routing_canPlaceRoadUnderAqueduct(int gridOffset);
int Routing_getAqueductGraphicOffsetWithRoad(int gridOffset);

int Routing_getDistanceForBuildingRoadOrAqueduct(int x, int y, int isAqueduct);
int Routing_getDistanceForBuildingWall(int x, int y);

typedef enum {
	RoutedBuilding_Road = 0,
	RoutedBuilding_Wall = 1,
	RoutedBuilding_Aqueduct = 2,
	RoutedBuilding_AqueductWithoutGraphic = 4,
} RoutedBuilding;

int Routing_placeRoutedBuilding(int xSrc, int ySrc, int xDst, int yDst, RoutedBuilding type, int *items);

int Routing_getGeneralDirection(int xSrc, int ySrc, int xDst, int yDst);

int Routing_getDirectionForMissileShooter(int xSrc, int ySrc, int xDst, int yDst);
int Routing_getDirectionForMissile(int xSrc, int ySrc, int xDst, int yDst);

void Routing_getDistanceWaterBoat(int x, int y);
void Routing_getDistanceWaterFlotsam(int x, int y);
int Routing_getPathOnWater(int routingPathId, int xSrc, int ySrc, int xDst, int yDst, int isFlotsam);

int Routing_getClosestXYWithinRange(int numDirections, int xSrc, int ySrc, int xDst, int yDst, int range, int *xOut, int *yOut);

void Routing_block(int x, int y, int size);

#endif
