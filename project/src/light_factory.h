/**
 * @file light_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_LIGHT_FACTORY_H_
#define PROJECT_SRC_LIGHT_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity_factory.h"
#include "src/light.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief LightFactory factory that creates Light objects
 */
class LightFactory : public ArenaEntityFactory {
 public:
/**
 * @brief default constructor for LightFactory
 */
  LightFactory();

/**
 * @brief destructor for BraitenbergVehicleFactory
 */
  ~LightFactory();

/**
 * @brief create method inherited from arena_entity_factory that creates Light objects
 */
  ArenaEntity* create(const json_object& entity_config) override;
};

NAMESPACE_END(csci3081);

#endif /* PROJECT_SRC_LIGHT_FACTORY_H_*/
