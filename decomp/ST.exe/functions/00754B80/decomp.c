
void FUN_00754b80(AnonShape_00754B80_75BFDB7A *param_1,ushort *param_2,int param_3,int *param_4,
                 undefined4 param_5,int param_6,uint *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  AnonShape_00754B80_75BFDB7A *pAVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ushort *puVar10;
  ushort *puVar11;
  int *piVar12;
  int iVar13;
  ushort local_220 [256];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;
  
  pAVar6 = param_1;
  if (param_7 == (uint *)0x0) {
    local_14 = 0x1f;
    local_20 = 0x7c00;
    local_1c = 0x3e0;
  }
  else {
    local_20 = *param_7;
    local_1c = param_7[1];
    local_14 = param_7[2];
  }
  local_c = -1;
  local_8 = (ushort *)0xffffffff;
  param_7 = (uint *)0xffffffff;
  if (local_20 == 0xf800) {
    local_c = 0;
  }
  else if (local_20 == 0x7c00) {
    local_c = 1;
  }
  if (local_1c == 0x7e0) {
    local_8 = (ushort *)0x5;
  }
  else if (local_1c == 0x3e0) {
    local_8 = (ushort *)0x6;
  }
  if (local_14 == 0x1f) {
    param_7 = (uint *)&DAT_0000000b;
  }
  if (local_c == -1) {
    local_c = 0;
    for (uVar7 = local_20; (uVar7 & 0x8000) == 0; uVar7 = uVar7 << 1) {
      local_c = local_c + 1;
    }
  }
  if (local_8 == (ushort *)0xffffffff) {
    local_8 = (ushort *)0x0;
    for (uVar7 = local_1c; (uVar7 & 0x8000) == 0; uVar7 = uVar7 << 1) {
      local_8 = (ushort *)((int)local_8 + 1);
    }
  }
  puVar10 = local_8;
  if (param_7 == (uint *)0xffffffff) {
    param_7 = (uint *)0x0;
    for (uVar7 = local_14; (uVar7 & 0x8000) == 0; uVar7 = uVar7 << 1) {
      param_7 = (uint *)((int)param_7 + 1);
    }
  }
  bVar9 = (byte)param_7;
  if (param_1->field_0074 == 1) {
    if (param_1->field_0024 == 1) {
      iVar13 = 0;
      if (0 < param_1->field_007C) {
        local_10 = local_220;
        iVar5 = *(int *)(param_1->field_0080 + 8);
        do {
          iVar8 = (uint)*(byte *)(iVar5 + iVar13) << 8;
          local_18 = iVar8 >> (bVar9 & 0x1f) & local_14;
          iVar13 = iVar13 + 1;
          *local_10 = (ushort)local_18 |
                      (ushort)(iVar8 >> ((byte)local_8 & 0x1f)) & (ushort)local_1c |
                      (ushort)(iVar8 >> ((byte)local_c & 0x1f)) & (ushort)local_20;
          local_10 = local_10 + 1;
        } while (iVar13 < param_1->field_007C);
      }
    }
    else {
      iVar13 = 0;
      if (0 < param_1->field_007C) {
        local_8 = local_220;
        puVar4 = (uint *)param_1->field_0080;
        local_18 = *puVar4;
        local_10 = (ushort *)puVar4[1];
        uVar7 = puVar4[2];
        do {
          pbVar1 = (byte *)(uVar7 + iVar13);
          pbVar2 = (byte *)((int)local_10 + iVar13);
          pbVar3 = (byte *)(local_18 + iVar13);
          iVar13 = iVar13 + 1;
          *local_8 = (ushort)((int)((uint)*pbVar1 << 8) >> ((byte)local_c & 0x1f)) &
                     (ushort)local_20 |
                     (ushort)((int)((uint)*pbVar2 << 8) >> ((byte)puVar10 & 0x1f)) &
                     (ushort)local_1c |
                     (ushort)((int)((uint)*pbVar3 << 8) >> (bVar9 & 0x1f)) & (ushort)local_14;
          local_8 = local_8 + 1;
        } while (iVar13 < param_1->field_007C);
      }
    }
    if (param_1->field_0084 < param_1->field_006C) {
      while (param_6 != 0) {
        Library::DKW::JPG::FUN_007568d0((int)param_1,param_4,1);
        iVar13 = 0;
        puVar10 = param_2;
        if (0 < param_1->field_0068) {
          do {
            pbVar1 = (byte *)(*param_4 + iVar13);
            iVar13 = iVar13 + 1;
            *puVar10 = local_220[*pbVar1];
            puVar10 = puVar10 + 1;
          } while (iVar13 < param_1->field_0068);
        }
        param_2 = (ushort *)((int)param_2 - param_3);
        param_6 = param_6 + -1;
        if (param_1->field_006C <= param_1->field_0084) {
          return;
        }
      }
    }
  }
  else {
    local_c = local_c + 0x10;
    puVar10 = local_8 + 4;
    local_8 = puVar10;
    if (param_1->field_0084 < param_1->field_006C) {
      do {
        if (param_6 == 0) {
          return;
        }
        Library::DKW::JPG::FUN_007568d0((int)pAVar6,param_4,1);
        piVar12 = (int *)*param_4;
        param_1 = (AnonShape_00754B80_75BFDB7A *)0x0;
        if (0 < pAVar6->field_0068) {
          local_10 = param_2;
          do {
            uVar7 = *piVar12 << 8;
            piVar12 = (int *)((int)piVar12 + 3);
            local_18 = uVar7 >> (bVar9 & 0x1f) & local_14;
            puVar11 = local_10 + 1;
            *local_10 = (ushort)local_18 |
                        (ushort)(uVar7 >> ((byte)puVar10 & 0x1f)) & (ushort)local_1c |
                        (ushort)(uVar7 >> ((byte)local_c & 0x1f)) & (ushort)local_20;
            param_1 = (AnonShape_00754B80_75BFDB7A *)&param_1->field_0x1;
            puVar10 = local_8;
            local_10 = puVar11;
          } while ((int)param_1 < pAVar6->field_0068);
        }
        param_2 = (ushort *)((int)param_2 - param_3);
        param_6 = param_6 + -1;
      } while (pAVar6->field_0084 < pAVar6->field_006C);
    }
  }
  return;
}

