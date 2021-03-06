/**
 * Clever programming language
 * Copyright (c) Clever Team
 *
 * This file is distributed under the MIT license. See LICENSE for details.
 */

#ifndef CLEVER_STD_CSTACK_H
#define CLEVER_STD_CSTACK_H

#include <stack>
#include "core/type.h"

namespace clever { namespace modules { namespace std {

struct CStackObject : public TypeObject {
	CStackObject() {}

	~CStackObject() {
		while (!stack.empty()) {
			clever_delref(stack.top());
			stack.pop();
		}
	}

	::std::stack<Value*> stack;
};

class CStack : public Type {
public:
	CStack()
		: Type("Stack") {}

	~CStack() {}

	virtual void init();

	// Methods
	CLEVER_METHOD(ctor);
	CLEVER_METHOD(push);
	CLEVER_METHOD(pop);
	CLEVER_METHOD(top);
	CLEVER_METHOD(size);
	CLEVER_METHOD(empty);
private:
	DISALLOW_COPY_AND_ASSIGN(CStack);
};

}}} // clever::modules::std

#endif // CLEVER_STD_CSTACK_H
