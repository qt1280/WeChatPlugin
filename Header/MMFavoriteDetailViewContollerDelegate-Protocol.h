//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMFavoriteDetailViewContoller, MMFavoritesCollectionData, NSArray, NSString;

@protocol MMFavoriteDetailViewContollerDelegate <NSObject>
- (NSString *)currentSearchingTag;
- (NSString *)currentSearchingUserName;
- (NSArray *)currentSearchingTypes;
- (MMFavoritesCollectionData *)dataForDetailViewController:(MMFavoriteDetailViewContoller *)arg1;
@end
