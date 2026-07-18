
undefined4 FUN_0061d190(int param_1)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 local_60;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  undefined4 local_14;
  byte *local_10;
  uint local_c;
  void *local_8;
  
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar4 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar6 = FUN_006ad4d0(s_E____titans_nick_to_light_Cpp_007d01b0,0x7a,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    FUN_006a5e40(iVar4,0,0x7d01b0,0x7c);
    return 0xffff;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 3) {
      thunk_FUN_0061f530((int)local_8);
      thunk_FUN_0061d650((int)local_8);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar2 == 0) {
      thunk_FUN_0061e7f0((int)local_8);
      if (*(int *)((int)local_8 + 0x4f) == 5) {
        sVar1 = *(short *)((int)local_8 + 0x30);
        if (sVar1 < 0) {
          local_1c = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                 (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        sVar1 = *(short *)((int)local_8 + 0x32);
        if (sVar1 < 0) {
          local_18 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_18 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                 (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        local_14 = *(undefined4 *)((int)local_8 + 0x18);
        iVar4 = 0x476;
      }
      else {
        sVar1 = *(short *)((int)local_8 + 0x30);
        if (sVar1 < 0) {
          local_1c = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                 (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        sVar1 = *(short *)((int)local_8 + 0x32);
        if (sVar1 < 0) {
          local_18 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_18 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                 (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        local_14 = *(undefined4 *)((int)local_8 + 0x18);
        iVar4 = 0x475;
      }
      thunk_FUN_00568dd0(&DAT_00807658,2,(char *)0x0,iVar4,&local_1c,0);
      iVar4 = *(int *)((int)local_8 + 0x4f) + 1;
      *(int *)((int)local_8 + 0x4f) = iVar4;
      if (*(int *)((int)local_8 + 0x5f) * 4 <= iVar4) {
        thunk_FUN_0061d6d0(local_8);
      }
      *(int *)((int)local_8 + 0x5b) = *(int *)((int)local_8 + 0x5b) + 0x8fc;
      thunk_FUN_0061e4f0((int)local_8);
      if (*(char *)((int)local_8 + 0xa7) == '\0') {
        uVar5 = thunk_FUN_0061e110((int)local_8);
        *(char *)((int)local_8 + 0xa7) = (char)uVar5;
      }
      iVar4 = thunk_FUN_0061f290(local_8,(uint)*(byte *)((int)local_8 + 0xa7));
      if (iVar4 == 0) goto LAB_0061d434;
    }
    else if (uVar2 == 2) {
      puVar7 = *(undefined4 **)(param_1 + 0x14);
      if (puVar7[3] == 2) {
        thunk_FUN_0061d8f0(local_8,puVar7);
        puVar7 = (undefined4 *)((int)local_8 + 0xb0);
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        *(undefined1 *)puVar7 = 0;
        *(undefined4 *)((int)local_8 + 0xac) = *(undefined4 *)((int)local_8 + 0xa8);
        thunk_FUN_0061dfe0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      puVar8 = (undefined4 *)((int)local_8 + 0x1c);
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
      iVar4 = DAT_00808754;
      *(int *)((int)local_8 + 0xac) = DAT_00808754;
      uVar2 = iVar4 * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_8 + 0xac) = uVar2;
      *(uint *)((int)local_8 + 0x3c) = uVar2 >> 0x10 & 3;
      uVar5 = thunk_FUN_0061e110((int)local_8);
      *(char *)((int)local_8 + 0xa7) = (char)uVar5;
      iVar4 = thunk_FUN_0061db80();
      if (iVar4 != 0) {
        thunk_FUN_0061dd40((int)local_8);
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
LAB_0061d434:
      thunk_FUN_0061d6d0(local_8);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
  }
  else if (uVar2 == 0x10f) {
    local_10 = (byte *)thunk_FUN_0061d710(local_8,(int *)&local_c);
    thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)local_8 + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
  }
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
}

