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
#import "MSDirectoryOAuth2PermissionGrantOperations.h"
#import "MSDirectoryOAuth2PermissionGrant.h"


/**
* The header for type MSDirectoryOAuth2PermissionGrantFetcher.
*/

@protocol MSDirectoryOAuth2PermissionGrantFetcher

@optional
-(NSURLSessionDataTask *)execute:(void (^)(MSDirectoryOAuth2PermissionGrant* oAuth2PermissionGrant, NSError *error))callback;
-(NSURLSessionDataTask*) update:(id)updatedEntity :(void (^)(MSDirectoryOAuth2PermissionGrant*, NSError * error))callback;
@end

@interface MSDirectoryOAuth2PermissionGrantFetcher : MSODataEntityFetcher<MSDirectoryOAuth2PermissionGrantFetcher>

-(MSDirectoryOAuth2PermissionGrantOperations*) getOperations;

	
@end