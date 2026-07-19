
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
  InternalExceptionFrame IStack_58;
  uint uStack_14;
  CPanelTy *pCStack_10;
  uint uStack_c;
  uint uStack_8;
  
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pCStack_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_10;
  if (iVar4 == 0) {
    iVar4 = FUN_0070b3a0(*(int *)(pCStack_10 + 0x2b2),0);
    iVar4 = (*(int *)(*(int *)(pCVar2 + 0x18c) + 4) - *(int *)(iVar4 + 4)) / 2;
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),-(uint)(DAT_0080874e != '\x01') & 6);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4,0x50,'\x01',pbVar5);
    uStack_8 = uStack_8 & 0xffffff00;
    if (pCVar2[0xbb6] != (CPanelTy)0x0) {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4 + 3 + (uStack_8 & 0xff) * 4,0x53,
                           '\x01',pbVar5);
        CVar3 = (CPanelTy)((byte)uStack_8 + 1);
        uStack_8 = CONCAT31(uStack_8._1_3_,CVar3);
      } while ((byte)CVar3 < (byte)pCVar2[0xbb6]);
    }
    uVar8 = uStack_8 & 0xff;
    uStack_c = CONCAT31(uStack_c._1_3_,(byte)uStack_8);
    uStack_14 = uVar8;
    if (uVar8 < (byte)pCVar2[2999] + uVar8) {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),5);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4 + 3 + uVar8 * 4,0x53,'\x01',pbVar5
                          );
        bVar7 = (byte)uStack_c + 1;
        uStack_c = CONCAT31(uStack_c._1_3_,bVar7);
        uVar8 = (uint)bVar7;
      } while ((int)uVar8 < (int)((byte)pCVar2[2999] + uStack_14));
    }
    uVar8 = uStack_c & 0xff;
    uStack_8._0_1_ = (byte)uStack_c;
    uStack_14 = uVar8;
    if (uVar8 < (byte)pCVar2[0xbb5] + uVar8) {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar4 + 3 + uVar8 * 4,0x53,'\x01',pbVar5
                          );
        uStack_8._0_1_ = (byte)uStack_8 + 1;
        uVar8 = (uint)(byte)uStack_8;
      } while ((int)uVar8 < (int)((byte)pCVar2[0xbb5] + uStack_14));
    }
    g_currentExceptionFrame = IStack_58.previous;
    return;
  }
  g_currentExceptionFrame = IStack_58.previous;
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

