/**
 * @file arena_entity_factory.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_ARENA_ENTITY_FACTORY_H_
#define PROJECT_SRC_ARENA_ENTITY_FACTORY_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
#include "src/arena_entity.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
NAMESPACE_BEGIN(csci3081);

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
 /**
* @brief ArenaEntityFactory interface that AEMobile and AEImmobile inherit from
*/
class ArenaEntityFactory {
 public:
/**
 * @brief destructor
 */
  virtual ~ArenaEntityFactory() {}

/**
 * @brief create an ArenaEntity of given type
 */
  virtual ArenaEntity* create(const json_object& entity_config) = 0;
};

NAMESPACE_END(csci3081);

#endif /* PROJECT_SRC_ARENA_ENTITY_FACTORY_H_ */
