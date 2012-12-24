/**
 * Clever programming language
 * Copyright (c) 2011-2012 Clever Team
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef CLEVER_COMPILER_H
#define CLEVER_COMPILER_H

#include <vector>
#include "compiler/clever.h"
#include "vm/opcode.h"

namespace clever {

class CString;

/**
 * Intermediate representation
 */
struct IR {
	IR(Opcode opcode, int op1, int op2)
		: m_opcode(opcode), m_op1(op1), m_op2(op2), m_result(NULL) {}

	int m_opcode, m_op1, m_op2;
	void* m_result;
};

typedef std::vector<IR> IRVector;

/**
 * Compiler representation
 */
class Compiler {
public:
	Compiler() {}

	~Compiler() {}
	/**
	 * Starts the compilation phase
	 */
	void init() {}
	/**
	 * Ends the compilation phase
	 */
	void end() {}
	/**
	 * Shutdown the compiler freeing all resources
	 */
	void shutdown();

	const IRVector& getIR() const { return m_ir; }

	/**
	 * Compilation methods
	 */
	void varDeclaration(const CString*);
private:
	IRVector m_ir;
};

} // clever

#endif // CLEVER_COMPILER_H
