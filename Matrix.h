#pragma once

#include "Vector3.h"
#include"Matrix4x4.h"
#include<math.h>
#include <Novice.h>


class Matrix {
public:
	Matrix();




private:
	Vector3 scale;

	Vector3 rotate;

	Vector3 translate;

	Matrix4x4 ScaleMatrix;	

	Matrix4x4 TranslateMatrix;

	Matrix4x4 RotateMatrixXYZ;
	Matrix4x4 RotateMatrixX;
	Matrix4x4 RotateMatrixY;
	Matrix4x4 RotateMatrixZ;

public:

	Matrix4x4 worldMatrix;

	

public:
	void Update();


	Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rot, const Vector3& translate);
	Matrix4x4 MakeScaleMatrix(const Vector3& scale);

	Matrix4x4 MakeRotateMatrixX(const Vector3& rot);
	Matrix4x4 MakeRotateMatrixY(const Vector3& rot);
	Matrix4x4 MakeRotateMatrixZ(const Vector3& rot);
	

	Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

	////積
	Matrix4x4 Multiply(const Matrix4x4& mat1, const Matrix4x4& mat2);

	//正規化
	Vector3 Normalize(const Vector3& v);

};
