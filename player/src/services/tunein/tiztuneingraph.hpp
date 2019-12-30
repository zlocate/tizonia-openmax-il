/**
 * Copyright (C) 2011-2019 Aratelia Limited - Juan A. Rubio
 *
 * This file is part of Tizonia
 *
 * Tizonia is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Tizonia is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tizonia.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file   tiztuneingraph.hpp
 * @author Juan A. Rubio <juan.rubio@aratelia.com>
 *
 * @brief  Tunein streaming service graph
 *
 *
 */

#ifndef TIZTUNEINGRAPH_HPP
#define TIZTUNEINGRAPH_HPP

#include <boost/any.hpp>

#include "tizgraph.hpp"

namespace tiz
{
  namespace graph
  {
    // Forward declarations
    class cmd;
    class ops;

    class tunein : public graph
    {

    public:
      explicit tunein ();
      ~tunein ();

    protected:
      bool dispatch_cmd (const tiz::graph::cmd *p_cmd);
      ops *do_init ();

    protected:
      boost::any fsm_;
    };

  }  // namespace graph
}  // namespace tiz

#endif  // TIZTUNEINGRAPH_HPP