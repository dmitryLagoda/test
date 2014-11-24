
#import <UIKit/UIKit.h>

#import "Task.h"

@interface TaskCell : UITableViewCell {
    
}

@property (nonatomic, retain) Task *task;

- (void)configureStyle;

- (void)setInactive;

@end
