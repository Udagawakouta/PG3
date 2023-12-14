#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;

	// 面積を求める
	virtual void Size() = 0;

	// その値を表示する関数
	virtual void Draw() = 0;

protected:
	float Result_;
};

