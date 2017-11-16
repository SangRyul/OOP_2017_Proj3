#ifndef _COBJECT_
#define _COBJECT_
#include "d3dUtility.h"

class CObject
{
protected:
	float center_x, center_y, center_z;
	D3DXMATRIX mLocal;

public:
	virtual void destroy() = 0;

	void setPosition(float x, float y, float z); // ��ü�� �߽� ��ġ�� ����
	void setLocalTransform(const D3DXMATRIX& mLocal); // ��ü�� Local Transform Matrix ����

	D3DXVECTOR3 getPosition() const; // ��ü�� �߽� ��ġ�� ��ȯ
	D3DXMATRIX getLocalTransform() const; // ��ü�� Local Transform Matrix ��ȯ

	virtual ~CObject();
};

#endif

