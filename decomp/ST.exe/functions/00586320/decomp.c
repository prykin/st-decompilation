
int * __fastcall FUN_00586320(AnonShape_00586320_9792A2C7 *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *pSVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  bool bVar14;
  int local_44;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;

  sVar12 = param_1->field_0041;
  if (sVar12 < 0) {
    iVar13 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                    (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar13 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                         (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  sVar12 = param_1->field_0043;
  if (sVar12 < 0) {
    local_14 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                      (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                           (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  param_1->field_0273 = 0;
  param_1->field_026F = 0xff;
  param_1->field_0231 = 1;
  iVar9 = iVar13 + 5;
  local_40 = iVar13 + -5;
  if (g_worldGrid.sizeX <= iVar9) {
    iVar9 = g_worldGrid.sizeX + -1;
  }
  if (local_40 < 0) {
    local_40 = 0;
  }
  iVar10 = local_14 + 5;
  local_44 = local_14 + -5;
  if (g_worldGrid.sizeY <= iVar10) {
    iVar10 = g_worldGrid.sizeY + -1;
  }
  if (local_44 < 0) {
    local_44 = 0;
  }
  if ((((iVar13 <= iVar9) && (local_14 <= iVar10)) && (local_40 <= iVar13)) &&
     (local_44 <= local_14)) {
    local_1c = 0;
    do {
      sVar12 = (short)iVar13;
      if ((((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) &&
            ((-1 < (short)local_14 &&
             (((short)local_14 < g_worldGrid.sizeY && (sVar11 = (short)local_1c, -1 < sVar11))))))
           && (sVar11 < g_worldGrid.sizeZ)) &&
          (((pSVar4 = g_worldGrid.cells
                      [(int)(short)local_14 * (int)g_worldGrid.sizeX +
                       (int)sVar11 * (int)g_worldGrid.planeStride + (int)sVar12].objects[0],
            pSVar4 != (STWorldObject *)0x0 &&
            (((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
             (iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar7 != 0)))) &&
           (pSVar4[1].vtable < (STWorldObjectVTable *)0x8)))) &&
         (((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
           ((byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51] < 8)) &&
          (iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar7 != 0)))) {
        bVar1 = *(byte *)&pSVar4[1].vtable;
        bVar2 = param_1->field_0024;
        iVar7 = param_1->field_0010;
        if (*(char *)(iVar7 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar7 = 0;
          }
          else {
            uVar5 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
            if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
              iVar7 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
            {
              iVar7 = 2;
            }
            else {
              iVar7 = 0;
            }
          }
          bVar14 = iVar7 < 0;
        }
        else {
          bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
        }
        if (bVar14) {
          param_1->field_0231 = 0;
          param_1->field_0257 = 0;
          param_1->field_0273 = *(undefined2 *)&pSVar4[1].field_0xe;
          param_1->field_026F = pSVar4[1].vtable;
          return (int *)pSVar4;
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < 5);
  }
  local_1c = 0;
  do {
    local_c = local_14 + 1;
    local_18 = iVar13 + 1;
    local_34 = 1;
    local_24 = 0;
    local_28 = 3;
    local_2c = DAT_007cb95c;
    local_30 = DAT_007cb968;
LAB_00586642:
    local_18 = local_18 + local_2c;
    local_c = local_c + local_30;
    iVar7 = local_18 - iVar13;
    if (iVar7 < 0) {
      iVar7 = iVar13 - local_18;
    }
    if (iVar7 <= local_34) {
      iVar7 = local_c - local_14;
      if (iVar7 < 0) {
        iVar7 = local_14 - local_c;
      }
      if (local_34 < iVar7) goto LAB_0058667b;
      goto LAB_00586713;
    }
LAB_0058667b:
    bVar14 = false;
    local_24 = local_24 + 1;
    if (local_24 < 4) {
      bVar14 = true;
      local_18 = local_18 - local_2c;
      local_c = local_c - local_30;
LAB_005866e6:
      local_28 = local_28 + 1;
      if (3 < local_28) {
        local_28 = 0;
      }
      local_2c = (&DAT_007cb95c)[local_24];
      local_30 = (&DAT_007cb95c)[local_28];
      if (!bVar14) {
LAB_00586713:
        if ((((((local_18 <= iVar9) && (local_c <= iVar10)) && (local_40 <= local_18)) &&
             (((local_44 <= local_c && (sVar12 = (short)local_18, -1 < sVar12)) &&
              ((sVar12 < g_worldGrid.sizeX &&
               ((sVar11 = (short)local_c, -1 < sVar11 && (sVar11 < g_worldGrid.sizeY)))))))) &&
            (((sVar8 = (short)local_1c, -1 < sVar8 &&
              ((sVar8 < g_worldGrid.sizeZ &&
               (pSVar4 = g_worldGrid.cells
                         [(int)sVar8 * (int)g_worldGrid.planeStride +
                          (int)g_worldGrid.sizeX * (int)sVar11 + (int)sVar12].objects[0],
               pSVar4 != (STWorldObject *)0x0)))) &&
             (((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
              ((iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar7 != 0 &&
               (pSVar4[1].vtable < (STWorldObjectVTable *)0x8)))))))) &&
           ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
            ((byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51] < 8)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = param_1->field_0024;
          iVar7 = param_1->field_0010;
          if (*(char *)(iVar7 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
              iVar7 = 0;
            }
            else {
              uVar5 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
              if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
                iVar7 = -2;
              }
              else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0'))
              {
                iVar7 = -1;
              }
              else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
              {
                iVar7 = 1;
              }
              else if ((cVar3 == '\x01') &&
                      (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
                iVar7 = 2;
              }
              else {
                iVar7 = 0;
              }
            }
            bVar14 = iVar7 < 0;
          }
          else {
            bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
          }
          if ((bVar14) && (iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
            param_1->field_0231 = 0;
            param_1->field_0257 = 0;
            param_1->field_0273 = *(undefined2 *)&pSVar4[1].field_0xe;
            param_1->field_026F = pSVar4[1].vtable;
            return (int *)pSVar4;
          }
        }
      }
      goto LAB_00586642;
    }
    local_34 = local_34 + 1;
    local_24 = 0;
    if (local_34 < 6) goto LAB_005866e6;
    local_1c = local_1c + 1;
    if (4 < local_1c) {
      return (int *)0x0;
    }
  } while( true );
}

