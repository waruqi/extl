/* ///////////////////////////////////////////////////////////////////////
 * File:		lock_selector.h		
 *
 * Created:		08.03.20				
 * Updated:		09.01.20
 *
 * Brief:		lock_selector class
 *
 * [<Home>]
 * Copyright (c) 2008-2020, Waruqi All rights reserved.
 * //////////////////////////////////////////////////////////////////// */
#ifndef EXTL_UNIX_SYNCH_LOCK_SELECTOR_H
#define EXTL_UNIX_SYNCH_LOCK_SELECTOR_H

/*!\file lock_selector.h
 * \brief lock_selector class
 */
#ifndef __cplusplus
#	error lock_selector.h need be supported by c++.
#endif

/* ///////////////////////////////////////////////////////////////////////
 * Includes
 */
#include "prefix.h"

/* ///////////////////////////////////////////////////////////////////////
 * ::extl::platform::unix namespace
 */
EXTL_UNIX_BEGIN_WHOLE_NAMESPACE

/*!\brief lock_selector class 
 *
 * \ingroup extl_group_synch
 */
struct lock_selector
{
	/// \name Types
	/// @{
	public:
		typedef event_lock					event_lock_type;
		typedef mutex_lock					mutex_lock_type;
		typedef semaphore_lock				semaphore_lock_type;
		typedef critical_lock				critical_lock_type;
		typedef critical_lock_type			lock_type;
	/// @}
};

/* ///////////////////////////////////////////////////////////////////////
 * ::extl::platform::unix namespace
 */
EXTL_UNIX_END_WHOLE_NAMESPACE	

/* //////////////////////////////////////////////////////////////////// */
#endif /* EXTL_UNIX_SYNCH_LOCK_SELECTOR_H */
/* //////////////////////////////////////////////////////////////////// */
