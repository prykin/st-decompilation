
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060a4b0(AnonShape_0060A4B0_7BF9A20C *param_1)

{
  int iVar1;
  AnonNested_0060A4B0_0234_BD227FFA *pAVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  AnonShape_0060A4B0_7BF9A20C *local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  if (param_1->field_0234 != (AnonNested_0060A4B0_0234_BD227FFA *)0x0) {
    iVar1 = param_1->field_0234->field_000C;
    local_14 = 0;
    local_10 = param_1;
    if (0 < iVar1) {
      do {
        pVVar4 = g_visibleClass_00802A88;
        pAVar2 = param_1->field_0234;
        if ((((local_14 < (uint)pAVar2->field_000C) &&
             (iVar7 = pAVar2->field_0008 * local_14 + pAVar2->field_001C, iVar7 != 0)) &&
            (-1 < *(int *)(iVar7 + 0x3c))) && (*(int *)(iVar7 + 4) != -1)) {
          local_c = 1;
          if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
            iVar6 = *(int *)(iVar7 + 0x14);
            sVar3 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              local_8 = (short)(((short)(iVar6 / 200) + sVar3) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              local_8 = (int)(short)(((short)(iVar6 / 200) + sVar3) -
                                    (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
            }
            iVar6 = *(int *)(iVar7 + 0x10);
            sVar3 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            iVar5 = *(int *)(iVar7 + 0xc);
            sVar3 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                     iVar5,iVar6,&local_1c,&local_20), local_8 < 0 ||
                 ((4 < local_8 || (local_1c < 0)))))) ||
               (((int)pVVar4->field_0030 <= local_1c ||
                ((((iVar6 = (&DAT_0079aed0)[local_8] + local_20, iVar6 < 0 ||
                   ((int)pVVar4->field_0034 <= iVar6)) || (pVVar4->field_004C == 0)) ||
                 (*(char *)(iVar6 * pVVar4->field_0030 + pVVar4->field_004C + local_1c) != '\0')))))
               ) {
              if (*(int *)(iVar7 + 4) == 0) {
                FUN_006eaaa0(PTR_00807598,*(uint *)(iVar7 + 0x3c),0);
                *(undefined4 *)(iVar7 + 4) = 1;
              }
            }
            else if (*(int *)(iVar7 + 4) == 1) {
              FUN_006eab60(PTR_00807598,*(uint *)(iVar7 + 0x3c));
              *(undefined4 *)(iVar7 + 4) = 0;
              local_c = 0;
            }
          }
          param_1 = local_10;
          if (*(int *)(iVar7 + 0x28) != 0) {
            if (*(int *)(iVar7 + 0x24) < *(int *)(iVar7 + 0x28)) {
              *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
            }
            else {
              *(undefined4 *)(iVar7 + 0x24) = 0;
            }
          }
          if (local_c != 0) {
            if (*(int *)&local_10[1].field_0x10 == 1) {
              if (*(int *)(iVar7 + 4) != 0) {
                FUN_006eab60(PTR_00807598,*(uint *)(iVar7 + 0x3c));
                *(undefined4 *)(iVar7 + 4) = 0;
              }
            }
            else {
              FUN_006ea270(PTR_00807598,*(uint *)(iVar7 + 0x3c),0,*(uint *)(iVar7 + 0x24));
              FUN_006ea960(PTR_00807598,*(uint *)(iVar7 + 0x3c),
                           (float)*(int *)(iVar7 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar7 + 0x10) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar7 + 0x14) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
              local_18 = 1;
            }
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar1);
    }
    return local_18;
  }
  return 0;
}

