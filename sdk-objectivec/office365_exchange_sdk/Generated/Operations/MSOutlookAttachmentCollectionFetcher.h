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
#import "MSOutlookAttachment.h"
#import "MSOutlookAttachmentFetcher.h"

/**
* The header for type MSOutlookAttachmentCollectionFetcher.
*/

@protocol MSOutlookAttachmentCollectionFetcher

@optional
-(NSURLSessionDataTask*)read:(void (^)(NSArray<MSOutlookAttachment> *attachments, NSError *error))callback;

@end

@interface MSOutlookAttachmentCollectionFetcher : MSODataCollectionFetcher<MSOutlookAttachmentCollectionFetcher>

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataReadable>)parent;

-(NSURLSessionDataTask*)addEntity:(MSOutlookAttachment* )entity withCallback:(void (^)(MSOutlookAttachment *attachment, NSError *e))callback;

-(MSOutlookAttachmentFetcher*)getById:(NSString *)Id;

@end