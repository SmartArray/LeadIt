/**
 * @file    Measure.h
 * @ingroup Utils
 * @brief   Encapsulate a microsecond time measurement.
 *
 * Copyright (c) 2013 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#ifndef SRC_UTILS_MEASURE_H_
#define SRC_UTILS_MEASURE_H_

#include <ctime>    // time_t

namespace Utils {

/**
 * @brief   Encapsulate a microsecond time measurement.
 * @ingroup Utils
 *
 * @see #Utils::Time
 */
class Measure {
 public:
    /**
     * @brief Constructor measure and save the first time tick.
     */
    Measure();

    /**
     * @brief Measure a second time tick and return the difference since the first one.
     * @return measured time
     */
    time_t diff();

 private:
    time_t mStartTimeUs;    ///< First time measurement, from the constructor.
};

} // namespace Utils

#endif // SRC_UTILS_MEASURE_H_
