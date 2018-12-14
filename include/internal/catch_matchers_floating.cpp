/*
 *  Created by Martin on 07/11/2017.
 *
 * Distributed under the Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#include "catch_matchers_floating.h"

namespace Catch {
namespace Matchers {

Floating::WithinUlpsMatcher<double> WithinULP(double target, int maxUlpDiff) {
    return Floating::WithinUlpsMatcher<double>(target, maxUlpDiff, Floating::FloatingPointKind::Double);
}

Floating::WithinUlpsMatcher<float> WithinULP(float target, int maxUlpDiff) {
    return Floating::WithinUlpsMatcher<float>(target, maxUlpDiff, Floating::FloatingPointKind::Float);
}

} // namespace Matchers
} // namespace Catch

