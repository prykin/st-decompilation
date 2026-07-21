
void FUN_0075b540(undefined4 *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  char cVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int local_51c [257];
  undefined4 local_118;
  int *local_10;
  int local_c;
  int local_8;

  if (*param_3 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)*param_1)(param_1,1,0x5d4);
    *param_3 = iVar4;
  }
  iVar4 = *param_3;
  piVar7 = (int *)0x0;
  *(int *)(iVar4 + 0xd0) = param_2;
  param_3 = (int *)0x0;
  local_8 = 1;
  do {
    bVar1 = *(byte *)(local_8 + param_2);
    if (bVar1 != 0) {
      uVar3 = (undefined1)local_8;
      puVar12 = (undefined4 *)((int)&local_118 + (int)piVar7);
      for (uVar8 = (uint)(bVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = bVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = uVar3;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      piVar7 = (int *)((int)param_3 + (uint)bVar1);
      param_3 = piVar7;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x11);
  *(undefined1 *)((int)&local_118 + (int)piVar7) = 0;
  iVar9 = 0;
  uVar8 = local_118 & 0xff;
  iVar5 = 0;
  cVar11 = (char)local_118;
  while (cVar11 != '\0') {
    if (*(byte *)((int)&local_118 + iVar5) == uVar8) {
      piVar7 = local_51c + iVar5;
      iVar6 = iVar5;
      do {
        iVar5 = iVar6 + 1;
        *piVar7 = iVar9;
        piVar7 = piVar7 + 1;
        iVar2 = iVar6 + 1;
        iVar9 = iVar9 + 1;
        iVar6 = iVar5;
      } while (*(byte *)((int)&local_118 + iVar2) == uVar8);
    }
    iVar9 = iVar9 << 1;
    uVar8 = uVar8 + 1;
    cVar11 = *(char *)((int)&local_118 + iVar5);
  }
  iVar5 = 0;
  iVar9 = 1;
  piVar7 = (int *)(iVar4 + 0x48);
  do {
    if (*(char *)(iVar9 + param_2) == '\0') {
      *piVar7 = -1;
    }
    else {
      iVar6 = local_51c[iVar5];
      piVar7[0x12] = iVar5;
      piVar7[-0x11] = iVar6;
      iVar5 = iVar5 + (uint)*(byte *)(iVar9 + param_2);
      *piVar7 = local_51c[iVar5 + -1];
    }
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar9 < 0x11);
  piVar7 = (int *)0x0;
  iVar5 = 1;
  *(undefined4 *)(iVar4 + 0x88) = 0xfffff;
  puVar12 = (undefined4 *)(iVar4 + 0xd4);
  for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  param_3 = (int *)0x0;
  local_8 = 7;
  do {
    local_c = 1;
    if (*(char *)(iVar5 + param_2) != '\0') {
      iVar9 = 1 << ((byte)local_8 & 0x1f);
      local_10 = local_51c + (int)piVar7;
      puVar13 = (undefined1 *)((int)piVar7 + param_2 + 0x11);
      do {
        iVar6 = *local_10 << ((byte)local_8 & 0x1f);
        if (0 < iVar9) {
          puVar10 = (undefined1 *)(iVar6 + 0x4d4 + iVar4);
          piVar7 = (int *)(iVar4 + 0xd4 + iVar6 * 4);
          iVar6 = iVar9;
          do {
            *piVar7 = iVar5;
            *puVar10 = *puVar13;
            piVar7 = piVar7 + 1;
            puVar10 = puVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_c = local_c + 1;
        piVar7 = (int *)((int)param_3 + 1);
        local_10 = local_10 + 1;
        puVar13 = puVar13 + 1;
        param_3 = piVar7;
      } while (local_c <= (int)(uint)*(byte *)(iVar5 + param_2));
    }
    iVar5 = iVar5 + 1;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return;
}

