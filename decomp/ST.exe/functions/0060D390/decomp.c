
void __thiscall FUN_0060d390(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_58;
  undefined4 *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079cd78;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  piVar8 = (int *)&stack0xffffff98;
  puVar3 = (uint *)&stack0xffffff98;
  local_30 = 0;
  local_3c = (undefined4 *)0x0;
  if ((*(int *)((int)this + 0x240) == 0) && (*(int *)((int)this + 0x244) != 0)) {
    local_8 = 0;
    iVar11 = *(int *)((int)this + 0x23c);
    ExceptionList = &local_14;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    uVar7 = iVar11 * 0x44;
    uVar1 = thunk_FUN_0062ca00();
    iVar11 = 0;
    local_30 = uVar7;
    if (0 < *(int *)((int)this + 0x23c)) {
      iVar6 = 0;
      do {
        *puVar3 = 0;
        if (*(int *)(iVar6 + 0x40 + *(int *)((int)this + 0x244)) != 0) {
          uVar7 = uVar7 + uVar1;
          *puVar3 = uVar1;
          local_30 = uVar7;
        }
        iVar2 = *(int *)((int)this + 0x244) + iVar6;
        if (*(int *)(iVar2 + 8) != 0) {
          *puVar3 = *puVar3 + *(int *)(iVar2 + 4) * 4;
          uVar7 = uVar7 + *(int *)(iVar6 + 4 + *(int *)((int)this + 0x244)) * 4;
          local_30 = uVar7;
        }
        if (*puVar3 != 0) {
          *puVar3 = *puVar3 + 4;
          uVar7 = uVar7 + 4;
          local_30 = uVar7;
        }
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 0x44;
        puVar3 = puVar3 + 1;
      } while (iVar11 < *(int *)((int)this + 0x23c));
    }
    if ((uVar7 != 0) &&
       (local_3c = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_30),
       local_3c != (undefined4 *)0x0)) {
      puVar10 = *(undefined4 **)((int)this + 0x244);
      puVar12 = local_3c;
      for (uVar7 = *(int *)((int)this + 0x23c) * 0x11 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      piVar5 = local_3c + *(int *)((int)this + 0x23c) * 0x11;
      local_34 = 0;
      if (0 < *(int *)((int)this + 0x23c)) {
        local_58 = 0;
        local_38 = piVar5;
        do {
          if (*piVar8 != 0) {
            *piVar5 = *piVar8;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            piVar9 = *(int **)(local_58 + 0x40 + *(int *)((int)this + 0x244));
            piVar4 = piVar5;
            if (piVar9 != (int *)0x0) {
              piVar4 = piVar5 + 1;
              for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *piVar4 = *piVar9;
                piVar9 = piVar9 + 1;
                piVar4 = piVar4 + 1;
              }
              for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(char *)piVar4 = (char)*piVar9;
                piVar9 = (int *)((int)piVar9 + 1);
                piVar4 = (int *)((int)piVar4 + 1);
              }
              iVar11 = *(int *)((int)this + 0x244) + local_58;
              puVar10 = *(undefined4 **)(iVar11 + 8);
              piVar4 = local_38;
              if (puVar10 != (undefined4 *)0x0) {
                puVar12 = (undefined4 *)((int)(piVar5 + 1) + uVar1);
                for (uVar7 = *(uint *)(iVar11 + 4) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar12 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar12 = puVar12 + 1;
                }
                for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                }
              }
            }
            piVar5 = (int *)((int)piVar4 + *piVar8);
            local_38 = piVar5;
          }
          local_34 = local_34 + 1;
          local_58 = local_58 + 0x44;
          piVar8 = piVar8 + 1;
        } while (local_34 < *(int *)((int)this + 0x23c));
      }
    }
  }
  *param_1 = -(uint)(local_3c != (undefined4 *)0x0) & local_30;
  ExceptionList = local_14;
  return;
}

