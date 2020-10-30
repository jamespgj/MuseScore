//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2020 MuseScore BVBA and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================

#ifndef MU_NOTATION_INOTATIONACCESSIBILITY_H
#define MU_NOTATION_INOTATIONACCESSIBILITY_H

#include "retval.h"

namespace mu {
namespace notation {
class INotationAccessibility
{
public:
    virtual ~INotationAccessibility() = default;

    virtual ValCh<std::string> accessibilityInfo() const = 0;
};

using INotationAccessibilityPtr = std::shared_ptr<INotationAccessibility>;
}
}

#endif // MU_NOTATION_INOTATIONACCESSIBILITY_H
