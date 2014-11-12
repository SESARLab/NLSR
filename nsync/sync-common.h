/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (c) 2014  University of Memphis,
 *                     Regents of the University of California
 *
 * This file is part of NLSR (Named-data Link State Routing).
 * See AUTHORS.md for complete list of NLSR authors and contributors.
 *
 * NLSR is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * NLSR is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * NLSR, e.g., in COPYING.md file.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

#ifndef NSYNC_SYNC_COMMON_HPP
#define NSYNC_SYNC_COMMON_HPP

#include <boost/exception/all.hpp>

#include <ndn-cxx/common.hpp>

#include <tuple>

namespace Sync {

using ndn::bind;
using ndn::function;

using ndn::make_shared;
using ndn::shared_ptr;
using ndn::weak_ptr;

using ndn::dynamic_pointer_cast;
using ndn::static_pointer_cast;

using ndn::_1;
using ndn::_2;
using ndn::_3;
using ndn::_4;
using ndn::_5;
using ndn::_6;
using ndn::_7;
using ndn::_8;
using ndn::_9;

using std::tuple;
using std::make_tuple;
using std::tie;

} // namespace Sync

#endif // NSYNC_SYNC_COMMON_HPP