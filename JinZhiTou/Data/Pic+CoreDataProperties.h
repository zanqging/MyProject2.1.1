//
//  Pic+CoreDataProperties.h
//  JinZhiTou
//
//  Created by air on 16/1/5.
//  Copyright © 2016年 金指投. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Pic.h"

NS_ASSUME_NONNULL_BEGIN

@interface Pic (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *url;
@property (nullable, nonatomic, retain) Cycle *cycle;

@end

NS_ASSUME_NONNULL_END
