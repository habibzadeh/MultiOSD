/*
 * This file is part of MultiOSD <https://github.com/UncleRus/MultiOSD>
 *
 * MultiOSD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef TELEMETRY_MAVLINK_MAVLINK_H_
#define TELEMETRY_MAVLINK_MAVLINK_H_

#ifdef MAIN_MODULE
#error Conflicting modules
#endif
#define MAIN_MODULE

#include "../../lib/pgmspace.h"
#include "../../config.h"

namespace telemetry
{

namespace modules
{

namespace mavlink
{

const char __name[] PROGMEM = "MAVLink";

namespace settings
{
    void init();
    void reset();
}

void init();
bool update();

}  // namespace mavlink

}  // namespace modules

}  // namespace telemetry

#endif /* TELEMETRY_MAVLINK_MAVLINK_H_ */
