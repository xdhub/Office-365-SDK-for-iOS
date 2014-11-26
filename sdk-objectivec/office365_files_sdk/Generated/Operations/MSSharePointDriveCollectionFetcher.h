/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointDrive.h"
#import "MSSharePointDriveFetcher.h"

/**
* The header for type MSSharePointDriveCollectionFetcher.
*/

@protocol MSSharePointDriveCollectionFetcher

@optional
-(NSURLSessionDataTask*)read:(void (^)(NSArray<MSSharePointDrive> *drives, NSError *error))callback;

@end

@interface MSSharePointDriveCollectionFetcher : MSODataCollectionFetcher<MSSharePointDriveCollectionFetcher>

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataReadable>)parent;

-(NSURLSessionDataTask*)addEntity:(MSSharePointDrive* )entity withCallback:(void (^)(MSSharePointDrive *drive, NSError *e))callback;

-(MSSharePointDriveFetcher*)getById:(NSString *)Id;

@end