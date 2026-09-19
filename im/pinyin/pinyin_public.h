#pragma once

#include <string>
#include <vector>
#include <utility>

#include <fcitx-utils/addoninstance.h>

namespace fcitx {

using PinyinKeyHint = std::pair<char, std::string>;

FCITX_ADDON_DECLARE_FUNCTION(
    Pinyin,
    shuangpinKeyHints,
    std::vector<PinyinKeyHint>()
);

} // namespace fcitx