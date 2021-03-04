# 使用指南

*JSQMessagesViewController 入门指南* 

-----------------------------

## 版本 6.x and 7.x

````objective-c
#import <JSQMessagesViewController/JSQMessages.h>    // import all the things
````

* **教程和博客**
  * Read the [blog post](http://www.jessesquires.com/introducing-jsqmessagesvc-6-0/) about the 6.0 release!
  * Ray Wenderlich has a [great tutorial](http://www.raywenderlich.com/122148/firebase-tutorial-real-time-chat), written by [David East](https://twitter.com/_davideast). (For 7.x releases)

* **Demo 应用**
  * There's a sweet demo project: `JSQMessages.xcworkspace`.
    * Run `pod install` first.
  * Swift Example can be found in the SwiftExample folder just open the `SwiftExample.xcworkspace`.
    * Run `pod install` first.
  * [Firebase](https://www.firebase.com) also has a sweet [demo project](https://github.com/firebase/ios-swift-chat-example), and it's in Swift!
  
* **Message 消息模型**
  * 你的消息模型对象应该遵守 `JSQMessageData` 协议。
	* 当然，你也可以直接使用我们提供的 `JSQMessage` 类作为消息对象。

* **Media Attachment 媒体附件模型**
	* 你的媒体附件模型对象应该遵守 `JSQMessageMediaData` 协议。
	* 当然，你也可以使用提供的类：`JSQPhotoMediaItem`、`JSQLocationMediaItem`, `JSQVideoMediaItem`。
	* 创建自定义媒体类型很容易！只需遵循内置媒体类型所使用的模式。
	* 另请参阅 `JSQMessagesMediaViewBubbleImageMasker`，以将自定义媒体视图包装为消息气泡。

* **Avatar 头像模型**
  * 你的头像模型对象应该遵守 `JSQMessageAvatarImageDataSource` 协议。
  * 当然, 你也可以直接使用我们提供的 `JSQMessagesAvatarImage` 类作为头像模型。
  * 另请参阅 `JSQMessagesAvatarImageFactory` 以方便的创建自定义头像类型.

* **Message Bubble 消息气泡模型**
  * 你的消息气泡模型对象应该遵守 `JSQMessageBubbleImageDataSource` 协议。
  * 当然, 你也可以直接使用我们提供的 `JSQMessagesBubbleImage` 类。
  * 另请参阅 `JSQMessagesBubbleImageFactory` 和 `UIImage+JSQMessages.h` 以方便地创建自定义气泡。

* **视图控制器**
  * 创建 `JSQMessagesViewController` 的子类对象。
  * 实现 `JSQMessagesCollectionViewDataSource` 协议中所需要的方法。
  * 实现 `JSQMessagesCollectionViewDelegateFlowLayout` 协议中所需要的方法。
  * 设置 `senderId` 和 `senderDisplayName` 属性。 这些属性对应于 `JSQMessageData` 中的方法，以确定该消息是传入消息还是传出消息。

* **定制**
  * The demo project is well-commented. Please use this as a guide.
  * Demo 应用中有很好的代码注释。请使用该示例应用作为指南。

## 早期版本

抱歉，本指南不再维护早期版本。