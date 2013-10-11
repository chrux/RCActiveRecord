//
//  RCCriteria.h
//  RCActiveRecord
//
//  Created by Ryan Copley on 8/14/13.
//  Copyright (c) 2013 Ryan Copley. All rights reserved.
//

#ifndef __RCActiveRecordComparisonOperators__
#define __RCActiveRecordComparisonOperators__

typedef enum  {
    /* Typical operators */
    RCGreaterThan = 0,
    RCGreaterThanOrEqualTo,
    RCEqualTo,
    RCLessThan,
    RCLessThanOrEqualTo,
    RCNotEqualTo,
    
    RCLike,
    
    RCIn, // Arrays only
    RCNotIn, // Arrays only
    
} RCActiveRecordComparisonOperator;

typedef enum {
    RCAscend,
    RCDescend,
    RCNoOrder
} RCActiveRecordOrder;
#endif


@interface RCCriteria : NSObject{
    int limit;
    NSMutableArray* conditions;
    RCActiveRecordOrder order;
    NSString* orderColumn;
}

-(void) limit:(int) count;
-(void) addCondition:(NSString*) columnName is:(RCActiveRecordComparisonOperator) comparer to:(id) value;
-(void) orderByAsc:(NSString*) columnName;
-(void) orderByDesc:(NSString*) columnName;

-(NSString*) generateWhereClause;
@end
