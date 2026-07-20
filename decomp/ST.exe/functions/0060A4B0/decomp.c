
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060a4b0(int param_1)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 0xc);
    local_14 = 0;
    local_10 = param_1;
    if (0 < iVar1) {
      do {
        pVVar3 = g_visibleClass_00802A88;
        iVar6 = *(int *)(param_1 + 0x234);
        if ((((local_14 < *(uint *)(iVar6 + 0xc)) &&
             (iVar6 = *(int *)(iVar6 + 8) * local_14 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) &&
            (-1 < *(int *)(iVar6 + 0x3c))) && (*(int *)(iVar6 + 4) != -1)) {
          local_c = 1;
          if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
            iVar5 = *(int *)(iVar6 + 0x14);
            sVar2 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              local_8 = (short)(((short)(iVar5 / 200) + sVar2) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              local_8 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                                    (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
            }
            iVar5 = *(int *)(iVar6 + 0x10);
            sVar2 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            iVar4 = *(int *)(iVar6 + 0xc);
            sVar2 = (short)(iVar4 >> 0x1f);
            if (iVar4 < 0) {
              iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                     iVar4,iVar5,&local_1c,&local_20), local_8 < 0 ||
                 ((4 < local_8 || (local_1c < 0)))))) ||
               (((int)pVVar3->field_0030 <= local_1c ||
                ((((iVar5 = (&DAT_0079aed0)[local_8] + local_20, iVar5 < 0 ||
                   ((int)pVVar3->field_0034 <= iVar5)) || (pVVar3->field_004C == 0)) ||
                 (*(char *)(iVar5 * pVVar3->field_0030 + pVVar3->field_004C + local_1c) != '\0')))))
               ) {
              if (*(int *)(iVar6 + 4) == 0) {
                FUN_006eaaa0(PTR_00807598,*(uint *)(iVar6 + 0x3c),0);
                *(undefined4 *)(iVar6 + 4) = 1;
              }
            }
            else if (*(int *)(iVar6 + 4) == 1) {
              FUN_006eab60(PTR_00807598,*(uint *)(iVar6 + 0x3c));
              *(undefined4 *)(iVar6 + 4) = 0;
              local_c = 0;
            }
          }
          param_1 = local_10;
          if (*(int *)(iVar6 + 0x28) != 0) {
            if (*(int *)(iVar6 + 0x24) < *(int *)(iVar6 + 0x28)) {
              *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
            }
            else {
              *(undefined4 *)(iVar6 + 0x24) = 0;
            }
          }
          if (local_c != 0) {
            if (*(int *)(local_10 + 0x248) == 1) {
              if (*(int *)(iVar6 + 4) != 0) {
                FUN_006eab60(PTR_00807598,*(uint *)(iVar6 + 0x3c));
                *(undefined4 *)(iVar6 + 4) = 0;
              }
            }
            else {
              FUN_006ea270(PTR_00807598,*(uint *)(iVar6 + 0x3c),0,*(uint *)(iVar6 + 0x24));
              FUN_006ea960(PTR_00807598,*(uint *)(iVar6 + 0x3c),
                           (float)*(int *)(iVar6 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar6 + 0x10) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar6 + 0x14) * _DAT_007904f8 * _DAT_007904f0 +
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

