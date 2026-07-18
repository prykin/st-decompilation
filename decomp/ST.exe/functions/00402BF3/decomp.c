
void thunk_FUN_005dc730(int param_1,char *param_2,int param_3)

{
  LPSTR pCVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puStack_70;
  undefined4 auStack_6c [16];
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint *puStack_c;
  int iStack_8;
  
  puStack_70 = DAT_00858df8;
  DAT_00858df8 = &puStack_70;
  iVar3 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = puStack_70;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x26b,0,iVar3,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd718,0x26b);
    return;
  }
  if (param_1 != 0) {
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    if (param_2 != (char *)0x0) {
      DAT_0080c4cb = FUN_0071aa10(param_1,param_2,0);
    }
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (*(byte **)(iStack_8 + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iStack_8 + 0x548));
    }
    puVar4 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(iStack_8 + 0x548) = puVar4;
    iVar3 = 0;
    if (0 < (int)DAT_0080c4cb[2]) {
      if ((int)DAT_0080c4cb[2] < 1) {
        pcVar8 = (char *)0x0;
        goto LAB_005dc828;
      }
      do {
        pcVar8 = *(char **)(DAT_0080c4cb[5] + iVar3 * 4);
LAB_005dc828:
        thunk_FUN_005411a0(*(int *)(iStack_8 + 0x548),pcVar8,s_____s_007c72b4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)DAT_0080c4cb[2]);
    }
    iVar3 = *(int *)(iStack_8 + 0x34);
    *(undefined4 *)(iVar3 + 0x7e) = 1;
    puVar5 = (undefined2 *)(iVar3 + 0x9e);
    *puVar5 = 0;
    *(undefined1 *)puVar5 = DAT_007cc854;
    puStack_c = FUN_007126e0(*(int *)(iStack_8 + 0x548),(uint *)s________________007c21d8,
                             (uint *)&DAT_007c21ec,*(int *)(*(int *)(iStack_8 + 0x544) + 4) + -0x14,
                             0,0xffffffff,(char *)0x0,1);
    if (*(byte **)(iStack_8 + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iStack_8 + 0x548));
    }
    puVar4 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(iStack_8 + 0x548) = puVar4;
    pCVar1 = (LPSTR)(iStack_8 + 0x3c);
    uVar6 = FUN_006b0140(0x2347,DAT_00807618);
    wsprintfA(pCVar1,s__2__s__007cd800,uVar6);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),pCVar1);
    wsprintfA(pCVar1,s__0__s_007cd7f8,&DAT_0080c3c3);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),pCVar1);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),&DAT_007c3b5c);
    uVar7 = DAT_008087c4 & 0xffff;
    uVar10 = (uint)DAT_008087c2;
    uVar6 = FUN_006b0140(0x2344,DAT_00807618);
    wsprintfA(pCVar1,s__2__s___0_d_2x_0_d_007cd7e0,uVar6,uVar10,uVar7);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),pCVar1);
    uVar7 = DAT_008087c4 >> 0x10 & 0xff;
    uVar6 = FUN_006b0140(0x2345,DAT_00807618);
    wsprintfA(pCVar1,s__2__s___0_d_007cd7d0,uVar6,uVar7);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),pCVar1);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),&DAT_007c3b5c);
    uVar6 = FUN_006b0140(0x2346,DAT_00807618);
    wsprintfA(pCVar1,s__2__s__007cd800,uVar6);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),pCVar1);
    FUN_006b5aa0(*(int *)(iStack_8 + 0x548),&DAT_007c3b5c);
    puVar4 = puStack_c;
    if (puStack_c != (uint *)0x0) {
      if (puStack_c[2] != 0) {
        FUN_007129d0(puStack_c,puStack_c);
      }
      iVar3 = 0;
      if (0 < (int)puVar4[2]) {
        if ((int)puVar4[2] < 1) {
          pcVar8 = (char *)0x0;
          goto LAB_005dca07;
        }
        do {
          pcVar8 = *(char **)(puVar4[5] + iVar3 * 4);
LAB_005dca07:
          FUN_006b5aa0(*(int *)(iStack_8 + 0x548),pcVar8);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)puVar4[2]);
      }
      FUN_006b5570((byte *)puVar4);
    }
    uStack_1c = 0x28;
    uStack_18 = CONCAT22(*(undefined2 *)(*(int *)(iStack_8 + 0x548) + 8),1);
    if (*(int *)(iStack_8 + 0x389) != 0) {
      FUN_006e5970(2,*(int *)(iStack_8 + 0x389),(int)auStack_2c);
    }
    uStack_1c = 0x22;
    uStack_18 = 0;
    if (*(int *)(iStack_8 + 0x389) != 0) {
      FUN_006e5970(2,*(int *)(iStack_8 + 0x389),(int)auStack_2c);
    }
    uStack_1c = 0x20;
    uStack_18 = (uint)(param_3 != 0);
    if (*(int *)(iStack_8 + 0x389) != 0) {
      FUN_006e5970(2,*(int *)(iStack_8 + 0x389),(int)auStack_2c);
    }
  }
  DAT_00858df8 = puStack_70;
  return;
}

