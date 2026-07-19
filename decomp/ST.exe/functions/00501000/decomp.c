
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
  CPanelTy CVar6;
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
    iVar3 = FUN_0070b3a0(*(int *)(local_c + 0x2b2),0);
    iVar3 = (*(int *)(*(int *)(pCVar2 + 0x18c) + 4) - *(int *)(iVar3 + 4)) / 2;
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),-(uint)(DAT_0080874e != '\x01') & 6);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar3,0x50,'\x01',pbVar4);
    if (pCVar2[0xbcd] != (CPanelTy)0xff) {
      if (0x28 < (byte)pCVar2[0xbcd]) {
        pCVar2[0xbcd] = (CPanelTy)0x28;
      }
      CVar6 = (CPanelTy)0x0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2[0xbcd] != (CPanelTy)0x0) {
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar3 + 3 + (local_8 & 0xff) * 4,0x53,
                             '\x01',pbVar4);
          CVar6 = (CPanelTy)((char)CVar6 + '\x01');
          local_8 = CONCAT31(local_8._1_3_,CVar6);
        } while ((byte)CVar6 < (byte)pCVar2[0xbcd]);
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

