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

@class MSGraphServiceFileOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceFileFetcher.
*/


@protocol MSGraphServiceFileFetcher<MSODataEntityFetcher>

@optional
-(NSURLSessionTask*) read:(void (^)(MSGraphServiceFile* file, MSODataException *error))callback;
-(NSURLSessionTask*) updateFile:(id)entity withCallback:(void (^)(MSGraphServiceFile*, MSODataException * error))callback;
-(NSURLSessionTask*) deleteFile:(void (^)(int status, MSODataException * error))callback;
-(id<MSGraphServiceFileFetcher>)addCustomParameters : (NSString*)name : (id)value;
-(id<MSGraphServiceFileFetcher>)addCustomHeaderWithName : (NSString*)name andValue : (NSString*) value;
-(id<MSGraphServiceFileFetcher>)select : (NSString*) params;
-(id<MSGraphServiceFileFetcher>)expand : (NSString*) value;

@required
-(MSGraphServiceFileOperations*) getOperations;
@end

@interface MSGraphServiceFileFetcher : MSODataEntityFetcher<MSGraphServiceFileFetcher>

@end