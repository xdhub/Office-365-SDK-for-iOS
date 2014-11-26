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

#import "MSSharePointFolderOperations.h"

/**
* The implementation file for type MSSharePointFolderOperations.
*/

@implementation MSSharePointFolderOperations

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataReadable>)parent{
    return [super initOperationWithUrl:urlComponent parent:parent];
}

-(NSURLSessionDataTask*)copy : (NSString *) destFolderId : (NSString *) destFolderPath : (NSString *) newName : (void (^)(MSSharePointFolder *folder, NSError *error))callback{

	id<MSODataURL> url = [[self getResolver] createODataURL];
		
	NSArray* parameters = [[NSArray alloc] initWithObjects:
	[[NSDictionary alloc] initWithObjectsAndKeys :destFolderId,@"destFolderId",nil ],
	[[NSDictionary alloc] initWithObjectsAndKeys :destFolderPath,@"destFolderPath",nil ],
	[[NSDictionary alloc] initWithObjectsAndKeys :newName,@"newName",nil ],nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayload:parameters :[self getResolver]]dataUsingEncoding:NSUTF8StringEncoding];
	[url appendPathComponent:@"copy"];

	NSURLSessionDataTask* task = [super oDataExecuteForPath:url withContent : payload andMethod:POST andCallback:^(id<MSODataResponse> r, NSError *error) {
        
       if(error == nil){
			MSSharePointFolder * result = (MSSharePointFolder *)[[[self getResolver]getJsonSerializer] deserialize:[r getData] : [MSSharePointFolder class]];
            callback(result, error);
        }
        else{
            callback(nil, error);
        }
    }];
    
    return task;
}			
@end