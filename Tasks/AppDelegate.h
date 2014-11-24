

#import <UIKit/UIKit.h>

@class TasksTableViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, strong) UINavigationController *navigationController;
@property (nonatomic, strong) TasksTableViewController *tasksTableViewController;

@end
