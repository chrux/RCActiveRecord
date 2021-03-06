//
//  Person.h
//  RCActiveRecord
//
//  Created by Ryan Copley on 10/11/13.
//  Copyright (c) 2013 Ryan Copley. All rights reserved.
//

#import "RCActiveRecord.h"

@interface Person : RCActiveRecord

@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* ip;
@property (strong, nonatomic) NSString* address;
@property (strong, nonatomic) NSNumber* age;
@property (strong, nonatomic) NSString* md5;
@property (strong, nonatomic) NSString* sha1;
@property (strong, nonatomic) NSNumber* version;

@end
