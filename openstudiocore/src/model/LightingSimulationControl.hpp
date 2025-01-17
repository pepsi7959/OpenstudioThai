/**********************************************************************
 *  Copyright (c) 2008-2015, Alliance for Sustainable Energy.
 *  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 **********************************************************************/

#ifndef MODEL_LIGHTINGSIMULATIONCONTROL_HPP
#define MODEL_LIGHTINGSIMULATIONCONTROL_HPP

#include "ModelAPI.hpp"
#include "ModelObject.hpp"

namespace openstudio {
namespace model {

namespace detail {

  class LightingSimulationControl_Impl;

} // detail

/** LightingSimulationControl is a ModelObject that wraps the OpenStudio IDD object 'OS_LightingSimulationControl'. */
class MODEL_API LightingSimulationControl : public ModelObject {
 public:

  /** @name Constructors and Destructors */
  //@{

  virtual ~LightingSimulationControl() {}

  //@}
  /** @name Static Methods */
  //@{

  static IddObjectType iddObjectType();

  //@}
  /** @name Getters */
  //@{

  bool runSimulationforDesignDays() const;

  bool isRunSimulationforDesignDaysDefaulted() const;

  bool runSimulationforWeatherFileRunPeriods() const;

  bool isRunSimulationforWeatherFileRunPeriodsDefaulted() const;

  //@}
  /** @name Setters */
  //@{

  void setRunSimulationforDesignDays(bool runSimulationforDesignDays);

  void resetRunSimulationforDesignDays();

  void setRunSimulationforWeatherFileRunPeriods(bool runSimulationforWeatherFileRunPeriods);

  void resetRunSimulationforWeatherFileRunPeriods();

  //@}
 protected:
  /// @cond
  typedef detail::LightingSimulationControl_Impl ImplType;

  friend class Model;
  friend class openstudio::IdfObject;
  friend class detail::LightingSimulationControl_Impl;

  explicit LightingSimulationControl(std::shared_ptr<detail::LightingSimulationControl_Impl> impl);

  explicit LightingSimulationControl(Model& model);

  /// @endcond
 private:

  REGISTER_LOGGER("openstudio.model.LightingSimulationControl");
};

/** \relates LightingSimulationControl*/
typedef boost::optional<LightingSimulationControl> OptionalLightingSimulationControl;

/** \relates LightingSimulationControl*/
typedef std::vector<LightingSimulationControl> LightingSimulationControlVector;

} // model
} // openstudio

#endif // MODEL_LIGHTINGSIMULATIONCONTROL_HPP

