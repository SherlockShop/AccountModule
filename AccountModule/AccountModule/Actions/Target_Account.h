//
//  Target_Account.h
//  AccountModule
//
//  Created by sherlock.chan on 2020/4/30.
//  Copyright © 2020 sherlock.chan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Target_Account : NSObject

/**
 * 登录
 */
-(UIViewController *)Action_nativeLoginViewController;

/**
 登录状态
 */
- (BOOL)Action_nativeLoginStatus;

/**
 登录状态改变
 */
- (NSString *)Action_nativeLoginStatusChangeNotificationName;

@end

NS_ASSUME_NONNULL_END
