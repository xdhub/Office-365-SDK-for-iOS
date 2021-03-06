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

#import "MSDirectoryGroupFetcher.h"
#import "MSDirectoryAppRoleAssignmentCollectionFetcher.h"


/**
* The implementation file for type MSDirectoryGroupFetcher.
*/


@implementation MSDirectoryGroupFetcher

-(MSDirectoryGroupOperations*) getOperations{
	return [[MSDirectoryGroupOperations alloc] initOperationWithUrl:self.UrlComponent parent:self.Parent];
}

-(id)initWithUrl:(NSString*)urlComponent :(id<MSODataExecutable>)parent{
    
    self.Parent = parent;
    self.UrlComponent = urlComponent;
    return [super initWithUrl:urlComponent parent:parent andEntityClass : [MSDirectoryGroup class]];
}

-(NSURLSessionDataTask*) updateGroup:(id)entity withCallback:(void (^)(MSDirectoryGroup*, MSODataException * error))callback{
	return [super update:entity : callback];
}

-(NSURLSessionDataTask*) deleteGroup:(void (^)(int status, MSODataException * error))callback{
	return [super delete:callback];
}


-(MSDirectoryAppRoleAssignmentCollectionFetcher*) getappRoleAssignments{
    return [[MSDirectoryAppRoleAssignmentCollectionFetcher alloc] initWithUrl:@"appRoleAssignments" parent:self andEntityClass:[MSDirectoryAppRoleAssignment class]];
}

-(MSDirectoryAppRoleAssignmentFetcher*) getappRoleAssignmentsById : (NSString*)_id{
    return [[[MSDirectoryAppRoleAssignmentCollectionFetcher alloc] initWithUrl:@"appRoleAssignments" parent:self andEntityClass:[MSDirectoryAppRoleAssignment class]] getById:_id];
}

@end