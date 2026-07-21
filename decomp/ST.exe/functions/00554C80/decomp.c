
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::DrawLineCR */

void __thiscall cLoadingTy::DrawLineCR(cLoadingTy *this,uint *param_1)

{
  code *pcVar1;
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;
  
  local_8 = this;
  sub_00555570(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pcVar2 = local_8;
  if (iVar3 == 0) {
    thunk_FUN_00555680(local_8,(char *)param_1);
    FUN_006b4170((AnonShape_006C7610_838EDECF *)pcVar2->field_0004,0,
                 pcVar2->field_0014 + pcVar2->field_000C,pcVar2->field_0010 + pcVar2->field_0018,
                 pcVar2->field_001C,pcVar2->field_0034,0);
    ccFntTy::WrStr(pcVar2->field_0008,param_1,pcVar2->field_000C,pcVar2->field_0010,
                   pcVar2->field_0024);
    iVar3 = pcVar2->field_0018 + pcVar2->field_0010;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    Library::DKW::DDX::FUN_006b42d0
              ((uint)DAT_0080759c,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0000,(uint *)0x0,iVar4,
               iVar3,pcVar2->field_001C,pcVar2->field_0034);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    Library::DKW::DDX::FUN_006b4680
              (DAT_0080759c,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0004,(uint *)0x0,iVar4,iVar3,
               pcVar2->field_001C,pcVar2->field_0034,0);
    iVar3 = pcVar2->field_0038 + 1;
    pcVar2->field_0038 = iVar3;
    if (iVar3 < (int)pcVar2->field_0030) {
      pcVar2->field_0010 = pcVar2->field_0010 + pcVar2->field_0034;
    }
    else {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B84D0_7C7D97C6 *)pcVar2->field_0004,0,pcVar2->field_0014,
                 pcVar2->field_0018,(byte *)pcVar2->field_0004,0,pcVar2->field_0014,
                 pcVar2->field_0034 + pcVar2->field_0018,pcVar2->field_001C,
                 pcVar2->field_0020 - pcVar2->field_0034);
      FUN_006b4170((AnonShape_006C7610_838EDECF *)pcVar2->field_0004,0,
                   pcVar2->field_0014 + pcVar2->field_000C,pcVar2->field_0010 + pcVar2->field_0018,
                   pcVar2->field_001C,pcVar2->field_0034,0);
      Library::DKW::DDX::FUN_006b42d0
                ((uint)DAT_0080759c,pcVar2->field_0014,pcVar2->field_0018,
                 (BITMAPINFO *)pcVar2->field_0000,(uint *)0x0,pcVar2->field_0014,pcVar2->field_0018,
                 pcVar2->field_001C,pcVar2->field_0020);
      Library::DKW::DDX::FUN_006b4680
                (DAT_0080759c,pcVar2->field_0014,pcVar2->field_0018,(BITMAPINFO *)pcVar2->field_0004
                 ,(uint *)0x0,pcVar2->field_0014,pcVar2->field_0018,pcVar2->field_001C,
                 pcVar2->field_0020,0);
    }
    Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
    if ((code *)pcVar2->field_0058 != (code *)0x0) {
      (*(code *)pcVar2->field_0058)(pcVar2->field_0054);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0xf2,0,iVar3,&DAT_007a4ccc,
                             s_cLoadingTy__DrawLineCR_007c8f98);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_grig_loading_cpp_007c8f0c,0xf3);
  return;
}

