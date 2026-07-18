
void __thiscall MTaskTy::PaintMTask(MTaskTy *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  MTaskTy *pMStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pMStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pMStack_8 + 0x5d));
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x136,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd994,0x136);
  return;
}

