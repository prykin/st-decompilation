
void __fastcall FUN_00581200(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *pSVar4;
  void *this;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  AnonShape_00581200_BFD82E5E *pAVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  bool bVar17;
  int local_54;
  int local_4c;
  int local_44;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  AnonShape_00581200_BFD82E5E *local_c;
  short local_8;
  char local_5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar10 = *(int *)(param_1 + 0x1f5) - *(int *)(param_1 + 0x1ed) >> 1;
  local_1c = 0;
  iVar11 = iVar10 + 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)(param_1 + 0x1f9) - *(int *)(param_1 + 0x1f1) >> 1;
  iVar15 = iVar12 + 3;
  if (iVar15 < iVar11) {
    iVar15 = iVar11;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar11 = *(int *)(param_1 + 0x1f5) + 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_40 = (int *)(*(int *)(param_1 + 0x1ed) + -3);
  if (g_worldGrid.sizeX <= iVar11) {
    iVar11 = g_worldGrid.sizeX + -1;
  }
  if ((int)local_40 < 0) {
    local_40 = (int *)0x0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_24 = *(int *)(param_1 + 0x1f9) + 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_20 = *(int *)(param_1 + 0x1f1) + -3;
  iVar14 = (int)g_worldGrid.sizeY;
  if (iVar14 <= local_24) {
    iVar14 = iVar14 + -1;
    local_24 = iVar14;
  }
  if (local_20 < 0) {
    local_20 = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar13 = *(short *)(param_1 + 0x1ed) + (short)iVar10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_28 = CONCAT22((short)((uint)iVar14 >> 0x10),sVar13);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar16 = *(short *)(param_1 + 0x1f1) + (short)iVar12;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_2c = CONCAT22((short)((uint)param_1 >> 0x10),sVar16);
  local_10 = (int)sVar16;
  local_c = (AnonShape_00581200_BFD82E5E *)param_1;
  if ((((sVar13 <= iVar11) && (local_10 <= local_24)) && ((int)local_40 <= (int)sVar13)) &&
     (local_20 <= local_10)) {
    local_18 = 0;
    do {
      iVar10 = local_18;
      if ((((-1 < sVar13) && (sVar13 < g_worldGrid.sizeX)) &&
          ((-1 < (short)local_10 &&
           (((short)local_10 < g_worldGrid.sizeY && (sVar16 = (short)local_18, -1 < sVar16)))))) &&
         ((sVar16 < g_worldGrid.sizeZ &&
          ((pSVar4 = g_worldGrid.cells
                     [(int)sVar16 * (int)g_worldGrid.planeStride +
                      (int)g_worldGrid.sizeX * (int)(short)local_10 + (int)sVar13].objects[0],
           pSVar4 != (STWorldObject *)0x0 &&
           (((((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
              (iVar12 = (*pSVar4->vtable[5].slots_00_28[0])(), pAVar8 = local_c, iVar12 != 0)) &&
             (pSVar4[1].vtable < (STWorldObjectVTable *)0x8)) &&
            ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
             ((byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51] < 8)))))))))) {
        this = (void *)local_c->field_0010;
        if (*(char *)((int)this + 0x146f) == '\0') {
          iVar10 = thunk_FUN_005822e0(this,*(byte *)&pSVar4[1].vtable,local_c->field_0024);
          bVar17 = iVar10 < 0;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_5 = *(char *)((uint)local_c->field_0024 * 0x51 + 0x11ca + (int)this);
          bVar17 = local_5 !=
                   *(char *)((uint)*(byte *)&pSVar4[1].vtable * 0x51 + 0x11ca + (int)this);
        }
        iVar10 = local_18;
        if ((bVar17) &&
           (iVar12 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar10 = local_18, iVar12 != 0)) {
          *(STWorldObject **)(pAVar8->field_020B + local_1c * 4) = pSVar4;
          local_1c = local_1c + 1;
          if (pAVar8->field_01FD <= local_1c) goto cf_break_loop_00581775;
        }
      }
      local_18 = iVar10 + 1;
    } while (local_18 < 5);
  }
  local_18 = 0;
  do {
    iVar10 = (short)local_28 + 1;
    local_10 = (short)local_2c + 1;
    local_44 = 1;
    local_30 = 0;
    local_34 = 3;
    local_4c = DAT_007cb2dc;
    local_38 = DAT_007cb2e8;
cf_continue_loop_005814A2:
    iVar10 = iVar10 + local_4c;
    local_10 = local_10 + local_38;
    sVar13 = (short)iVar10 - (short)local_28;
    iVar12 = (int)sVar13;
    if (sVar13 < 0) {
      iVar12 = -iVar12;
    }
    local_14 = iVar10;
    if (iVar12 <= local_44) {
      sVar13 = (short)local_10 - (short)local_2c;
      iVar12 = (int)sVar13;
      if (sVar13 < 0) {
        iVar12 = -iVar12;
      }
      if (local_44 < iVar12) goto LAB_005814e2;
      goto LAB_00581545;
    }
LAB_005814e2:
    bVar17 = false;
    local_30 = local_30 + 1;
    if (local_30 < 4) {
      iVar10 = iVar10 - local_4c;
      local_10 = local_10 - local_38;
      bVar17 = true;
LAB_00581518:
      local_34 = local_34 + 1;
      if (3 < local_34) {
        local_34 = 0;
      }
      local_4c = (&DAT_007cb2dc)[local_30];
      local_38 = (&DAT_007cb2dc)[local_34];
      local_14 = iVar10;
      if (bVar17) goto cf_continue_loop_005814A2;
LAB_00581545:
      iVar10 = local_14;
      if (((((iVar11 < local_14) || (local_24 < local_10)) || (local_14 < (int)local_40)) ||
          (((((local_10 < local_20 || (sVar13 = (short)local_14, sVar13 < 0)) ||
             ((g_worldGrid.sizeX <= sVar13 ||
              ((sVar16 = (short)local_10, sVar16 < 0 || (g_worldGrid.sizeY <= sVar16)))))) ||
            (sVar9 = (short)local_18, sVar9 < 0)) ||
           ((g_worldGrid.sizeZ <= sVar9 ||
            (pSVar4 = g_worldGrid.cells
                      [(int)sVar9 * (int)g_worldGrid.planeStride +
                       (int)g_worldGrid.sizeX * (int)sVar16 + (int)sVar13].objects[0],
            pSVar4 == (STWorldObject *)0x0)))))) ||
         ((((pSVar4->value_20 != 1000 && (pSVar4->value_20 != 0x14)) ||
           ((iVar12 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar12 == 0 ||
            ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable)))) ||
          ((g_playSystem_00802A38 != (STPlaySystemC *)0x0 &&
           (7 < (byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51]))))))
      goto cf_continue_loop_005814A2;
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = local_c->field_0024;
      iVar12 = local_c->field_0010;
      if (*(char *)(iVar12 + 0x146f) != '\0') {
        local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar12);
        local_14 = 0;
        bVar17 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar12);
        goto LAB_00581728;
      }
      if (bVar1 == bVar2) {
LAB_0058171d:
        iVar12 = 0;
      }
      else {
        uVar6 = (uint)bVar1;
        uVar7 = (uint)bVar2;
        cVar3 = *(char *)(uVar7 + uVar6 * 8 + 0x142f + iVar12);
        if ((cVar3 == '\0') &&
           (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\0')) {
          iVar12 = -2;
        }
        else if ((cVar3 == '\x01') &&
                (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\0')) {
          iVar12 = -1;
        }
        else if ((cVar3 == '\0') &&
                (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\x01')) {
          iVar12 = 1;
        }
        else {
          if ((cVar3 != '\x01') || (*(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) != '\x01'))
          goto LAB_0058171d;
          iVar12 = 2;
        }
      }
      bVar17 = iVar12 < 0;
LAB_00581728:
      if ((bVar17) && (iVar12 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar12 != 0)) {
        local_1c = local_1c + 1;
        *(STWorldObject **)(local_c->field_020B + -4 + local_1c * 4) = pSVar4;
        if (local_c->field_01FD <= local_1c) goto cf_break_loop_00581775;
      }
      goto cf_continue_loop_005814A2;
    }
    local_44 = local_44 + 1;
    local_30 = 0;
    if (local_44 <= iVar15) goto LAB_00581518;
    local_18 = local_18 + 1;
    if (4 < local_18) {
cf_break_loop_00581775:
      iVar15 = local_c->field_01FD;
      while (iVar15 = iVar15 + -1, -1 < iVar15) {
        iVar10 = *(int *)(local_c->field_0207 + iVar15 * 4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x23d) != 0)) &&
           (((int)*(short *)(iVar10 + 0x47) < (int)local_40 ||
            (((iVar11 < *(short *)(iVar10 + 0x47) || (*(short *)(iVar10 + 0x49) < local_20)) ||
             (local_24 < *(short *)(iVar10 + 0x49))))))) {
          *(undefined4 *)(iVar10 + 0x241) = 0xff;
          *(undefined4 *)(iVar10 + 0x23d) = 0;
        }
      }
      local_24 = 0;
      if (0 < local_1c) {
        do {
          iVar11 = local_24;
          local_54 = -1;
          iVar15 = 0x1fffff;
          thunk_FUN_00416270(*(void **)(local_c->field_020B + local_24 * 4),(undefined2 *)&local_28,
                             &local_2c,(int *)&local_8);
          iVar10 = local_c->field_01FD + -1;
          if (-1 < iVar10) {
            local_40 = (int *)(local_c->field_0207 + iVar10 * 4);
            do {
              iVar11 = *local_40;
              if ((iVar11 != 0) && (*(int *)(iVar11 + 0x23d) == 0)) {
                sVar13 = *(short *)(iVar11 + 0x41) - (short)local_28;
                iVar12 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar12 = -iVar12;
                }
                sVar13 = *(short *)(iVar11 + 0x43) - (short)local_2c;
                iVar14 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar14 = -iVar14;
                }
                sVar13 = *(short *)(iVar11 + 0x45) - local_8;
                iVar11 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar11 = -iVar11;
                }
                iVar12 = iVar11 + iVar14 + iVar12;
                if (iVar12 < iVar15) {
                  iVar15 = iVar12;
                  local_54 = iVar10;
                }
              }
              iVar10 = iVar10 + -1;
              local_40 = local_40 + -1;
            } while (-1 < iVar10);
            iVar11 = local_24;
            if (local_54 != -1) {
              iVar15 = *(int *)(local_c->field_0207 + local_54 * 4);
              iVar10 = *(int *)(local_c->field_020B + local_24 * 4);
              if (*(int *)(iVar15 + 0x235) != 2) {
                uVar5 = *(undefined4 *)(iVar10 + 0x24);
                *(undefined2 *)(iVar15 + 0x245) = *(undefined2 *)(iVar10 + 0x32);
                *(undefined4 *)(iVar15 + 0x241) = uVar5;
                *(undefined4 *)(iVar15 + 0x23d) = 1;
                *(undefined4 *)(iVar15 + 0x252) = 0;
              }
            }
          }
          local_24 = iVar11 + 1;
        } while (local_24 < local_1c);
      }
      return;
    }
  } while( true );
}

