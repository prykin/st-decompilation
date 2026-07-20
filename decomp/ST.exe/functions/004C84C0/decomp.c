
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bproc.cpp
   Diagnostic line evidence: 415 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114
    */

undefined4 __fastcall FUN_004c84c0(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined3 extraout_var;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1->field_0361 == 0) {
    if (*(int *)&param_1->field_0x3d4 == 0) {
      return 0;
    }
    piVar3 = (int *)param_1->field_0607;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar6 = thunk_FUN_004c7860(param_1,*piVar3,piVar3[1],piVar3[2],1,0);
    if (iVar6 == 0) {
      return 0;
    }
    bVar5 = thunk_FUN_004c7c20((int)param_1);
    if (CONCAT31(extraout_var,bVar5) == 0) {
      return 0;
    }
    piVar3 = (int *)param_1->field_0607;
    thunk_FUN_004c7cc0(param_1,*piVar3,piVar3[1],piVar3[2],0,piVar3[3],piVar3[4],piVar3[5],
                       (char *)(piVar3 + 6));
    if (1 < *(int *)&param_1->field_0x3d4) {
      uVar9 = *(int *)&param_1->field_0x3d4 * 0x27 - 0x27;
      puVar11 = (undefined4 *)((int)param_1->field_0607 + 0x27);
      puVar12 = (undefined4 *)param_1->field_0607;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    *(int *)&param_1->field_0x3d4 = *(int *)&param_1->field_0x3d4 + -1;
    return 0;
  }
  if (((param_1->field_0361 == CASE_5) && (iVar6 = (*param_1->vtable->vfunc_7C)(), iVar6 == 100)) ||
     (99 < *(int *)&param_1->field_0x394)) {
    iVar6 = TLOBaseTy::procResult(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = *(int *)&param_1->field_0x36d + -1;
    *(int *)&param_1->field_0x36d = iVar6;
    if (iVar6 < 1) {
      *(TLOBaseTy_field_0361State *)&param_1->field_0x365 = param_1->field_0361;
      iVar6 = thunk_FUN_004c90c0(param_1);
      if ((iVar6 == 0) &&
         (iVar6 = ReportDebugMessage(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x19f,0,0,
                                     &DAT_007a4ccc,s_What_s_that___007ad3dc), iVar6 != 0)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      *(undefined4 *)&param_1->field_0x36d = 0;
      thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)param_1);
      return 0;
    }
    *(undefined4 *)&param_1->field_0x38c = PTR_00802a38->field_00E4;
    *(undefined4 *)&param_1->field_0x394 = 0;
    thunk_FUN_004c7260(param_1,param_1->field_0361,param_1->field_0369,
                       (undefined4 *)&param_1->field_0x398,(undefined4 *)&param_1->field_0x39c,
                       (int *)&param_1->field_0x3a0,(undefined4 *)&param_1->field_0x3a4);
    *(undefined4 *)&param_1->field_0x3a8 = 0;
    *(undefined4 *)&param_1->field_0x3ac = 0;
    *(undefined4 *)&param_1->field_0x3b0 = 0;
    *(undefined4 *)&param_1->field_0x3b4 = 0;
    switch(param_1->field_05AC) {
    case CASE_32:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
      thunk_FUN_004ce7a0(param_1);
      thunk_FUN_004ce860((AnonShape_004CE860_DECB0AA9 *)param_1);
    }
    thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)param_1);
    return 0;
  }
  if (param_1->field_0361 == CASE_5) {
    uVar10 = *(uint *)&param_1->field_0x390 / 100;
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if ((uint)PTR_00802a38->field_00E4 < *(int *)&param_1->field_0x38c + uVar10) {
      return 0;
    }
    *(undefined4 *)&param_1->field_0x38c = PTR_00802a38->field_00E4;
    *(undefined4 *)&param_1->field_0x3c0 = 0;
    *(undefined4 *)&param_1->field_0x3c8 = 0;
    *(undefined4 *)&param_1->field_0x3c4 = 0;
    *(undefined4 *)&param_1->field_0x3bc = 0;
    *(undefined4 *)&param_1->field_0x3b8 = 0;
    iVar6 = *(int *)(&DAT_007e29f0 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) / 100;
    if (*(int *)(&DAT_007e29f0 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      iVar8 = thunk_FUN_004d7b90(param_1->field_0x24,DAT_00794d84);
      if (iVar8 < iVar6) {
        *(undefined4 *)&param_1->field_0x3bc = 1;
        goto LAB_004c8806;
      }
      thunk_FUN_004d7e50(param_1->field_0x24,*(int *)(&DAT_00794d70 + param_1->field_0361 * 4),
                         *(int *)&param_1->field_0x18,iVar6);
    }
    if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
    }
    uVar10 = thunk_FUN_004406c0(param_1->field_023D);
    *(int *)&param_1->field_0x241 =
         *(int *)&param_1->field_0x241 +
         *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4) / 100;
    uVar10 = thunk_FUN_004406c0(param_1->field_023D);
    *(int *)&param_1->field_0x5d7 =
         (*(int *)&param_1->field_0x241 * 100) /
         *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4);
    uVar10 = thunk_FUN_004406c0(param_1->field_023D);
    if (*(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4) <=
        *(int *)&param_1->field_0x241) {
      uVar10 = thunk_FUN_004406c0(param_1->field_023D);
      *(undefined4 *)&param_1->field_0x241 =
           *(undefined4 *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4);
    }
