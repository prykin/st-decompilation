
int __thiscall FUN_0060d660(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_14;
  int local_10;
  int local_8;

  iVar2 = *(int *)((int)this + 0x23c);
  uVar5 = iVar2 * 0x44;
  iVar1 = Library::DKW::LIB::FUN_006aac70(uVar5);
  *(int *)((int)this + 0x244) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = thunk_FUN_0062ca00();
  piVar6 = param_1;
  piVar7 = *(int **)((int)this + 0x244);
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  local_8 = 0;
  local_10 = 0;
  piVar6 = param_1 + iVar2 * 0x11;
  if (0 < *(int *)((int)this + 0x23c)) {
    local_14 = 0;
    param_1 = piVar6;
    do {
      iVar2 = local_14 + *(int *)((int)this + 0x244);
      if (((*(int *)(iVar2 + 0x40) != 0) || (*(int *)(iVar2 + 8) != 0)) && (*piVar6 != 0)) {
        piVar6 = piVar6 + 1;
        if (*(int *)(iVar2 + 0x40) != 0) {
          iVar2 = thunk_FUN_0062ca70((undefined4 *)(iVar2 + 0x40),piVar6);
          if (iVar2 != 0) {
            local_8 = local_8 + iVar1;
          }
          piVar6 = (int *)((int)piVar6 + iVar1);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(local_14 + 8 + *(int *)((int)this + 0x244)) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar2 = Library::DKW::LIB::FUN_006aac70
                            (*(int *)(local_14 + *(int *)((int)this + 0x244) + 4) << 2);
          *(int *)(local_14 + 8 + *(int *)((int)this + 0x244)) = iVar2;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          piVar7 = *(int **)(local_14 + *(int *)((int)this + 0x244) + 8);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          for (uVar3 = *(uint *)(local_14 + 4 + *(int *)((int)this + 0x244)) & 0x3fffffff;
              uVar3 != 0; uVar3 = uVar3 - 1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(char *)piVar7 = (char)*piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          }
        }
        piVar6 = (int *)((int)param_1 + *param_1);
        param_1 = piVar6;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x44;
    } while (local_10 < *(int *)((int)this + 0x23c));
  }
  return uVar5 + local_8;
}

