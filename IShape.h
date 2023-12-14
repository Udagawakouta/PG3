#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;

	// –ÊÏ‚ğ‹‚ß‚é
	virtual void Size() = 0;

	// ‚»‚Ì’l‚ğ•\¦‚·‚éŠÖ”
	virtual void Draw() = 0;

protected:
	float Result_;
};

