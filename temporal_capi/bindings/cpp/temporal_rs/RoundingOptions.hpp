#ifndef temporal_rs_RoundingOptions_HPP
#define temporal_rs_RoundingOptions_HPP

#include "RoundingOptions.d.hpp"

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <memory>
#include <functional>
#include <optional>
#include "../diplomat_runtime.hpp"
#include "TemporalRoundingMode.hpp"
#include "TemporalUnit.hpp"


namespace temporal_rs {
namespace capi {
    extern "C" {
    
    
    } // extern "C"
} // namespace capi
} // namespace


inline temporal_rs::capi::RoundingOptions temporal_rs::RoundingOptions::AsFFI() const {
  return temporal_rs::capi::RoundingOptions {
    /* .largest_unit = */ largest_unit.has_value() ? (temporal_rs::capi::TemporalUnit_option{ { largest_unit.value().AsFFI() }, true }) : (temporal_rs::capi::TemporalUnit_option{ {}, false }),
    /* .smallest_unit = */ smallest_unit.has_value() ? (temporal_rs::capi::TemporalUnit_option{ { smallest_unit.value().AsFFI() }, true }) : (temporal_rs::capi::TemporalUnit_option{ {}, false }),
    /* .rounding_mode = */ rounding_mode.has_value() ? (temporal_rs::capi::TemporalRoundingMode_option{ { rounding_mode.value().AsFFI() }, true }) : (temporal_rs::capi::TemporalRoundingMode_option{ {}, false }),
    /* .increment = */ increment.has_value() ? (diplomat::capi::OptionU32{ { increment.value() }, true }) : (diplomat::capi::OptionU32{ {}, false }),
  };
}

inline temporal_rs::RoundingOptions temporal_rs::RoundingOptions::FromFFI(temporal_rs::capi::RoundingOptions c_struct) {
  return temporal_rs::RoundingOptions {
    /* .largest_unit = */ c_struct.largest_unit.is_ok ? std::optional(temporal_rs::TemporalUnit::FromFFI(c_struct.largest_unit.ok)) : std::nullopt,
    /* .smallest_unit = */ c_struct.smallest_unit.is_ok ? std::optional(temporal_rs::TemporalUnit::FromFFI(c_struct.smallest_unit.ok)) : std::nullopt,
    /* .rounding_mode = */ c_struct.rounding_mode.is_ok ? std::optional(temporal_rs::TemporalRoundingMode::FromFFI(c_struct.rounding_mode.ok)) : std::nullopt,
    /* .increment = */ c_struct.increment.is_ok ? std::optional(c_struct.increment.ok) : std::nullopt,
  };
}


#endif // temporal_rs_RoundingOptions_HPP
