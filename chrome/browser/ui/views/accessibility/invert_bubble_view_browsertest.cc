// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/accessibility/invert_bubble_view.h"

#include <string>

#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/test/test_browser_dialog.h"
#include "ui/views/view.h"

class InvertBubbleViewBrowserTest : public DialogBrowserTest {
 public:
  InvertBubbleViewBrowserTest() {}

  // DialogBrowserTest:
  void ShowUi(const std::string& name) override {
    ShowInvertBubbleView(browser(), &anchor_);
  }

 private:
  views::View anchor_;

  DISALLOW_COPY_AND_ASSIGN(InvertBubbleViewBrowserTest);
};

// Invokes a bubble that asks the user if they want to install a high contrast
// Chrome theme.
IN_PROC_BROWSER_TEST_F(InvertBubbleViewBrowserTest, InvokeUi_default) {
  ShowAndVerifyUi();
}
