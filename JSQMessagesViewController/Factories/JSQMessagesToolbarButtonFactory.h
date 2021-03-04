//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  `JSQMessagesToolbarButtonFactory` is a factory that provides a means for creating the default
 *  toolbar button items to be displayed in the content view of a `JSQMessagesInputToolbar`.
 */
@interface JSQMessagesToolbarButtonFactory : NSObject

/**
 *  Creates and returns a new instance of `JSQMessagesToolbarButtonFactory` that uses
 *  the default font for creating buttons.
 *
 *  @return An initialized `JSQMessagesToolbarButtonFactory` object.
 */
- (instancetype)init;

/**
 *  Creates and returns a new instance of `JSQMessagesToolbarButtonFactory` that uses
 *  the specified font for creating buttons.
 *
 *  @param font The font that will be used for the buttons produced by the factory.
 *
 *  @return An initialized `JSQMessagesToolbarButtonFactory` object.
 */
- (instancetype)initWithFont:(UIFont *)font NS_DESIGNATED_INITIALIZER;

/**
 *  Creates and returns a new button that is styled as the default accessory button. 
 *  The button has a paper clip icon image and no text.
 *
 *  创建一个默认附件按钮。这个按钮有一个回形针图标，没有文字。
 *
 *  @return A newly created button.
 */
- (UIButton *)defaultAccessoryButtonItem;

/**
 *  Creates and returns a new button that is styled as the default send button. 
 *  The button has title text `@"Send"` and no image.
 *
 *  创建一个默认发送按钮。这个按钮有一个标题 “发送”，没有图标。
 *
 *  @return A newly created button.
 */
- (UIButton *)defaultSendButtonItem;

@end

NS_ASSUME_NONNULL_END
