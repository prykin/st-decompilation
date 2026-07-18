
void __cdecl thunk_FUN_005544e0(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_44 [16];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(auStack_44,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (param_1 != (uint *)0x0) {
      FUN_006f20e0(param_1);
      if ((uint *)param_1[2] != (uint *)0x0) {
        FUN_00710560((uint *)param_1[2]);
      }
      thunk_FUN_00555650((int)param_1);
      FUN_006a5e90(param_1);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0x52,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c8f0c,0x53);
  return;
}

