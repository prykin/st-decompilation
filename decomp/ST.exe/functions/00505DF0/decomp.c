
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintBioSonar */

void __thiscall CPanelTy::PaintBioSonar(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  CPanelTy CVar6;
  int iVar7;
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
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),0x33,0x7b,'\x01',pbVar4);
    if (*(short *)(pCVar2 + 0xc2f) != 0) {
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,0x24,0x4c,0xa4,0x2b)
      ;
      uVar5 = FUN_006b0140(0x38ae,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2840,(uint)*(ushort *)(pCVar2 + 0xc2f),uVar5);
      ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (pCVar2[0xc29] != (CPanelTy)0xff) {
      if (0x21 < (byte)pCVar2[0xc29]) {
        pCVar2[0xc29] = (CPanelTy)0x21;
      }
      CVar6 = (CPanelTy)0x0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2[0xc29] != (CPanelTy)0x0) {
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),(local_8 & 0xff) * 4 + 0x35,0x7d,
                             '\x01',pbVar4);
          CVar6 = (CPanelTy)((char)CVar6 + '\x01');
          local_8 = CONCAT31(local_8._1_3_,CVar6);
        } while ((byte)CVar6 < (byte)pCVar2[0xc29]);
      }
      if ((byte)CVar6 < 0x21) {
        iVar7 = 0x21 - (local_8 & 0xff);
        iVar3 = (local_8 & 0xff) * 4 + 0x35;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iVar3,0x7d,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x19a,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintBioSonar_007c2824);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x19a);
  return;
}

