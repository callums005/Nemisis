#pragma once

#include <string>
#include <sstream>
#include <chrono>
#include <ctime>

namespace Nemisis
{
	struct DateTime {
		DateTime(int year, int month, int day,
			int hour, int minute, int second)
			: Year(year), Month(month), Day(day),
			Hour(hour), Minute(minute), Second(second)
		{}

		int Year;
		int Month;
		int Day;
		int Hour;
		int Minute;
		int Second;

		std::string ToString() const {
			std::stringstream stringBuilder;

			stringBuilder << Day << "/" << Month << "/" << Year << "T" << Hour << ":" << Minute << ":" << Second;

			return stringBuilder.str();	
		}

		static DateTime Now()
		{
			std::chrono::time_point now = std::chrono::system_clock::now();
			std::time_t now_time = std::chrono::system_clock::to_time_t(now);
			std::tm local_time;

			localtime_s(&local_time, &now_time);

			return DateTime(
				1900 + local_time.tm_year,
				1 + local_time.tm_mon,
				local_time.tm_mday,
				local_time.tm_hour,
				local_time.tm_min,
				local_time.tm_sec
			);
		}
	};

}