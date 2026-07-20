
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::InitBldLabPanel */

void __thiscall BldLabPanelTy::InitBldLabPanel(BldLabPanelTy *this)

{
  code *pcVar1;
  BldLabPanelTy *this_00;
  int errorCode;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  BldLabPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  this_00 = local_8;
  if (errorCode == 0) {
    g_prodPanel_00801680 = (ProdPanelTy *)local_8;
    puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x28,0x30,10);
    this_00->field_027A = puVar2;
    this_00->field_003C = this_00->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar3 = cMf32::RecGet(DAT_00806790,1,s_BKG_BUILDLABW_007c1918,(int *)0x0,1);
    this_00->field_0184 = puVar3;
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_0188 = puVar3;
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_OBJSD_007c1908,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_018C = puVar3;
    ProdPanelTy::InitProdPanel
              ((ProdPanelTy *)this_00,0x2726,0x3f,2,0xc1,0xc,0x81,99,100,0xc0,99,0x25,0x14,0x31,
               s_OBJS_0_007c1900);
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x1d,0,errorCode,&DAT_007a4ccc
                             ,s_BldLabPanelTy__InitBldLabPanel_007c18d8);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldlab_cpp_007c18b4,0x1d);
  return;
}

