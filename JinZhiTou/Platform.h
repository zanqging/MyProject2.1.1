//
//  Platform.h
//  JinZhiTou
//
//  Created by air on 16/1/3.
//  Copyright © 2016年 金指投. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "DataManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface Platform : NSManagedObject
/**
 *  保存结果
 *
 *  @return 返回是否执行成功
 */
-(BOOL)save;

- (void)saveContext;
//插入数据
- (void)insertCoreData:(NSMutableArray*)dataArray;
//查询
- (NSMutableArray*)selectData:(int)pageSize andOffset:(int)currentPage;
//删除
- (void)deleteData;
//更新
- (void)updateData:(NSString*)newsId withIsLook:(NSString*)islook;


@end

NS_ASSUME_NONNULL_END

#import "Platform+CoreDataProperties.h"
