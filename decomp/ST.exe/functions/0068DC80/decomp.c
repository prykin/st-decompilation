
int FUN_0068dc80(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int *piVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 local_64;
  undefined4 local_60 [16];
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  puVar8 = (undefined4 *)0x0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar2 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (local_18 != 0) {
      puVar8 = (undefined4 *)(local_18 + 0x20);
    }
    puVar6 = param_1;
    for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)(local_18 + 0x20) = 0x38e;
    *(undefined1 *)(local_18 + 0x38) = 1;
    piVar7 = (int *)(local_18 + 0xa5);
    iVar2 = 8;
    do {
      if (*piVar7 != 0) {
        iVar3 = FUN_006b0060((uint *)0x0,(uint *)(piVar7[1] + 0x10b + (int)param_1));
        *piVar7 = iVar3;
      }
      piVar7 = piVar7 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)(local_18 + 0xa5) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)(local_18 + 0xa5) = puVar4;
    }
    if (*(int *)(local_18 + 0xb1) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x34,10);
      *(uint **)(local_18 + 0xb1) = puVar4;
    }
    if (*(int *)(local_18 + 0xbd) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x4a,10);
      *(uint **)(local_18 + 0xbd) = puVar4;
    }
    if (*(int *)(local_18 + 0xc9) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)(local_18 + 0xc9) = puVar4;
    }
    iVar2 = 0;
    if (0 < *(short *)(local_18 + 0x125)) {
      *(undefined4 *)(*(int *)(local_18 + 0xa5) + 0xc) = 0;
      iVar3 = *(int *)((int)param_1 + 0x107) + 0x10b + (int)param_1;
      if (0 < *(short *)(local_18 + 0x125)) {
        do {
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(local_18 + 0x24);
          *(undefined4 *)(iVar3 + 0x77) = *(undefined4 *)(local_18 + 0x9d);
          *(undefined1 *)(iVar3 + 0x6a) = *(undefined1 *)(local_18 + 0x88);
          thunk_FUN_0054cc20(900,&local_14,&local_c,iVar3,0);
          local_1c = local_c;
          local_20 = *(undefined4 *)(local_c + 0x18);
          FUN_006ae1c0(*(uint **)(local_18 + 0xa5),&local_20);
          *(int *)(local_c + 0x284) = local_18;
          iVar3 = iVar3 + *(int *)(iVar3 + 0x14);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)(local_18 + 0x125));
      }
      local_10 = thunk_FUN_00668180(s___REPAIR_FLEET___007d571c,*(undefined2 *)(local_18 + 0x39),
                                    0x8000,0,*(undefined1 *)(local_18 + 0x24));
      local_8 = thunk_FUN_006684e0(local_10,&local_14);
      thunk_FUN_006686c0((int *)&local_10);
      local_8[1] = *(undefined4 *)(local_18 + 0x24);
      *(undefined4 *)((int)local_8 + 0x77) = *(undefined4 *)(local_18 + 0x9d);
      *(undefined1 *)((int)local_8 + 0x6a) = *(undefined1 *)(local_18 + 0x88);
      thunk_FUN_0054cc20(900,&local_14,&local_c,local_8,0);
      thunk_FUN_006686c0((int *)&local_8);
      local_1c = local_c;
      local_20 = *(undefined4 *)(local_c + 0x18);
      uVar5 = FUN_006ae1c0(*(uint **)(local_18 + 0xa5),&local_20);
      *(uint *)(local_18 + 0xa1) = uVar5;
      *(int *)(local_c + 0x284) = local_18;
    }
    DAT_00858df8 = (undefined4 *)local_64;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_64;
  thunk_FUN_0068e010(local_18);
  thunk_FUN_006686c0((int *)&local_8);
  thunk_FUN_006686c0((int *)&local_10);
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x61,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7d56e0,0x62);
  return iVar2;
}

