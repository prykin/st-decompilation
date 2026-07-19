
void __thiscall HelpStringTy::OutStr(HelpStringTy *this)

{
  code *pcVar1;
  HelpStringTy *pHVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  HelpStringTy *pHStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pHStack_8 = this;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e;
    FUN_006b5f80(DAT_008075a8,iVar3,DAT_00806734 + -0x1a,(DAT_00806730 - iVar3) + -0x87,0x12);
    pHVar2 = pHStack_8;
    iVar3 = *(int *)(pHStack_8 + 0x12a);
    uVar7 = *(uint *)(iVar3 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (pHVar2[0x18] != (HelpStringTy)0x0) {
      ccFntTy::SetSurf(*(ccFntTy **)(pHVar2 + 0x11e),*(int *)(pHVar2 + 0x12a),0,0,0,0,0);
      ccFntTy::WrStr(*(ccFntTy **)(pHVar2 + 0x11e),(uint *)(pHVar2 + 0x18),0,-1,
                     (uint)(byte)pHVar2[0x11d]);
    }
    thunk_FUN_005403c0((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e,DAT_00806734 + -0x1a,
                       '\x01',*(BITMAPINFO **)(pHVar2 + 0x12a));
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x1b,0,iVar3,&DAT_007a4ccc,
                             s_HelpStringTy__OutStr_007c3e74);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x1b);
  return;
}

