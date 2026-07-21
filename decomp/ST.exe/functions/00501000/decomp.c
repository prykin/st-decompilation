
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBEnergy */

void __thiscall CPanelTy::PaintBEnergy(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,0);
    iVar3 = (*(int *)(pCVar2->field_018C + 4) - *(int *)(iVar3 + 4)) / 2;
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,
                                  -(uint)(DAT_0080874e != '\x01') & 6);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,iVar3,0x50,'\x01',pbVar4);
    if (pCVar2->field_0BCD != 0xff) {
      if (0x28 < (byte)pCVar2->field_0BCD) {
        pCVar2->field_0BCD = 0x28;
      }
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0BCD != '\0') {
        do {
          pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,iVar3 + 3 + (local_8 & 0xff) * 4,
                 0x53,'\x01',pbVar4);
          bVar6 = bVar6 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < (byte)pCVar2->field_0BCD);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x21,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintBEnergy_007c254c);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x21);
  return;
}

