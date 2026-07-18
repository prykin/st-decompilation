
undefined4 * __cdecl FUN_00725550(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar3 = FUN_006ad4d0(s_E__ourlib_mfpla_cpp_007f0c44,0x27,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_00725680((int *)&local_8);
      FUN_006a5e40(iVar2,0,0x7f0c44,0x2b);
      return (undefined4 *)0x0;
    }
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0c44,0x18);
  }
  iVar2 = FUN_007256a0(param_1,param_2,param_3);
  if (-1 < iVar2) {
    FUN_006f1ce0(0xd,param_2,(int *)&local_8,param_3);
    if (local_8 != (undefined4 *)0x0) {
      puVar4 = local_8;
      if (0 < iVar2) {
        do {
          local_c = puVar4;
          iVar2 = iVar2 + -1;
          puVar4 = (undefined4 *)(*(short *)((int)local_c + 0x11) * 3 + 0x16 + (int)local_c);
          *local_c = puVar4;
        } while (iVar2 != 0);
      }
      *local_c = 0;
      DAT_00858df8 = (undefined4 *)local_50;
      return local_8;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return (undefined4 *)0x0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return (undefined4 *)0x0;
}

