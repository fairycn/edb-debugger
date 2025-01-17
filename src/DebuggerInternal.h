/*
Copyright (C) 2006 - 2023 Evan Teran
						  evan.teran@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DEBUGGER_INTERNAL_H_20100301_
#define DEBUGGER_INTERNAL_H_20100301_

class QString;
class QObject;

// these are global utility functions which are not part of the exported API

namespace edb {
namespace internal {

bool register_plugin(const QString &filename, QObject *plugin);
void load_function_db();

}
}

#endif
