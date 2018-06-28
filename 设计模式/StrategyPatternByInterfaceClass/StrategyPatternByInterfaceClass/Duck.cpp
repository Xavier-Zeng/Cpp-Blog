#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

Duck::~Duck() {
}

void Duck::performFly() {
	pFlyBehavior->fly();
}

void Duck::performQuack() {
	pQuackBehavior->quack();
}

void Duck::setFlyBehavior(const std::shared_ptr<FlyBehavior> rhs) {
	pFlyBehavior = rhs;
}

void Duck::setQuackBehavior(const std::shared_ptr<QuackBehavior> rhs) {
	pQuackBehavior = rhs;
}
