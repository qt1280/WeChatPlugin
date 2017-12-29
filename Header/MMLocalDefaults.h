//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MMLocalDefaults : NSObject
{
    NSMutableDictionary *_storage;
    double _lastSync;
    BOOL _unsavedChanges;
    NSString *_username;
}

+ (void)registerDefaults:(id)arg1;
+ (void)cleanUpForLogOut;
+ (id)currentUserDefaults;
+ (void)initialize;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_appWillTerminate:(id)arg1;
- (void)_autoSyncIfNeeded;
- (BOOL)synchronize;
- (id)filePath;
- (void)dealloc;
- (id)initWithUsername:(id)arg1;

@end
