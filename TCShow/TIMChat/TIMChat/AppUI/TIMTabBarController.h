//
//  TIMTabBarController.h
//  TIMChat
//
//  Created by AlexiChen on 16/3/7.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChatViewController;

@interface TIMTabBarController : UITabBarController

- (void)pushToChatViewControllerWith:(IMAUser *)user;

- (ChatViewController *)chatViewController;

@end
