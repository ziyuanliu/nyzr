//
//  NRFile.h
//  nyzr
//
//  Created by Ziyuan Liu on 11/13/14.
//  Copyright (c) 2014 NYZR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NRFile : NSObject
@property (strong) NSString *name;
@property (strong) NSString *type;
@property (strong) NSDate *creationDate;
@property (strong) NSDate *modificationDate;
@property (strong) NSString *path;

+(id)fileWithFilePath:(NSString*)filepath;
- (id)initWithName:(NSString *)name withType:(NSString *)type withPath:(NSString *)path withCreationDate:(NSDate *)creationDate andWithModificationDate:(NSDate *)modDate;
- (NSString *)domain;
- (NSString *)extension;
- (NSDictionary *)metaData;
- (void)deleteFile;
@end
