
undefined4 * __cdecl FUN_00716fd0(int param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  int iVar5;
  void *unaff_EDI;
  undefined4 local_5c;
  undefined4 local_58 [16];
  short local_18 [6];
  ushort *local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = (ushort *)0x0;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0504,0xf7);
    }
    local_c = FUN_006f1ce0(0x13,param_2,(int *)0x0,param_4);
    if (local_c == (ushort *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0xf9);
    }
    FUN_006f2310(0x13,param_2,(undefined4 *)local_18,1);
    local_8 = FUN_006aac10(local_18[0] * 4 + 0x31);
    *(short *)((int)local_8 + 0x23) = local_18[0];
    iVar2 = 0;
    *(int *)((int)local_8 + 0x25) = param_1;
    if (0 < *(short *)((int)local_8 + 0x23)) {
      do {
        uVar3 = FUN_0070aa50(param_1,(char *)(local_c + iVar2 * 0x22),param_3,param_4);
        *(undefined4 *)((int)local_8 + iVar2 * 4 + 0x2d) = uVar3;
        if (*(int *)((int)local_8 + iVar2 * 4 + 0x2d) == 0) {
          FUN_006a5e40(-4,DAT_007ed77c,0x7f0504,0x104);
        }
        if (iVar2 == 0) {
          *(undefined2 *)((int)local_8 + 0x29) = *(undefined2 *)(*(int *)((int)local_8 + 0x2d) + 4);
          *(undefined2 *)((int)local_8 + 0x2b) = *(undefined2 *)(*(int *)((int)local_8 + 0x2d) + 8);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)((int)local_8 + 0x23));
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    FUN_006f20e0((uint *)&local_c);
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  FUN_006f20e0((uint *)&local_c);
  if (local_8 != (undefined4 *)0x0) {
    if (0 < *(short *)((int)local_8 + 0x23)) {
      do {
        FUN_006f20e0((uint *)((int)local_8 + iVar5 * 4 + 0x2d));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)((int)local_8 + 0x23));
    }
    FUN_006ab060(&local_8);
  }
  if ((param_4 != 0) || (iVar2 != -4)) {
    iVar5 = FUN_006ad4d0(s_E__Ourlib_mftspr_cpp_007f0504,0x114,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    FUN_006a5e40(iVar2,0,0x7f0504,0x116);
  }
  return (undefined4 *)0x0;
}

