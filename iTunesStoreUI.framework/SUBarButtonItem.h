/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UINavigationItem, UIView;

@interface SUBarButtonItem : UIBarButtonItem  {
    UIView *_accessoryView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _accessoryViewInsets;
    UINavigationItem *_lastNavigationItem;
}

@property(retain) UIView * accessoryView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } accessoryViewInsets;
@property(getter=isLoading) BOOL loading;

+ (Class)classForNavigationButton;

- (void)setLoading:(BOOL)arg1;
- (void)setAccessoryView:(id)arg1;
- (BOOL)isLoading;
- (id)accessoryView;
- (id)createViewForNavigationItem:(id)arg1;
- (void)dealloc;
- (void)_updateViewForAccessoryChange;
- (id)_navigationButton;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })accessoryViewInsets;
- (void)setAccessoryViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)configureFromScriptButton:(id)arg1;

@end
