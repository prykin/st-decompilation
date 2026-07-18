
void __cdecl FUN_006f1170(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_44 [16];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_007508f0((undefined4 *)*param_1);
      if (param_1[5] != 0) {
        FUN_00750990((byte *)((int)param_1 + 0x231),param_1 + 1);
      }
      FUN_006a5e90(param_1);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x8b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7efaa4,0x8d);
  return;
}

