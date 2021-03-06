/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireRasterTileTrafficSegment : NSObject  {
    struct { int x1; int x2; } *_vertices;
    int _vertexCount;
    BOOL _hasSpeed;
    int _speed;
    BOOL _hasWidth;
    int _width;
}

@property(readonly) struct { int x1; int x2; }* vertices;
@property(readonly) int vertexCount;
@property BOOL hasSpeed;
@property int speed;
@property BOOL hasWidth;
@property int width;


- (BOOL)hasSpeed;
- (void)setVertices:(struct { int x1; int x2; }*)arg1 count:(int)arg2;
- (void)setHasWidth:(BOOL)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (int)speed;
- (void)setSpeed:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)width;
- (struct { int x1; int x2; }*)vertices;
- (BOOL)hasWidth;
- (int)vertexCount;

@end
