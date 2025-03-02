/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 ==============================================================================*/
#import "tensorflow_lite_support/odml/ios/image/apis/GMLImage.h"

NS_ASSUME_NONNULL_BEGIN

@interface GMLImage (Helpers)

+ (nullable GMLImage *)imageFromBundleWithClass:(Class)classObject
                                       fileName:(NSString *)name
                                         ofType:(NSString *)type
    NS_SWIFT_NAME(imageFromBundle(class:filename:type:));

@end

NS_ASSUME_NONNULL_END
