/**
 * @file    Map.h
 * @ingroup Utils
 * @brief   Template helper functions for std::map
 *
 * Copyright (c) 2017 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#pragma once

#include <sstream>
#include <string>


namespace Utils {

/**
 * @brief Tells if a Map has a specific key
 * @param aMap input map
 * @param aKey input key
 * @return whether the key exists
 */
template <typename Map>
bool hasKey(const Map& aMap, const std::string& aKey) {
    return (aMap.find(aKey) != aMap.end());
}

/**
 * @brief Tells if a Map has a specific value
 * @param aMap input map
 * @param aKey input key
 * @param aValue input value
 * @return whether the value exists
 */
template <typename Map>
bool hasValue(const Map& aMap, const std::string& aKey, const std::string& aValue) {
    bool bHaveValue = false;
    const typename Map::const_iterator iPair = aMap.find(aKey);
    if (iPair != aMap.end()) {
        bHaveValue = (iPair->second == aValue);
    }
    return bHaveValue;
}

} // namespace Utils
