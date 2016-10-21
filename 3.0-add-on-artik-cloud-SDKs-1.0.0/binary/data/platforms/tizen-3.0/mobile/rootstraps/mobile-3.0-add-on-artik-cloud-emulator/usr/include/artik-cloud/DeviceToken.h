/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * DeviceToken.h
 *
 * Device Token
 */

#ifndef _DeviceToken_H_
#define _DeviceToken_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Device Token
 *
 */

class DeviceToken : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceToken();
	DeviceToken(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~DeviceToken();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAccessToken();

	/*! \brief Set 
	 */
	void setAccessToken(std::string  accessToken);
	/*! \brief Get 
	 */
	std::string getUid();

	/*! \brief Set 
	 */
	void setUid(std::string  uid);
	/*! \brief Get 
	 */
	std::string getDid();

	/*! \brief Set 
	 */
	void setDid(std::string  did);
	/*! \brief Get 
	 */
	std::string getCid();

	/*! \brief Set 
	 */
	void setCid(std::string  cid);

private:
	std::string accessToken;
	std::string uid;
	std::string did;
	std::string cid;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _DeviceToken_H_ */
