/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTShadowView.h>
#import <React/RCTSurfaceRootShadowViewDelegate.h>
#if __has_include(<ReactYoga/YGEnums.h>)
#import <ReactYoga/YGEnums.h>
#else
#import <yoga/YGEnums.h>
#endif

@interface RCTSurfaceRootShadowView : RCTShadowView

@property (nonatomic, assign, readonly) CGSize minimumSize;
@property (nonatomic, assign, readonly) CGSize maximumSize;

- (void)setMinimumSize:(CGSize)size maximumSize:(CGSize)maximumSize;

@property (nonatomic, assign, readonly) CGSize intrinsicSize;

@property (nonatomic, weak) id<RCTSurfaceRootShadowViewDelegate> delegate;

/**
 * Layout direction (LTR or RTL) inherited from native environment and
 * is using as a base direction value in layout engine.
 * Defaults to value inferred from current locale.
 */
@property (nonatomic, assign) YGDirection baseDirection;

- (void)layoutWithAffectedShadowViews:(NSHashTable<RCTShadowView *> *)affectedShadowViews;

@end
