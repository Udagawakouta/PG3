#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;

	// �ʐς����߂�
	virtual void Size() = 0;

	// ���̒l��\������֐�
	virtual void Draw() = 0;

protected:
	float Result_;
};

