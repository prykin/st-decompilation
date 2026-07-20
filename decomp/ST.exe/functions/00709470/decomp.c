
uint __thiscall
FUN_00709470(void *this,int *param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined1 uVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  AnonShape_006B84D0_7C7D97C6 *pAVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 local_414;
  void *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (param_3 == 0) {
    iVar8 = 0;
    iVar12 = 0;
    local_8 = 0;
    param_3 = 0;
    piVar9 = param_1;
    iVar14 = param_2;
    if (0 < param_2) {
      do {
        iVar4 = *piVar9;
        if (((iVar4 != 0) && (iVar11 = *(int *)(iVar4 + 4), 0 < iVar11)) &&
           (iVar4 = *(int *)(iVar4 + 8), 0 < iVar4)) {
          if (iVar8 < iVar11) {
            iVar8 = iVar11;
          }
          if (iVar12 < iVar4) {
            iVar12 = iVar4;
          }
        }
        iVar14 = iVar14 + -1;
        piVar9 = piVar9 + 1;
      } while (iVar14 != 0);
    }
  }
  else {
    iVar14 = 32000;
    iVar8 = -32000;
    local_8 = 32000;
    param_3 = 32000;
    iVar12 = -32000;
    if (0 < param_2) {
      local_c = param_2;
      piVar9 = param_1;
      do {
        iVar4 = *piVar9;
        if ((iVar4 != 0) && (0 < *(short *)(iVar4 + 0x12))) {
          sVar2 = *(short *)(iVar4 + 0x14);
          local_10 = CONCAT22((short)((uint)piVar9 >> 0x10),sVar2);
          if (0 < sVar2) {
            iVar11 = (int)*(short *)(iVar4 + 0xe);
            if (iVar11 < iVar14) {
              iVar14 = iVar11;
            }
            iVar11 = iVar11 + *(short *)(iVar4 + 0x12);
            if (iVar8 < iVar11) {
              iVar8 = iVar11;
            }
            iVar4 = (int)*(short *)(iVar4 + 0x10);
            if (iVar4 < param_3) {
              param_3 = iVar4;
            }
            if (iVar12 < iVar4 + sVar2) {
              iVar12 = iVar4 + sVar2;
            }
          }
        }
        piVar9 = piVar9 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      local_8 = iVar14;
    }
    iVar8 = iVar8 - local_8;
    iVar12 = iVar12 - param_3;
  }
  local_14 = this;
  FUN_006b0ba0(*(int *)((int)this + 4),&local_414,0,0x100);
  puVar5 = (undefined1 *)((int)&local_414 + 2);
  iVar14 = 0x100;
  do {
    uVar1 = puVar5[-2];
    puVar5[-2] = *puVar5;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 4;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  iVar8 = iVar8 + param_4 * 2;
  if ((0 < iVar8) && (iVar12 = iVar12 + param_4 * 2, 0 < iVar12)) {
    pAVar6 = (AnonShape_006B84D0_7C7D97C6 *)FUN_006b50c0(iVar8,iVar12,8,0x100,&local_414,1);
    uVar13 = pAVar6[1].field_0004;
    if (uVar13 == 0) {
      uVar13 = ((uint)pAVar6->field_000E * pAVar6->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar6->field_0008;
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)pAVar6);
    for (uVar10 = uVar13 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar7 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
      puVar7 = puVar7 + 1;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar7 = param_5;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    if (-1 < param_2 + -1) {
      piVar9 = param_1 + param_2 + -1;
      do {
        pbVar3 = (byte *)*piVar9;
        if (((pbVar3 != (byte *)0x0) && (0 < *(int *)(pbVar3 + 4))) && (0 < *(int *)(pbVar3 + 8))) {
          FUN_006b84d0(pAVar6,0,param_4 - local_8,param_4 - param_3,pbVar3);
        }
        piVar9 = piVar9 + -1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return (uint)pAVar6;
  }
  return 0;
}

