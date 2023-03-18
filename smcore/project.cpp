//******************************************************************************
// Copyright (C) 1999 Jim Wanner and the SourceMonitor team.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//******************************************************************************

#include "project.h"
#include <filesystem>

namespace smos
{
    namespace smcore
    {
        //******************************************************************************
        Project::Project(void)
        {
        }
        //******************************************************************************
        Project::~Project(void)
        {
        }
        //******************************************************************************
        smos::smcore::Error::ErrorCode Project::loadProject(smos::smcore::SMString filename)
        {
            if (!std::filesystem::exists(filename))
            {
                return smos::smcore::Error::ERR_PROJECT_DOES_NOT_EXIST;
            }
            return smos::smcore::Error::ERR_EVERYTHING_OK;
        }
        //******************************************************************************
        smos::smcore::Error::ErrorCode Project::saveProject(smos::smcore::SMString filename)
        {
            if (!std::filesystem::exists(filename))
            {
                return smos::smcore::Error::ERR_PROJECT_DOES_NOT_EXIST;
            }
            return smos::smcore::Error::ERR_EVERYTHING_OK;
        }
        //******************************************************************************
        smos::smcore::SMString Project::getProjectName(void)
        {
            return m_ProjectName;
        }
        //******************************************************************************
        void Project::setProjectName(smos::smcore::SMString projectName)
        {
            m_ProjectName = projectName;
        }
        //******************************************************************************
    }
}
