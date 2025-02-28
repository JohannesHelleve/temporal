#ifndef temporal_rs_I128Nanoseconds_D_HPP
#define temporal_rs_I128Nanoseconds_D_HPP

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <memory>
#include <optional>
#include "../diplomat_runtime.hpp"


namespace temporal_rs {
namespace capi {
    struct I128Nanoseconds {
      int64_t high;
      uint64_t low;
    };
    
    typedef struct I128Nanoseconds_option {union { I128Nanoseconds ok; }; bool is_ok; } I128Nanoseconds_option;
} // namespace capi
} // namespace


namespace temporal_rs {
struct I128Nanoseconds {
  int64_t high;
  uint64_t low;

  inline temporal_rs::capi::I128Nanoseconds AsFFI() const;
  inline static temporal_rs::I128Nanoseconds FromFFI(temporal_rs::capi::I128Nanoseconds c_struct);
};

} // namespace
#endif // temporal_rs_I128Nanoseconds_D_HPP
