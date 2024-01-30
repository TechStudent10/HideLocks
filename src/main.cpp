#include <Geode/Geode.hpp>
#include <Geode/modify/GJItemIcon.hpp>

using namespace geode::prelude;

class $modify(GJItemIcon) {
	void changeToLockedState(float p0) {
		GJItemIcon::changeToLockedState(p0);

		CCObject* currentChild;
		CCARRAY_FOREACH(getChildren(), currentChild) {
			auto sprite = reinterpret_cast<CCSprite*>(currentChild);
			if (sprite->getZOrder() == 10) {
				sprite->setVisible(false);
			}
		}
	}
};
