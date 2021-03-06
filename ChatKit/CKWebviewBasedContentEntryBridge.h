/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "CKContentEntryBridge.h"

@class NSMutableArray;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge {
	NSMutableArray* _resources;
	int _composeResourcePoolID;
}
-(id)init;
-(void)dealloc;
-(id)newContentViewWithFrame:(CGRect)frame;
-(void)setMessageComposition:(id)composition;
-(id)messageComposition;
-(void)setMessageParts:(id)parts;
-(id)attachments;
-(id)messageParts;
-(void)insertMessagePart:(id)part;
-(BOOL)hasContent;
-(id)supportedPasteboardTypesInTextContentView:(id)textContentView;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index inTextContentView:(id)textContentView;
-(void)richContentView:(id)view didRemoveImage:(id)image;
-(void)richContentView:(id)view didInsertImage:(id)image;
-(id)_textView;
-(void)_resetResourcePool;
-(id)_nodeForImagePart:(id)imagePart forRichContentView:(id)richContentView;
-(id)_htmlForMessagePart:(id)messagePart;
@end

