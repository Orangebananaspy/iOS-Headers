//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIJSDOMFeatureNavigationDocument;

@interface SKUISplitViewTemplateElement : SKUIViewElement
{
    SKUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    int _preferredDisplayMode;
    SKUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) int preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
- (void).cxx_destruct;
- (id)_splitElementForIndex:(int)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) BOOL usesInlineSplitContent;
@property(readonly, nonatomic) SKUIViewElement *rightSplitElement;
@property(readonly) SKUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property(readonly, nonatomic) SKUIViewElement *leftSplitElement;
@property(readonly) SKUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

