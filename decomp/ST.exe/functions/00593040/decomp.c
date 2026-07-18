
undefined4 __thiscall FUN_00593040(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  int *this_00;
  undefined4 uVar5;
  int iVar6;
  LPSTR pCVar7;
  BITMAPINFO *pBVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_ESI;
  char *pcVar15;
  void *unaff_EDI;
  char *pcVar16;
  undefined4 *puVar17;
  byte bVar18;
  undefined4 *local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_8 = this;
  uVar5 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar5;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar6 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar6 != 0) {
    DAT_00858df8 = local_54;
    iVar11 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x24f,0,iVar6,&DAT_007a4ccc);
    if (iVar11 != 0) {
      pcVar4 = (code *)swi(3);
      uVar5 = (*pcVar4)();
      return uVar5;
    }
    FUN_006a5e40(iVar6,0,0x7cbcd4,0x24f);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  uVar13 = *(uint *)(param_1 + 0x10);
  if (uVar13 < 0x6941) {
    if (uVar13 == 0x6940) {
      thunk_FUN_00592620((int)this_00);
    }
    else if (uVar13 < 6) {
      if (uVar13 == 5) {
        thunk_FUN_00591940();
      }
      else if (uVar13 == 0) {
        thunk_FUN_00591bf0(this_00);
      }
      else if (uVar13 == 2) {
        thunk_FUN_00590b40(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
      }
      else if (uVar13 == 3) {
        thunk_FUN_005916f0();
      }
    }
    else if (uVar13 == 0x68ff) {
      DAT_0080874e = **(byte **)(param_1 + 0x14);
      if (*(int *)(DAT_0081176c + 0x28) == 0) {
        FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
        iVar6 = 0;
        bVar18 = 0;
        pCVar7 = FUN_006f2c00(s_CMPG_BKG_007cbe10,1,(uint)DAT_0080874e);
        pBVar8 = (BITMAPINFO *)FUN_0070a9f0(DAT_00806780,pCVar7,bVar18,iVar6);
        thunk_FUN_005403c0(0xa5,0x37,'\x01',pBVar8);
      }
      thunk_FUN_005b6730(this_00,4,'\x01',-1);
    }
    else if (uVar13 == 0x693f) {
      thunk_FUN_005925a0((int)this_00);
    }
    goto switchD_005931ad_caseD_6944;
  }
  switch(uVar13) {
  case 0x6942:
    *(undefined4 *)((int)this_00 + 0x45) = 0x200;
    *(undefined4 *)((int)this_00 + 0x49) = 0;
    *(undefined4 *)((int)this_00 + 0x4d) = 0x6102;
    *(undefined4 *)((int)this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    (**(code **)(*this_00 + 8))();
    pvVar3 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
    if (pvVar3 != (void *)0x0) {
      thunk_FUN_005b8c70(pvVar3,1,0,1);
    }
    break;
  case 0x6948:
    wsprintfA((LPSTR)&DAT_0080f22a,s__sMISS_d00_AVI_007cbebc,&DAT_00807784,(uint)DAT_0080874e);
    *(undefined4 *)((int)this_00 + 0x49) = 1;
    *(undefined4 *)((int)this_00 + 0x4d) = 0x7101;
    *(undefined4 *)((int)this_00 + 0x51) = 3;
    *(undefined4 *)((int)this_00 + 0x55) = 1;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x694a:
    if ((((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (DAT_0080874e == 3)) &&
       (pvVar3 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6), pvVar3 != (void *)0x0)) {
      thunk_FUN_005b7ef0(pvVar3,0x2530,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,
                         0);
    }
    else {
      puVar10 = PTR_s_TUTOR_0079bff0;
      if (this_00[0x7ff] == 0) {
        puVar10 = PTR_DAT_0079bfec;
      }
      wsprintfA(&DAT_0080ed16,s__s_s_s_d01_007cbedc,&DAT_00807680,PTR_s_MISSIONS__0079bfe8,puVar10,
                (uint)DAT_0080874e);
      puVar10 = PTR_s_TUTOR_0079bff0;
      if (this_00[0x7ff] == 0) {
        puVar10 = PTR_DAT_0079bfec;
      }
      wsprintfA(&DAT_0080ef1e,s__s_s_d01_007cbed0,PTR_s_MISSIONS__0079bfe8,puVar10,
                (uint)DAT_0080874e);
      uVar13 = 0xffffffff;
      pcVar15 = &DAT_0080ed16;
      do {
        pcVar16 = pcVar15;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar16 = pcVar15 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      uVar13 = ~uVar13;
      pcVar15 = pcVar16 + -uVar13;
      pcVar16 = (char *)&DAT_0080ee1a;
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar16 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar16 + 1;
      }
      DAT_008087a0 = 8;
      iVar6 = thunk_FUN_0056e9e0(&DAT_00807620,1);
      if (iVar6 != 0) {
        puVar17 = &DAT_0080c522;
        for (iVar6 = 0x9fc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        thunk_FUN_005b6350(this_00,(-(uint)(this_00[0x7ff] != 0) & 8) + 0x6948,0,0);
        (**(code **)(*this_00 + 8))();
        pvVar3 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
        if (pvVar3 != (void *)0x0) {
          thunk_FUN_005b8c70(pvVar3,1,0,1);
        }
      }
    }
    break;
  case 0x6950:
    *(undefined4 *)((int)this_00 + 0x49) = 1;
    *(undefined4 *)((int)this_00 + 0x4d) = 0x6104;
    *(undefined4 *)((int)this_00 + 0x51) = 0;
    *(undefined4 *)((int)this_00 + 0x55) = 1;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x697f:
    piVar2 = *(int **)(param_1 + 0x14);
    if (*piVar2 == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (*piVar2 != 2) + 3;
    }
    switch(piVar2[1]) {
    case 0:
    case 2:
    case 3:
      iVar11 = iVar6 * 0x1fb + (int)this_00;
      iVar9 = *(int *)(iVar11 + 0xef) + -1;
      break;
    case 1:
      iVar11 = iVar6 * 0x1fb + (int)this_00;
      iVar9 = *(int *)(iVar11 + 0xef) + -2;
      break;
    default:
      goto switchD_005931dd_default;
    }
    *(int *)(iVar11 + 0xeb) = iVar9;
switchD_005931dd_default:
    uVar13 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xe7);
    local_c = piVar2;
    if (uVar13 != 0xffffffff) {
      FUN_006b3730(*(uint **)((int)this_00 + iVar6 * 0x1fb + 299),uVar13,
                   *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xeb),
                   *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xff),
                   *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x103));
    }
    if (*(char *)((int)this_00 + iVar6 * 0x1fb + 0xe2) != '\0') {
      switch(piVar2[1]) {
      case 0:
      case 2:
      case 3:
        *(int *)((int)this_00 + iVar6 * 0x1fb + 0x221) =
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0xff) +
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0xab);
        *(int *)((int)this_00 + iVar6 * 0x1fb + 0x225) =
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0x103) +
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0xaf);
        break;
      case 1:
        *(int *)((int)this_00 + iVar6 * 0x1fb + 0x221) =
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0xff) +
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0xb3);
        *(int *)((int)this_00 + iVar6 * 0x1fb + 0x225) =
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0x103) +
             *(int *)((int)this_00 + iVar6 * 0x1fb + 0xb7);
      }
      uVar13 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x209);
      if (uVar13 != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)this_00 + iVar6 * 0x1fb + 0x24d),uVar13,
                     *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x20d),
                     *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x221),
                     *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x225));
      }
    }
    local_10 = *(undefined4 *)((int)this_00 + iVar6 * 0x1fb + 0x194);
    iVar11 = *(int *)((int)this_00 + iVar6 * 0x1fb + 400);
    if (*local_c == 2) {
      iVar9 = 0;
LAB_0059332b:
      iVar12 = -2;
    }
    else {
      if (*local_c != 3) {
        iVar9 = 2;
        goto LAB_0059332b;
      }
      iVar9 = 0;
      iVar12 = -3;
    }
    switch(local_c[1]) {
    case 0:
      *(int *)((int)this_00 + iVar6 * 0x1fb + 0x17c) =
           *(int *)((int)this_00 + iVar6 * 0x1fb + 0x180) + -3;
      break;
    case 1:
      *(int *)((int)this_00 + iVar6 * 0x1fb + 400) = iVar9 + iVar11;
      *(int *)((int)this_00 + iVar6 * 0x1fb + 0x194) =
           *(int *)((int)this_00 + iVar6 * 0x1fb + 0x194) + iVar12;
    case 3:
      iVar9 = *(int *)((int)this_00 + iVar6 * 0x1fb + 0x180) + -2;
LAB_00593378:
      *(int *)((int)this_00 + iVar6 * 0x1fb + 0x17c) = iVar9;
      break;
    case 2:
      iVar9 = *(int *)((int)this_00 + iVar6 * 0x1fb + 0x180) + -1;
      goto LAB_00593378;
    }
    uVar13 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x178);
    if (uVar13 != 0xffffffff) {
      FUN_006b3730(*(uint **)((int)this_00 + iVar6 * 0x1fb + 0x1bc),uVar13,
                   *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x17c),
                   *(uint *)((int)this_00 + iVar6 * 0x1fb + 400),
                   *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x194));
    }
    *(int *)((int)this_00 + iVar6 * 0x1fb + 400) = iVar11;
    *(undefined4 *)((int)this_00 + iVar6 * 0x1fb + 0x194) = local_10;
  }
switchD_005931ad_caseD_6944:
  DAT_00858df8 = local_54;
  uVar5 = thunk_FUN_005b6430();
  return uVar5;
}

