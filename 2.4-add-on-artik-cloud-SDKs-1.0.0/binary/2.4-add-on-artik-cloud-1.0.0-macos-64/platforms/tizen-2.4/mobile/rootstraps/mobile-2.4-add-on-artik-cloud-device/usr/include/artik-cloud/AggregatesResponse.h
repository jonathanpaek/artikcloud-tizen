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
 * AggregatesResponse.h
 *
 * Aggregates Response
 */

#ifndef _AggregatesResponse_H_
#define _AggregatesResponse_H_


#include <string>
#include "AggregateData.h"
#include <list>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Aggregates Response
 *
 */

class AggregatesResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	AggregatesResponse();
	AggregatesResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~AggregatesResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<AggregateData> getData();

	/*! \brief Set 
	 */
	void setData(std::list <AggregateData> data);
	/*! \brief Get 
	 */
	long long getEndDate();

	/*! \brief Set 
	 */
	void setEndDate(long long  endDate);
	/*! \brief Get 
	 */
	std::string getField();

	/*! \brief Set 
	 */
	void setField(std::string  field);
	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);
	/*! \brief Get 
	 */
	int getSize();

	/*! \brief Set 
	 */
	void setSize(int  size);
	/*! \brief Get 
	 */
	long long getStartDate();

	/*! \brief Set 
	 */
	void setStartDate(long long  startDate);

private:
	std::list <AggregateData>data;
	long long endDate;
	std::string field;
	std::string sdid;
	int size;
	long long startDate;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _AggregatesResponse_H_ */
