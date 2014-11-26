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
#import "MSOutlookMessageOperations.h"
#import "MSOutlookMessage.h"
@class MSOutlookAttachmentCollectionFetcher;


/**
* The header for type MSOutlookMessageFetcher.
*/

@protocol MSOutlookMessageFetcher

@optional
-(NSURLSessionDataTask *)execute:(void (^)(MSOutlookMessage* message, NSError *error))callback;
-(NSURLSessionDataTask*) update:(id)updatedEntity :(void (^)(MSOutlookMessage*, NSError * error))callback;
@end

@interface MSOutlookMessageFetcher : MSODataEntityFetcher<MSOutlookMessageFetcher>

-(MSOutlookMessageOperations*) getOperations;

-(MSOutlookAttachmentCollectionFetcher*) getAttachments;

	
@end