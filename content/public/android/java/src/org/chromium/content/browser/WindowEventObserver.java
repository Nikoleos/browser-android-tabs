// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.content.browser;

import org.chromium.ui.base.WindowAndroid;
import org.chromium.ui.display.DisplayAndroid.DisplayAndroidObserver;

/**
 * Interface to implement if Window-related events are needed.
 * This also includes an event for {@link WindowAndroid} (not Android window).
 */
public interface WindowEventObserver extends DisplayAndroidObserver {
    /**
     * This is called when the container view is attached to a window.
     */
    default void onAttachedToWindow() {}

    /**
     * This is called when the container view is detached from a window.
     */
    default void onDetachedFromWindow() {}

    /**
     * @param gainFocus {@code true} if we're gaining focus.
     */
    default void onWindowFocusChanged(boolean gainFocus) {}

    /**
     * Notifies observer when WindowAndroid is changed.
     */
    default void onWindowAndroidChanged(WindowAndroid newWindowAndroid) {}
}
