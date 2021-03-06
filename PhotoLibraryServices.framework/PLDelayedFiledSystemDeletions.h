/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject  {
    NSMutableArray *_owningObjectIDURIs;
    NSMutableArray *_fileURLs;
    NSMutableArray *_thumbnailIndexes;
}

+ (id)deletionsFromChangeHubEvent:(void*)arg1;
+ (void)appendDescriptionForEvent:(void*)arg1 toComponents:(id)arg2;

- (id)initWithOwningObjectIDURIs:(id)arg1 fileURLs:(id)arg2 thumbnailIndexes:(id)arg3;
- (id)allThumbnailIndexesToBeDeleted;
- (void)_enumerateAllURLsToBeDeleted:(id)arg1;
- (void)deleteAllRemainingFilesAndThumbnails;
- (void)appendToXPCMessage:(void*)arg1;
- (id)URLsToBeDeletedForAsset:(id)arg1 thumbnailIndex:(unsigned int*)arg2;
- (void)addDeletionsForAsset:(id)arg1 fileURLs:(id)arg2 thumbnailIndex:(unsigned int)arg3;
- (id)debugDescription;
- (void)dealloc;

@end
