
undefined4 * __thiscall TraksClassTy::PrepareToSave(TraksClassTy *this,uint *param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame IStack_58;
  TraksClassTy *pTStack_14;
  uint uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined4 *)0x0;
  uStack_10 = 0;
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pTStack_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  uVar5 = uStack_10;
  if (errorCode == 0) {
    *param_1 = uStack_10 + 0x5d;
    puStack_8 = Library::DKW::LIB::FUN_006aac10(uStack_10 + 0x5d);
    *puStack_8 = 0x46;
    puStack_8[1] = 0xff;
    puStack_8[2] = 2;
    puStack_8[5] = 1;
    puStack_8[6] = *(undefined4 *)(pTStack_14 + 0x1c);
    *(bool *)(puStack_8 + 7) = puStack_c != (undefined4 *)0x0;
    if (puStack_c != (undefined4 *)0x0) {
      puVar3 = puStack_c;
      puVar6 = puStack_8 + 0x17;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_006ab060(&puStack_c);
    }
    g_currentExceptionFrame = IStack_58.previous;
    return puStack_8;
  }
  g_currentExceptionFrame = IStack_58.previous;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  if (puStack_c != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_c);
  }
  iVar2 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0xed,0,errorCode,&DAT_007a4ccc,
                             s_TraksClassTy__PrepareToSave_erro_007c91a8);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_grig_traks_cpp_007c9104,0xee);
  return (undefined4 *)0x0;
}

