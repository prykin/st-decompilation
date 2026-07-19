
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBRLife */

void __thiscall CPanelTy::PaintBRLife(CPanelTy *this,int param_1)

{
  byte bVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar3 = local_c;
  if (iVar4 == 0) {
    FUN_006b4170(local_c->field_018C,0,param_1 + 0x35,0x70,7,0x21,0);
    bVar1 = pCVar3->field_0xbc8;
    cVar7 = (char)(((uint)bVar1 * 0x21) / 100);
    local_8 = CONCAT31(local_8._1_3_,cVar7);
    if ((bVar1 != 0) && (cVar7 == '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if (bVar1 < 0x46) {
      iVar4 = (-(uint)(bVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = local_8 & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)pCVar3->field_018C,0,param_1 + 0x36,0x91 - uVar5,
               *(int *)&pCVar3->field_0x28a,0,iVar4,
               *(int *)(*(int *)&pCVar3->field_0x28a + 8) - uVar5,5,uVar5);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x40,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__PaintBRLife_007c2588);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x40);
  return;
}

