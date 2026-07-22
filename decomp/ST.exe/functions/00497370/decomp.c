
undefined4 FUN_00497370(int param_1,int param_2,uint param_3,undefined4 param_4,void *param_5)

{
  byte bVar1;
  dword dVar2;
  AnonShape_00497110_465BC742 *this;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  DArrayTy *pDVar14;
  bool bVar15;
  uint local_60;
  char local_5c;
  undefined3 uStack_5b;
  dword local_44;
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  undefined4 local_28;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  pDVar14 = g_dArray_007FB270;
  puStack_c = &DAT_00790718;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff90;
  local_28 = 0xffffffff;
  dVar2 = g_dArray_007FB270->count;
  local_8 = 0;
  ExceptionList = &local_14;
  local_44 = dVar2;
  Library::MSVCRT::FUN_0072da40();
  local_38 = &stack0xffffff90;
  local_1c = &stack0xffffff90;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_30 = 0;
  local_40 = 0;
  local_34 = 0;
  local_3c = (int *)&stack0xffffff90;
  local_1c = &stack0xffffff90;
  if (0 < (int)dVar2) {
    puVar11 = &local_60;
    local_3c = (int *)&stack0xffffff90;
    local_1c = &stack0xffffff90;
    do {
      if (local_34 < pDVar14->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar14, local_34) (runtime stride) */
        puVar12 = (uint *)(pDVar14->elementSize * local_34 + (int)pDVar14->data);
      }
      else {
        puVar12 = (uint *)0x0;
      }
      uVar4 = puVar12[2];
      if (uVar4 != param_3) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_5c = CONCAT31(uStack_5b,(char)uVar4);
        if (DAT_00808a8f == '\0') {
          if ((char)uVar4 == (char)param_3) {
LAB_004974ca:
            iVar3 = 0;
          }
          else {
            uVar4 = uVar4 & 0xff;
            uVar9 = param_3 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar4][uVar9];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar9][uVar4] == 0)) {
              iVar3 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar9][uVar4] == 0)) {
              iVar3 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar9][uVar4] == 1)) {
              iVar3 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar9][uVar4] != 1)) goto LAB_004974ca;
              iVar3 = 2;
            }
          }
          bVar15 = iVar3 < 0;
        }
        else {
          bVar15 = (&DAT_008087ea)[(param_3 & 0xff) * 0x51] !=
                   (&DAT_008087ea)[(uVar4 & 0xff) * 0x51];
        }
        if ((bVar15) &&
           (iVar3 = FUN_006aced8(*puVar12 * 0xc9 + 100,puVar12[1] * 0xc9 + 100,param_1 * 0xc9 + 100,
                                 param_2 * 0xc9 + 100), pDVar14 = g_dArray_007FB270, iVar3 < 0xbc7))
        {
          puVar13 = puVar11 + -4;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          uVar4 = thunk_FUN_0060ca20(puVar11[1]);
          uVar4 = ((int)uVar4 < 0) - 1 & uVar4;
          *puVar11 = uVar4;
          local_40 = local_40 + uVar4;
          local_30 = local_30 + 1;
          puVar11 = puVar11 + 6;
          pDVar14 = g_dArray_007FB270;
        }
      }
      local_34 = local_34 + 1;
    } while ((int)local_34 < (int)local_44);
  }
  if (local_30 != 0) {
    iVar5 = thunk_FUN_0060ca20((int)param_5);
    iVar8 = local_30;
    local_20 = local_30;
    iVar3 = iVar5 / local_30;
    if (iVar5 < local_40) {
      iVar7 = 0;
      piVar10 = local_3c;
      if (0 < local_30) {
        do {
          *piVar10 = iVar7;
          iVar7 = iVar7 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar7 < local_30);
      }
      thunk_FUN_004977c0((int)local_38,local_3c,local_30);
      while (0 < iVar5) {
        iVar7 = local_30 - iVar8;
        if (iVar7 < local_30) {
          piVar10 = (int *)(local_38 + iVar7 * 0x18 + 0x10);
          iVar7 = local_30 - iVar7;
          do {
            iVar8 = *piVar10;
            if (iVar8 < iVar3) {
              *piVar10 = 0;
              local_20 = local_20 + -1;
            }
            else {
              *piVar10 = iVar8 - iVar3;
              iVar8 = iVar3;
            }
            local_40 = local_40 - iVar8;
            iVar5 = iVar5 - iVar8;
            piVar10 = piVar10 + 6;
            iVar7 = iVar7 + -1;
            iVar8 = local_20;
          } while (iVar7 != 0);
        }
        if (((iVar5 < 1) || (iVar8 < 1)) || (iVar3 = iVar5 / iVar8, iVar3 == 0)) {
          iVar5 = 0;
        }
      }
    }
    else {
      iVar5 = iVar5 - local_40;
      if (0 < local_30) {
        puVar6 = (undefined4 *)(local_38 + 0x10);
        iVar3 = local_30;
        do {
          *puVar6 = 0;
          puVar6 = puVar6 + 6;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = local_30;
    iVar8 = thunk_FUN_0060ca20((int)param_5);
    thunk_FUN_0060ca40(param_5,iVar8 - iVar5);
    if (0 < iVar3) {
      piVar10 = (int *)(local_38 + 0x10);
      do {
        this = (AnonShape_00497110_465BC742 *)piVar10[1];
        iVar5 = thunk_FUN_0060ca20((int)this);
        if (iVar5 != *piVar10) {
          iVar5 = thunk_FUN_0060ca20((int)this);
          thunk_FUN_0060ca40(this,iVar5 - *piVar10);
          thunk_FUN_00497110(param_5,this);
        }
        piVar10 = piVar10 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  iVar3 = thunk_FUN_0060ca20((int)param_5);
  if (0 < iVar3) {
    local_28 = 1;
  }
  ExceptionList = local_14;
  return local_28;
}

