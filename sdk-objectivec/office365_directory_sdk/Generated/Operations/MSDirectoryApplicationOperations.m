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

#import "MSDirectoryApplicationOperations.h"

/**
* The implementation file for type MSDirectoryApplicationOperations.
*/

@implementation MSDirectoryApplicationOperations

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataReadable>)parent{
    return [super initOperationWithUrl:urlComponent parent:parent];
}

-(NSURLSessionDataTask*)restore : (NSMutableArray *) identifierUris : (void (^)(MSDirectoryApplication *application, NSError *error))callback{

	id<MSODataURL> url = [[self getResolver] createODataURL];
		
	NSDictionary* params = [[NSDictionary alloc] initWithObjectsAndKeys:identifierUris,@"identifierUris",nil];

	NSString* parameters = [MSODataBaseContainerHelper getFunctionParameters: params];
	[url appendPathComponent:[[NSString alloc] initWithFormat:@"restore(%@)",parameters]];
	NSData* payload = nil;
		

	NSURLSessionDataTask* task = [super oDataExecuteForPath:url withContent : payload andMethod:GET andCallback:^(id<MSODataResponse> r, NSError *error) {
        
       if(error == nil){
			MSDirectoryApplication * result = (MSDirectoryApplication *)[[[self getResolver]getJsonSerializer] deserialize:[r getData] : [MSDirectoryApplication class]];
            callback(result, error);
        }
        else{
            callback(nil, error);
        }
    }];
    
    return task;
}			
@end