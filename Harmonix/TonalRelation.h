//
//  TonalRelation.h
//  Harmonix
//
//  Created by Even Northug on 17.01.13.
//  Copyright (c) 2013 Even Northug. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TonalKey;

@interface TonalRelation : NSManagedObject

@property (nonatomic, retain) NSString * functionRelativeDegree;
@property (nonatomic, retain) NSString * abbrev;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) TonalKey *tonalKey;

@end
