/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedAsset, NSMutableOrderedSet, NSURL, NSOrderedSet, NSObject<PLIndexMappingCache>, UIImage, PLPhotoLibrary, NSString, NSDictionary, NSNumber;

@interface PLGenericAlbum : _PLGenericAlbum <PLAssetContainer> {
    NSObject<PLIndexMappingCache> *_derivededAlbums[5];
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(readonly) unsigned int indexOfPosterImage;
@property BOOL isRegisteredForChanges;
@property BOOL didRegisteredWithUserInterfaceContext;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) NSOrderedSet * assets;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) unsigned int count;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) NSString * name;
@property(readonly) UIImage * posterImage;
@property int kindValue;
@property BOOL isRegisteredForChanges;
@property BOOL didRegisteredWithUserInterfaceContext;
@property(readonly) NSString * uuid;
@property(readonly) NSNumber * kind;
@property(readonly) NSString * title;
@property(readonly) NSString * localizedTitle;
@property(readonly) BOOL isEmpty;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(readonly) NSURL * groupURL;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;

+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)wallpaperAlbumInLibrary:(id)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)insertNewPhotoStreamAlbumIntoLibrary:(id)arg1;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)cameraSessionAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)insertNewEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewEventIntoLibrary:(id)arg1;

- (id)localizedTitle;
- (id)posterImage;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (id)kind;
- (id)title;
- (id)name;
- (BOOL)isEmpty;
- (void)setTitle:(id)arg1;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)enumerateDerivedAlbums:(id)arg1;
- (id)_kindDescription;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)unregisterAllDerivedAlbums;
- (unsigned int)countForAssetsOfKind:(int)arg1;
- (void)unregisterForChanges;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (void)registerForChanges;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (BOOL)isRegisteredForChanges;
- (void)setUuid:(id)arg1;
- (void)setKindValue:(int)arg1;
- (id)_prettyDescription;
- (unsigned int)indexOfPosterImage;
- (id)groupURL;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)isLibrary;
- (void)updateStackedImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)photoLibrary;
- (unsigned int)videosCount;
- (unsigned int)photosCount;
- (int)kindValue;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isCameraAlbum;
- (void)delete;
- (BOOL)canPerformEditOperation:(int)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (id)uuid;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)setKind:(id)arg1;

@end
