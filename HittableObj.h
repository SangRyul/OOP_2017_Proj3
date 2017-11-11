#ifndef _HITTABLEOBJ_
#define _HITTABLEOBJ_

#define noexcept throw ()
#define BLANK_BLOCK {}
class CSphere;

class Hittable
{
public:
	virtual bool hasIntersected(CSphere& ball) const noexcept = 0; // ���ƴ� ��(�浹�ߴ���) Ȯ��
	virtual void hitBy(CSphere& ball) noexcept = 0; // �浹�ߴ��� �˻��ϰ� ���� ���� ������ �ٲ�

	virtual ~Hittable() BLANK_BLOCK
};

#endif
