
void thunk_FUN_00521900(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006b1a50(DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(iStack_8 + 0x188));
    iVar2 = *(int *)(iStack_8 + 0x18c) - *(int *)(iStack_8 + 0x48);
    *(int *)(iStack_8 + 0x44) = iVar2;
    *(int *)(iStack_8 + 0x174) = iVar2 + *(int *)(iStack_8 + 0x48);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_intercom_cpp_007c401c,0x22,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c401c,0x22);
  return;
}

