//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIALocalizedValue : NSObject
{
    NSString *_key;
    NSString *_value;
    NSString *_tableName;
    NSString *_bundleID;
    NSString *_bundlePath;
}

@property(readonly) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
- (id)_jsVariableExpressionString;
- (id)_jsVariableName;
- (void)dealloc;
- (id)initWithAXAttributedString:(id)arg1;

@end

