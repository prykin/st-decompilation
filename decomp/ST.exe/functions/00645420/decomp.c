
undefined4 * FUN_00645420(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_6c;
  undefined4 local_68 [16];
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  iVar2 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  iVar4 = local_20;
  if (iVar2 == 0) {
    *param_1 = 0x80;
    local_14 = (undefined4 *)FUN_006b0020(*(uint **)(local_20 + 0x241),(int *)&local_8);
    FUN_006ab060(&local_14);
    *param_1 = *param_1 + local_8;
    local_18 = thunk_FUN_004ad790(&local_c);
    *param_1 = *param_1 + local_c;
    local_1c = thunk_FUN_004210e0((int *)&local_10);
    iVar2 = *param_1;
    *param_1 = iVar2 + local_10;
    puVar3 = (undefined4 *)FUN_006aac70(iVar2 + local_10);
    *puVar3 = *(undefined4 *)(iVar4 + 0x20);
    puVar3[1] = *(undefined4 *)(iVar4 + 0x24);
    puVar3[2] = *(undefined4 *)(iVar4 + 0x28);
    puVar3[3] = 2;
    puVar3[4] = *(undefined4 *)(iVar4 + 0x2c);
    puVar5 = (undefined4 *)(iVar4 + 0x245);
    puVar7 = puVar3 + 5;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar3[0x16] = *(undefined4 *)(local_20 + 0x231);
    puVar3[0x17] = *(undefined4 *)(local_20 + 0x235);
    puVar3[0x18] = *(undefined4 *)(local_20 + 0x239);
    puVar3[0x19] = *(undefined4 *)(local_20 + 0x23d);
    local_28 = puVar3;
    local_14 = (undefined4 *)FUN_006b0020(*(uint **)(local_20 + 0x241),(int *)&local_8);
    puVar5 = local_14;
    puVar7 = puVar3 + 0x20;
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar3[0x1a] = 0x80;
    puVar3[0x1b] = local_8;
    FUN_006ab060(&local_14);
    local_24 = local_8 + 0x80;
    puVar5 = local_18;
    puVar7 = (undefined4 *)(local_24 + (int)puVar3);
    for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar3[0x1c] = local_24;
    puVar3[0x1d] = local_c;
    FUN_006ab060(&local_18);
    puVar5 = local_1c;
    puVar7 = (undefined4 *)(local_24 + local_c + (int)puVar3);
    for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar3[0x1e] = local_24 + local_c;
    puVar3[0x1f] = local_10;
    FUN_006ab060(&local_1c);
    DAT_00858df8 = (undefined4 *)local_6c;
    return puVar3;
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x4d4,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  FUN_006a5e40(iVar2,0,0x7d25c0,0x4d5);
  return local_28;
}

