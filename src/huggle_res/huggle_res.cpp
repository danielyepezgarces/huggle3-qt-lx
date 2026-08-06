//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#include "huggle_res.hpp"

int qInitResources_pictures();
int qInitResources_resources();

using namespace Huggle;

int Huggle_Res::Init()
{
#ifdef HUGGLE_WIN
    qInitResources_pictures();
    qInitResources_resources();
    return 0;
#else
    return -1;
#endif
}
