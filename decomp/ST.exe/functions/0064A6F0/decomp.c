
int __cdecl FUN_0064a6f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_44 [16];
  
  uVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar1 = __setjmp3(local_44,0,unaff_ESI,uVar3);
  if (iVar1 == 0) {
    if (param_1 == (int *)0x0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2a04,0x25);
    }
    thunk_FUN_0064a7c0(param_1);
    if (param_2 < 1) {
      param_2 = 10;
    }
    *param_1 = param_2;
    puVar2 = FUN_006aac10(param_2 * 5);
    param_1[2] = (int)puVar2;
    DAT_00858df8 = (undefined1 *)uVar3;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  FUN_006a5e40(iVar1,0,0x7d2a04,0x2a);
  return iVar1;
}

