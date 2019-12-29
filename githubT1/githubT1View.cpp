
// githubT1View.cpp: CgithubT1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "githubT1.h"
#endif

#include "githubT1Doc.h"
#include "githubT1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CgithubT1View

IMPLEMENT_DYNCREATE(CgithubT1View, CView)

BEGIN_MESSAGE_MAP(CgithubT1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CgithubT1View 构造/析构

CgithubT1View::CgithubT1View() noexcept
{
	// TODO: 在此处添加构造代码

}

CgithubT1View::~CgithubT1View()
{
}

BOOL CgithubT1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CgithubT1View 绘图

void CgithubT1View::OnDraw(CDC* /*pDC*/)
{
	CgithubT1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CgithubT1View 打印

BOOL CgithubT1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CgithubT1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CgithubT1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CgithubT1View 诊断

#ifdef _DEBUG
void CgithubT1View::AssertValid() const
{
	CView::AssertValid();
}

void CgithubT1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CgithubT1Doc* CgithubT1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CgithubT1Doc)));
	return (CgithubT1Doc*)m_pDocument;
}
#endif //_DEBUG


// CgithubT1View 消息处理程序
