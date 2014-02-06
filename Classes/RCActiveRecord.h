//
//  RCActiveRecord.h
//  ObjCActiveRecord
//
//  Created by Ryan Copley on 8/13/13.
//  Copyright (c)2013 Ryan Copley. All rights reserved.
//

#import "FMDatabase.h"
#import "FMDatabaseQueue.h"
#import "RCCriteria.h"
#import "RCResultSet.h"

@interface RCActiveRecord : NSObject{
    BOOL isNewRecord;
    BOOL isSavedRecord;
    NSArray* errors;
}

@property (nonatomic)BOOL isNewRecord;
@property (nonatomic)BOOL isSavedRecord;
@property (nonatomic, retain)RCCriteria* criteria;
@property (nonatomic, retain)NSNumber* _id;
@property (nonatomic, retain)NSDate* creationDate;
@property (nonatomic, retain)NSDate* savedDate;
@property (nonatomic, retain)NSDate* updatedDate;

-(id)initDefaultValues;
-(id)initModel;
-(id)init;
+(id)model;
-(void)setCriteria:(RCCriteria*)criteria;
-(RCResultSet*)recordByPK:(NSNumber*)pk;
-(RCResultSet*)recordsByAttribute:(NSString*)attributeName value:(id)value;
+(RCResultSet*)allRecords; //Tested
+(RCResultSet*)allRecordsWithCriteria:(RCCriteria*)criteria; //Tested
-(RCResultSet*)customQuery:(NSString*)query;
-(int)recordCount; //Tested
-(NSDictionary*)toJSON; //Tested
+(id)fromJSON:(id)json; //Tested
+(void)beginTransaction; //Tested
+(void)commit;
+(void)rollback; //Tested
-(BOOL)insertRecord; //Tested
-(BOOL)updateRecord; //Tested
-(BOOL)saveRecord; //Tested
-(BOOL)deleteRecord; //Tested
+(void)preloadModels:(BOOL)preload;
+(BOOL)preloadEnabled;
+(BOOL)hasSchemaDeclared;
+(BOOL)registerColumn:(NSString*)columnName;
+(BOOL)generateSchema: (BOOL)force;
+(BOOL)updateSchema;
+(BOOL)trunctuate; //Tested
+(BOOL)dropTable; //Tested
-(NSString*)primaryKeyName;
-(NSNumber*)primaryKeyValue; //Tested
-(NSString*)tableName; //Tested
-(FMDatabaseQueue*)getFMDBQueue;

@end