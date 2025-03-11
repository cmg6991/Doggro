#pragma once
#include "Component.h"

/// <summary>
/// 충돌처리 하는 컴포넌트
/// 2024.01.16 chlaudrl
/// </summary>

class Colider : public Component
{
public:
	Colider();
	~Colider();

	virtual void Update() override;
};

