#ifndef temporal_rs_PlainDate_D_HPP
#define temporal_rs_PlainDate_D_HPP

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <memory>
#include <functional>
#include <optional>
#include "../diplomat_runtime.hpp"

namespace temporal_rs {
namespace capi { struct Calendar; }
class Calendar;
namespace capi { struct Duration; }
class Duration;
namespace capi { struct PlainDate; }
class PlainDate;
namespace capi { struct PlainDateTime; }
class PlainDateTime;
namespace capi { struct PlainMonthDay; }
class PlainMonthDay;
namespace capi { struct PlainTime; }
class PlainTime;
namespace capi { struct PlainYearMonth; }
class PlainYearMonth;
struct DifferenceSettings;
struct PartialDate;
struct TemporalError;
class ArithmeticOverflow;
class DisplayCalendar;
}


namespace temporal_rs {
namespace capi {
    struct PlainDate;
} // namespace capi
} // namespace

namespace temporal_rs {
class PlainDate {
public:

  inline static diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> create(int32_t year, uint8_t month, uint8_t day, const temporal_rs::Calendar& calendar);

  inline static diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> try_create(int32_t year, uint8_t month, uint8_t day, const temporal_rs::Calendar& calendar);

  inline static diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> create_with_overflow(int32_t year, uint8_t month, uint8_t day, const temporal_rs::Calendar& calendar, temporal_rs::ArithmeticOverflow overflow);

  inline static diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> from_partial(temporal_rs::PartialDate partial, std::optional<temporal_rs::ArithmeticOverflow> overflow);

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> with(temporal_rs::PartialDate partial, std::optional<temporal_rs::ArithmeticOverflow> overflow) const;

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> with_calendar(const temporal_rs::Calendar& calendar) const;

  inline int32_t iso_year() const;

  inline uint8_t iso_month() const;

  inline uint8_t iso_day() const;

  inline const temporal_rs::Calendar& calendar() const;

  inline bool is_valid() const;

  inline int32_t days_until(const temporal_rs::PlainDate& other) const;

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> add(const temporal_rs::Duration& duration, std::optional<temporal_rs::ArithmeticOverflow> overflow) const;

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainDate>, temporal_rs::TemporalError> subtract(const temporal_rs::Duration& duration, std::optional<temporal_rs::ArithmeticOverflow> overflow) const;

  inline diplomat::result<std::unique_ptr<temporal_rs::Duration>, temporal_rs::TemporalError> until(const temporal_rs::PlainDate& other, temporal_rs::DifferenceSettings settings) const;

  inline diplomat::result<std::unique_ptr<temporal_rs::Duration>, temporal_rs::TemporalError> since(const temporal_rs::PlainDate& other, temporal_rs::DifferenceSettings settings) const;

  inline diplomat::result<int32_t, temporal_rs::TemporalError> year() const;

  inline diplomat::result<uint8_t, temporal_rs::TemporalError> month() const;

  inline diplomat::result<std::string, temporal_rs::TemporalError> month_code() const;

  inline diplomat::result<uint8_t, temporal_rs::TemporalError> day() const;

  inline diplomat::result<uint16_t, temporal_rs::TemporalError> day_of_week() const;

  inline diplomat::result<uint16_t, temporal_rs::TemporalError> day_of_year() const;

  inline diplomat::result<std::optional<uint16_t>, temporal_rs::TemporalError> week_of_year() const;

  inline diplomat::result<std::optional<int32_t>, temporal_rs::TemporalError> year_of_week() const;

  inline diplomat::result<uint16_t, temporal_rs::TemporalError> days_in_week() const;

  inline diplomat::result<uint16_t, temporal_rs::TemporalError> days_in_month() const;

  inline diplomat::result<uint16_t, temporal_rs::TemporalError> days_in_year() const;

  inline diplomat::result<uint16_t, temporal_rs::TemporalError> months_in_year() const;

  inline diplomat::result<bool, temporal_rs::TemporalError> in_leap_year() const;

  inline diplomat::result<std::string, temporal_rs::TemporalError> era() const;

  inline diplomat::result<std::optional<int32_t>, temporal_rs::TemporalError> era_year() const;

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainDateTime>, temporal_rs::TemporalError> to_date_time(const temporal_rs::PlainTime* time) const;

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainMonthDay>, temporal_rs::TemporalError> to_month_day() const;

  inline diplomat::result<std::unique_ptr<temporal_rs::PlainYearMonth>, temporal_rs::TemporalError> to_year_month() const;

  inline std::string to_ixdtf_string(temporal_rs::DisplayCalendar display_calendar) const;

  inline const temporal_rs::capi::PlainDate* AsFFI() const;
  inline temporal_rs::capi::PlainDate* AsFFI();
  inline static const temporal_rs::PlainDate* FromFFI(const temporal_rs::capi::PlainDate* ptr);
  inline static temporal_rs::PlainDate* FromFFI(temporal_rs::capi::PlainDate* ptr);
  inline static void operator delete(void* ptr);
private:
  PlainDate() = delete;
  PlainDate(const temporal_rs::PlainDate&) = delete;
  PlainDate(temporal_rs::PlainDate&&) noexcept = delete;
  PlainDate operator=(const temporal_rs::PlainDate&) = delete;
  PlainDate operator=(temporal_rs::PlainDate&&) noexcept = delete;
  static void operator delete[](void*, size_t) = delete;
};

} // namespace
#endif // temporal_rs_PlainDate_D_HPP
