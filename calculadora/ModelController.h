//
//  ModelController.h
//  calculadora
//
//  Created by Pedro Ramoneda on 6/7/16.
//  Copyright © 2016 Pedro Ramoneda. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

