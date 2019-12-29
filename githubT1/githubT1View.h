
// githubT1View.h: CgithubT1View 类的接口
//

#pragma once


class CgithubT1View : public CView
{
protected: // 仅从序列化创建
	CgithubT1View() noexcept;
	DECLARE_DYNCREATE(CgithubT1View)

// 特性
public:
	CgithubT1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CgithubT1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // githubT1View.cpp 中的调试版本
inline CgithubT1Doc* CgithubT1View::GetDocument() const
   { return reinterpret_cast<CgithubT1Doc*>(m_pDocument); }
#endif

