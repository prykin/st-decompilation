
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f5440(int param_1)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x169) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x169) + 0xc);
    local_c = 0;
    if (0 < iVar1) {
      do {
        iVar5 = *(int *)(param_1 + 0x169);
        if (((local_c < *(uint *)(iVar5 + 0xc)) &&
            (pcVar6 = (char *)(*(int *)(iVar5 + 8) * local_c + *(int *)(iVar5 + 0x1c)),
            pcVar6 != (char *)0x0)) && (*pcVar6 == '\x01')) {
          if (*(int *)(pcVar6 + 0x1f) == -1) {
            thunk_FUN_005f4a30((int)pcVar6,CONCAT31((int3)((uint)iVar5 >> 8),pcVar6[1]),0);
          }
          pVVar3 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
            iVar5 = *(int *)(pcVar6 + 10);
            sVar2 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              local_8 = (short)(((short)(iVar5 / 200) + sVar2) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              local_8 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                                    (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
            }
            iVar5 = *(int *)(pcVar6 + 6);
            sVar2 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            iVar4 = *(int *)(pcVar6 + 2);
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
                                     iVar4,iVar5,&local_10,&local_14), local_8 < 0 ||
                 ((4 < local_8 || (local_10 < 0)))))) ||
               (((int)pVVar3->field_0030 <= local_10 ||
                ((((iVar5 = (&DAT_0079aed0)[local_8] + local_14, iVar5 < 0 ||
                   ((int)pVVar3->field_0034 <= iVar5)) || (pVVar3->field_004C == 0)) ||
                 (*(char *)(iVar5 * pVVar3->field_0030 + pVVar3->field_004C + local_10) != '\0')))))
               ) {
              if (pcVar6[0x1e] == '\0') {
                FUN_006eaaa0(DAT_00807598,*(uint *)(pcVar6 + 0x1f),0);
                pcVar6[0x1e] = '\x01';
              }
            }
            else if (pcVar6[0x1e] != '\0') {
              FUN_006eab60(DAT_00807598,*(uint *)(pcVar6 + 0x1f));
              pcVar6[0x1e] = '\0';
            }
          }
          FUN_006ea270(DAT_00807598,*(uint *)(pcVar6 + 0x1f),0,*(uint *)(pcVar6 + 0xe));
          FUN_006ea960(DAT_00807598,*(uint *)(pcVar6 + 0x1f),
                       (float)*(int *)(pcVar6 + 2) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pcVar6 + 6) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pcVar6 + 10) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc)
          ;
        }
        local_c = local_c + 1;
      } while ((int)local_c < iVar1);
    }
  }
  return;
}

