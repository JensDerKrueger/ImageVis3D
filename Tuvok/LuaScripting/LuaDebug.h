/*
 For more information, please see: http://software.sci.utah.edu

 The MIT License

 Copyright (c) 2012 Scientific Computing and Imaging Institute,
 University of Utah.


 Permission is hereby granted, free of charge, to any person obtaining a
 copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 DEALINGS IN THE SOFTWARE.
 */

/**
 \file    LuaDebug.h
 \author  James Hughes
 \date    Jun 29, 2012
 \brief   Provides debugging functions within Lua.
 */

#ifndef LUADEBUG_H_
#define LUADEBUG_H_

#include "LuaMemberRegUnsafe.h"

namespace tuvok
{
class LuaScripting;
  
class LuaDebug
{
public:
  LuaDebug(LuaScripting* scripting);
  virtual ~LuaDebug();

  /// Registers debugging functions in Lua.
  void registerLuaDebugFunctions();

private:

  /// Watches the given function for changes.
  void watchFunction(const std::string& function);


  LuaMemberRegUnsafe        mMemberReg;     ///< Used for member registration.
};

} /* namespace tuvok */
#endif /* LUADEBUG_H_ */