LAB_004c8806:
    thunk_FUN_004c7260(param_1,param_1->field_0361,param_1->field_0369,
                       (undefined4 *)&param_1->field_0x398,(undefined4 *)&param_1->field_0x39c,
                       (int *)&param_1->field_0x3a0,(undefined4 *)&param_1->field_0x3a4);
    thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)param_1);
    return 0;
  }
  uVar10 = *(uint *)&param_1->field_0x390 / 100;
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  iVar6 = (*param_1->vtable->vfunc_2C)();
  iVar6 = thunk_FUN_004b72e0(param_1->field_0x24,iVar6);
  if ((iVar6 == 0) ||
     (iVar6 = thunk_FUN_004b79c0(param_1->field_0x24,*(int *)&param_1->field_0x18), iVar6 != 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  *(int *)&param_1->field_0x3b8 = iVar6;
  if ((iVar6 != 0) && (uVar10 = uVar10 << 2, DAT_00811798 != (void *)0x0)) {
    thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,5);
  }
  if ((uint)PTR_00802a38->field_00E4 < *(int *)&param_1->field_0x38c + uVar10) {
    return 0;
  }
  *(undefined4 *)&param_1->field_0x38c = PTR_00802a38->field_00E4;
  bVar5 = true;
  *(undefined4 *)&param_1->field_0x3c0 = 0;
  *(undefined4 *)&param_1->field_0x3c8 = 0;
  *(undefined4 *)&param_1->field_0x3c4 = 0;
  *(undefined4 *)&param_1->field_0x3bc = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  iVar6 = 0;
  if (*(int *)(&DAT_00794d70 + param_1->field_0361 * 4) == -1) {
LAB_004c8bf2:
    *(int *)&param_1->field_0x394 = *(int *)&param_1->field_0x394 + 1;
    if (*(int *)(&DAT_00794d70 + param_1->field_0361 * 4) != -1) {
      *(int *)&param_1->field_0x3a8 = *(int *)&param_1->field_0x3a8 + iVar6;
      *(int *)&param_1->field_0x3b0 = *(int *)&param_1->field_0x3b0 + local_8;
      *(int *)&param_1->field_0x3ac = *(int *)&param_1->field_0x3ac + local_10;
      *(int *)&param_1->field_0x3b4 = *(int *)&param_1->field_0x3b4 + local_c;
      iVar8 = thunk_FUN_004406c0(param_1->field_0x24);
      if ((char)iVar8 == '\x03') {
        if (iVar6 != 0) {
          thunk_FUN_004e4330(*(int *)&param_1->field_0x24,iVar6);
        }
      }
      else if (iVar6 != 0) {
        thunk_FUN_004d7c10(param_1->field_0x24,*(int *)(&DAT_00794d70 + param_1->field_0361 * 4),
                           *(int *)&param_1->field_0x18,iVar6);
      }
      if (local_10 != 0) {
        thunk_FUN_004d7d30(param_1->field_0x24,*(int *)(&DAT_00794d70 + param_1->field_0361 * 4),
                           *(int *)&param_1->field_0x18,local_10);
      }
      if (local_8 != 0) {
        thunk_FUN_004d7e50(param_1->field_0x24,*(int *)(&DAT_00794d70 + param_1->field_0361 * 4),
                           *(int *)&param_1->field_0x18,local_8);
      }
      if (local_c != 0) {
        thunk_FUN_004d7f70(param_1->field_0x24,*(int *)(&DAT_00794d70 + param_1->field_0361 * 4),
                           *(int *)&param_1->field_0x18,local_c);
      }
    }
    if (100 < *(int *)&param_1->field_0x394) {
      *(undefined4 *)&param_1->field_0x394 = 100;
    }
    if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
      return 0;
    }
  }
  else {
    iVar6 = *(int *)&param_1->field_0x398;
    if (99 < iVar6) {
      local_14 = iVar6 / 100;
    }
    iVar8 = *(int *)&param_1->field_0x39c;
    if (99 < iVar8) {
      local_10 = iVar8 / 100;
    }
    iVar1 = *(int *)&param_1->field_0x3a0;
    if (99 < iVar1) {
      local_8 = iVar1 / 100;
    }
    iVar2 = *(int *)&param_1->field_0x3a4;
    if (99 < iVar2) {
      local_c = iVar2 / 100;
    }
    if (iVar6 % 100 != 0) {
      local_14 = local_14 + 1;
    }
    if (iVar8 % 100 != 0) {
      local_10 = local_10 + 1;
    }
    if (iVar1 % 100 != 0) {
      local_8 = local_8 + 1;
    }
    if (iVar2 % 100 != 0) {
      local_c = local_c + 1;
    }
    if (iVar6 < *(int *)&param_1->field_0x3a8 + local_14) {
      local_14 = iVar6 - *(int *)&param_1->field_0x3a8;
    }
    if (iVar8 < *(int *)&param_1->field_0x3ac + local_10) {
      local_10 = iVar8 - *(int *)&param_1->field_0x3ac;
    }
    if (iVar1 < local_8 + *(int *)&param_1->field_0x3b0) {
      local_8 = iVar1 - *(int *)&param_1->field_0x3b0;
    }
    if (iVar2 < local_c + *(int *)&param_1->field_0x3b4) {
      local_c = iVar2 - *(int *)&param_1->field_0x3b4;
    }
    iVar6 = thunk_FUN_004406c0(param_1->field_0x24);
    if ((char)iVar6 == '\x03') {
      if ((local_14 != 0) &&
         (iVar6 = thunk_FUN_004e41c0(*(int *)&param_1->field_0x24), iVar6 < local_14)) {
        bVar5 = false;
        *(undefined4 *)&param_1->field_0x3c8 = 1;
      }
    }
    else if ((local_14 != 0) &&
            (iVar6 = thunk_FUN_004d7b10(param_1->field_0x24,
                                        *(int *)(&DAT_00794d70 + param_1->field_0361 * 4)),
            iVar6 < local_14)) {
      bVar5 = false;
      *(undefined4 *)&param_1->field_0x3c8 = 1;
    }
    if ((local_10 != 0) &&
       (iVar6 = thunk_FUN_004d7b50(param_1->field_0x24,
                                   *(int *)(&DAT_00794d70 + param_1->field_0361 * 4)),
       iVar6 < local_10)) {
      bVar5 = false;
      *(undefined4 *)&param_1->field_0x3c4 = 1;
    }
    if ((local_8 != 0) &&
       (iVar6 = thunk_FUN_004d7b90(param_1->field_0x24,
                                   *(int *)(&DAT_00794d70 + param_1->field_0361 * 4)),
       iVar6 < local_8)) {
      bVar5 = false;
      *(undefined4 *)&param_1->field_0x3bc = 1;
    }
    if ((local_c == 0) ||
       (iVar6 = thunk_FUN_004d7bd0(param_1->field_0x24,
                                   *(int *)(&DAT_00794d70 + param_1->field_0361 * 4)),
       local_c <= iVar6)) {
      iVar6 = local_14;
      if (bVar5) goto LAB_004c8bf2;
    }
    else {
      *(undefined4 *)&param_1->field_0x3c0 = 1;
    }
    if (DAT_00811798 != (void *)0x0) {
      if (*(int *)&param_1->field_0x3bc != 0) {
        thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,4);
      }
      if (*(int *)&param_1->field_0x3c4 != 0) {
        thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,2);
      }
      if (*(int *)&param_1->field_0x3c8 != 0) {
        iVar6 = thunk_FUN_004406c0(param_1->field_0x24);
        thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,
                           (-(uint)((char)iVar6 != '\x03') & 0xfffffffd) + 6);
      }
      if (*(int *)&param_1->field_0x3c0 != 0) {
        thunk_FUN_00621580(DAT_00811798,*(uint *)&param_1->field_0x24,7);
        return 0;
      }
    }
  }
  return 0;
}

