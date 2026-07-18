
int FUN_0064cd80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  void *unaff_EDI;
  int *piVar11;
  bool bVar12;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (local_8 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = local_8 + 0x23;
    }
    piVar8 = param_1;
    for (iVar2 = 0x127; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    *(short *)piVar11 = (short)*piVar8;
    *(undefined1 *)((int)piVar11 + 2) = *(undefined1 *)((int)piVar8 + 2);
    *(undefined1 *)((int)local_8 + 0x91) = 1;
    puVar3 = FUN_006b54f0((uint *)0x0,5,5);
    *(uint **)((int)local_8 + 0x5b3) = puVar3;
    uVar9 = 0;
    do {
      FUN_006b6020(*(int *)((int)local_8 + 0x5b3),uVar9,&DAT_008016a0);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 4);
    if ((char)local_8[0x23] == '\0') {
      local_8[0x22] = DAT_00808754;
      iVar2 = (**(code **)(*local_8 + 0x18))();
      uVar9 = iVar2 * 2 + 2;
      *(uint *)((int)local_8 + 0xd2) = uVar9;
      if (0x18 < uVar9) {
        *(undefined4 *)((int)local_8 + 0xd2) = 3;
      }
    }
    else {
      local_8[0x22] = *(int *)((int)local_8 + 0xda);
    }
    iVar2 = *(int *)((int)local_8 + 0x506);
    piVar11 = (int *)((int)local_8 + 0x4fa);
    if (piVar11 == (int *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *piVar11 * 5;
    }
    puVar4 = FUN_006aac10(uVar9);
    *(undefined4 **)((int)local_8 + 0x502) = puVar4;
    if (piVar11 == (int *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *piVar11 * 5;
    }
    puVar10 = (undefined4 *)(iVar2 + 0x49e + (int)param_1);
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)local_8 + 0x4f2) + 0x49e + (int)param_1)
                        );
    *(undefined4 *)((int)local_8 + 0x4ee) = uVar5;
    puVar3 = FUN_006c8680((uint *)0x0,
                          (uint *)(*(int *)((int)local_8 + 0x4e6) + 0x49e + (int)param_1));
    *(uint **)((int)local_8 + 0x4e2) = puVar3;
    iVar2 = *(int *)((int)local_8 + 0x4ee);
    uVar9 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar12 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar12) {
          iVar2 = *(int *)(iVar2 + 8) * uVar9 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        if (*(int *)(iVar2 + 0xf) != 0) {
          uVar5 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar2 + 0x13) + 0x49e + (int)param_1));
          *(undefined4 *)(iVar2 + 0xf) = uVar5;
        }
        iVar2 = *(int *)((int)local_8 + 0x4ee);
        uVar9 = uVar9 + 1;
        bVar12 = uVar9 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar9 < (int)*(uint *)(iVar2 + 0xc));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  FUN_00402e14((int)local_8);
  iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_event_cpp_007d2a34,0x50,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7d2a34,0x51);
  return iVar2;
}

