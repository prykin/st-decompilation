
undefined4 FUN_00617640(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_54;
  undefined4 local_50 [16];
  byte *local_10;
  uint local_c;
  void *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar3 = FUN_006ad4d0(s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4b,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7d005c,0x4d);
    return 0xffff;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 2) {
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    if (puVar5[3] != 2) {
      puVar6 = (undefined4 *)((int)local_8 + 0x1c);
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    thunk_FUN_00618170(local_8,puVar5);
    thunk_FUN_006179d0((int)local_8);
  }
  else if (iVar2 == 3) {
    thunk_FUN_00618ad0((int)local_8);
    if (*(byte **)((int)local_8 + 0x5e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_8 + 0x5e));
      *(undefined4 *)((int)local_8 + 0x5e) = 0;
    }
    if (*(byte **)((int)local_8 + 0x62) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_8 + 0x62));
      *(undefined4 *)((int)local_8 + 0x62) = 0;
    }
    if (*(byte **)((int)local_8 + 0x66) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_8 + 0x66));
      *(undefined4 *)((int)local_8 + 0x66) = 0;
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
  }
  else if (iVar2 == 0x10f) {
    local_10 = (byte *)thunk_FUN_00617fb0(local_8,(int *)&local_c);
    thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)local_8 + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return 0;
}

