
int __fastcall FUN_00604350(AnonShape_00604350_448AE2F1 *param_1)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = param_1->field_01F1;
  sVar2 = (short)(local_14 >> 0x1f);
  if (local_14 < 0) {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5 + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5;
  }
  iVar1 = param_1->field_01F5;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_10 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_10 = iVar6;
  }
  iVar7 = param_1->field_01F9;
  sVar2 = (short)(iVar7 >> 0x1f);
  if (iVar7 < 0) {
    local_8 = (short)(((short)(iVar7 / 200) + sVar2) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(iVar7 / 200) + sVar2) -
                          (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (local_14 < 0) {
    iVar5 = iVar5 + -1;
  }
  if ((((PTR_00807598->field_0048 <= iVar5 + 3) && (iVar5 + -3 <= PTR_00807598->field_0058)) &&
      (PTR_00807598->field_0044 <= iVar6 + 3)) && (iVar6 + -3 <= PTR_00807598->field_0054)) {
    iVar6 = FUN_006ddbd0();
    iVar1 = local_c;
    iVar5 = local_10;
    pVVar3 = g_visibleClass_00802A88;
    if ((iVar6 != 0) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
      iVar7 = local_10 + -3;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_c = local_c + -3;
      if (local_c < 0) {
        local_c = 0;
      }
      local_14 = local_10 + 4;
      if ((int)g_worldGrid.sizeY < local_10 + 4) {
        local_14 = (int)g_worldGrid.sizeY;
      }
      local_10 = iVar1 + 4;
      if (g_worldGrid.sizeX < local_10) {
        local_10 = (int)g_worldGrid.sizeX;
      }
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar1,
                                 iVar5,&local_18,&local_1c), pVVar4 = g_visibleClass_00802A88,
             local_8 < 0 ||
             ((((4 < local_8 || (local_18 < 0)) || ((int)pVVar3->field_0030 <= local_18)) ||
              ((iVar5 = (&DAT_0079aed0)[local_8] + local_1c, iVar5 < 0 ||
               ((int)pVVar3->field_0034 <= iVar5)))))))) || (pVVar3->field_004C == 0)) ||
          ((*(char *)(iVar5 * pVVar3->field_0030 + pVVar3->field_004C + local_18) != '\0' ||
           (DAT_0080874d == -1)))) ||
         (((((g_visibleClass_00802A88->field_00F8 == 0 ||
             (((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                   local_c,iVar7,&local_1c,&local_18),
               pVVar3 = g_visibleClass_00802A88, local_1c < 0 ||
               ((int)pVVar4->field_0030 <= local_1c)) ||
              (iVar5 = (&DAT_0079aed0)[local_8] + local_18, iVar5 < 0)))) ||
            ((((int)pVVar4->field_0034 <= iVar5 || (pVVar4->field_004C == 0)) ||
             (*(char *)(iVar5 * pVVar4->field_0030 + pVVar4->field_004C + local_1c) != '\0')))) ||
           ((((DAT_0080874d == -1 || (g_visibleClass_00802A88->field_00F8 == 0)) ||
             ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                  local_10,iVar7,&local_1c,&local_18), iVar1 = local_8,
              iVar5 = local_14, pVVar4 = g_visibleClass_00802A88, local_1c < 0 ||
              ((((int)pVVar3->field_0030 <= local_1c ||
                (iVar7 = (&DAT_0079aed0)[local_8] + local_18, iVar7 < 0)) ||
               ((int)pVVar3->field_0034 <= iVar7)))))) ||
            ((pVVar3->field_004C == 0 ||
             (*(char *)(iVar7 * pVVar3->field_0030 + pVVar3->field_004C + local_1c) != '\0')))))) ||
          ((DAT_0080874d == -1 ||
           (((g_visibleClass_00802A88->field_00F8 == 0 ||
             (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c
                                 ,local_14,&local_1c,&local_18), local_1c < 0)) ||
            (((int)pVVar4->field_0030 <= local_1c ||
             ((((local_18 = (&DAT_0079aed0)[iVar1] + local_18, local_18 < 0 ||
                ((int)pVVar4->field_0034 <= local_18)) || (pVVar4->field_004C == 0)) ||
              ((*(char *)(local_18 * pVVar4->field_0030 + pVVar4->field_004C + local_1c) != '\0' ||
               (iVar5 = thunk_FUN_005f1d80(g_visibleClass_00802A88,local_10,iVar5,local_8),
               iVar5 == 1)))))))))))))) {
        return 1;
      }
    }
    return iVar6;
  }
  return 0;
}

