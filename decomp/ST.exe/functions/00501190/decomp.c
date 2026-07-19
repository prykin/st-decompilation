
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintBCapacity */

void __thiscall CPanelTy::PaintBCapacity(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  CPanelTy CVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  InternalExceptionFrame local_58;
  uint local_14;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_10;
  if (iVar4 == 0) {
    iVar4 = FUN_0070b3a0(*(int *)(local_10 + 0x2b2),0);
    iVar4 = (*(int *)(*(int *)(pCVar2 + 0x18c) + 4) - *(int *)(iVar4 + 4)) / 2;
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),-(uint)(DAT_0080874e != '\x01') & 6);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4,0x50,'\x01',pbVar5);
    local_8 = local_8 & 0xffffff00;
    if (pCVar2[0xbb6] != (CPanelTy)0x0) {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4 + 3 + (local_8 & 0xff) * 4,0x53,
                           '\x01',pbVar5);
        CVar3 = (CPanelTy)((byte)local_8 + 1);
        local_8 = CONCAT31(local_8._1_3_,CVar3);
      } while ((byte)CVar3 < (byte)pCVar2[0xbb6]);
    }
    uVar8 = local_8 & 0xff;
    local_c = CONCAT31(local_c._1_3_,(byte)local_8);
    local_14 = uVar8;
    if (uVar8 < (byte)pCVar2[2999] + uVar8) {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),5);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4 + 3 + uVar8 * 4,0x53,'\x01',pbVar5
                          );
        bVar7 = (byte)local_c + 1;
        local_c = CONCAT31(local_c._1_3_,bVar7);
        uVar8 = (uint)bVar7;
      } while ((int)uVar8 < (int)((byte)pCVar2[2999] + local_14));
    }
    uVar8 = local_c & 0xff;
    local_8._0_1_ = (byte)local_c;
    local_14 = uVar8;
    if (uVar8 < (byte)pCVar2[0xbb5] + uVar8) {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4 + 3 + uVar8 * 4,0x53,'\x01',pbVar5
                          );
        local_8._0_1_ = (byte)local_8 + 1;
        uVar8 = (uint)(byte)local_8;
      } while ((int)uVar8 < (int)((byte)pCVar2[0xbb5] + local_14));
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x32,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__PaintBCapacity_007c2568);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x32);
  return;
}

