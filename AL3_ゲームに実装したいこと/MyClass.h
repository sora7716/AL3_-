#pragma once

/// <summary>
/// 何らかのクラス
/// </summary>
class MyClass{

public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	MyClass() = default;

	/// <summary>
	/// デストラクタ
	/// </summary>
	~MyClass() = default;

	/// <summary>
	/// aを返す
	/// </summary>
	/// <param name="a">返す値a</param>
	/// <returns></returns>
	int ReturnValue(int a);
};

