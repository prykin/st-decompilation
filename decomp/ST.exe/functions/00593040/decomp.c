
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::GetMessage */

undefined4 __thiscall CampaignTy::GetMessage(CampaignTy *this,int param_1)

{
  char cVar1;
  int *piVar2;
  MMsgTy *pMVar3;
  code *pcVar4;
  CampaignTy *this_00;
  DWORD DVar5;
  int iVar6;
  LPSTR pCVar7;
  BITMAPINFO *pBVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 unaff_ESI;
  char *pcVar17;
  void *unaff_EDI;
  char *pcVar18;
  undefined4 *puVar19;
  byte bVar20;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  int *local_c;
  CampaignTy *local_8;
  
  local_8 = this;
  DVar5 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar5;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x24f,0,iVar6,
                                &DAT_007a4ccc,s_CampaignTy__GetMessage_007cbea0);
    if (iVar12 != 0) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x24f);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  uVar15 = *(uint *)(param_1 + 0x10);
  if (uVar15 < 0x6941) {
    if (uVar15 == 0x6940) {
      thunk_FUN_00592620((int)this_00);
    }
    else if (uVar15 < 6) {
      if (uVar15 == 5) {
        PaintCampaign(this_00);
      }
      else if (uVar15 == 0) {
        NoneCampaign(this_00,unaff_EDI);
      }
      else if (uVar15 == 2) {
        InitCampaign(this_00,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
      }
      else if (uVar15 == 3) {
        DoneCampaign(this_00);
      }
    }
    else if (uVar15 == 0x68ff) {
      DAT_0080874e = **(byte **)(param_1 + 0x14);
      if (*(int *)(DAT_0081176c + 0x28) == 0) {
        FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
        iVar6 = 0;
        bVar20 = 0;
        pCVar7 = FUN_006f2c00(s_CMPG_BKG_007cbe10,1,(uint)DAT_0080874e);
        pBVar8 = (BITMAPINFO *)FUN_0070a9f0(DAT_00806780,pCVar7,bVar20,iVar6);
        PutDDX(0xa5,0x37,'\x01',pBVar8);
      }
      thunk_FUN_005b6730(this_00,4,'\x01',-1);
    }
    else if (uVar15 == 0x693f) {
      thunk_FUN_005925a0((int)this_00);
    }
    goto switchD_005931ad_caseD_6944;
  }
  switch(uVar15) {
  case 0x6942:
    *(undefined4 *)&this_00->field_0x45 = 0x200;
    *(undefined4 *)&this_00->field_0x49 = 0;
    this_00->field_004D = 0x6102;
    *(undefined4 *)&this_00->field_0x51 = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    (**(code **)(*(int *)this_00 + 8))();
    pMVar3 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    if (pMVar3 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar3,1,0,1);
    }
    break;
  case 0x6948:
    wsprintfA((LPSTR)&DAT_0080f22a,s__sMISS_d00_AVI_007cbebc,&DAT_00807784,(uint)DAT_0080874e);
    *(undefined4 *)&this_00->field_0x49 = 1;
    this_00->field_004D = 0x7101;
    *(undefined4 *)&this_00->field_0x51 = 3;
    *(undefined4 *)&this_00->field_0x55 = 1;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x694a:
    if ((((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (DAT_0080874e == 3)) &&
       (pMVar3 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6), pMVar3 != (MMsgTy *)0x0)) {
      MMsgTy::SetMessage(pMVar3,0x2530,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,
                         0);
    }
    else {
      puVar11 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        puVar11 = PTR_DAT_0079bfec;
      }
      wsprintfA(&DAT_0080ed16,s__s_s_s_d01_007cbedc,&DAT_00807680,PTR_s_MISSIONS__0079bfe8,puVar11,
                (uint)DAT_0080874e);
      puVar11 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        puVar11 = PTR_DAT_0079bfec;
      }
      wsprintfA(&DAT_0080ef1e,s__s_s_d01_007cbed0,PTR_s_MISSIONS__0079bfe8,puVar11,
                (uint)DAT_0080874e);
      uVar15 = 0xffffffff;
      pcVar17 = &DAT_0080ed16;
      do {
        pcVar18 = pcVar17;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar18 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      pcVar17 = pcVar18 + -uVar15;
      pcVar18 = (char *)&DAT_0080ee1a;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar18 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar18 = pcVar18 + 1;
      }
      DAT_008087a0 = 8;
      iVar6 = thunk_FUN_0056e9e0(&DAT_00807620,1);
      if (iVar6 != 0) {
        puVar19 = &DAT_0080c522;
        for (iVar6 = 0x9fc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        }
        thunk_FUN_005b6350(this_00,(-(uint)(this_00->field_1FFC != 0) & 8) + 0x6948,0,0);
        (**(code **)(*(int *)this_00 + 8))();
        pMVar3 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
        if (pMVar3 != (MMsgTy *)0x0) {
          MMsgTy::HidePanel(pMVar3,1,0,1);
        }
      }
    }
    break;
  case 0x6950:
    *(undefined4 *)&this_00->field_0x49 = 1;
    this_00->field_004D = 0x6104;
    *(undefined4 *)&this_00->field_0x51 = 0;
    *(undefined4 *)&this_00->field_0x55 = 1;
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
      puVar13 = &this_00->field_0x0 + iVar6 * 0x1fb;
      iVar12 = *(int *)(puVar13 + 0xef) + -1;
      break;
    case 1:
      puVar13 = &this_00->field_0x0 + iVar6 * 0x1fb;
      iVar12 = *(int *)(puVar13 + 0xef) + -2;
      break;
    default:
      goto switchD_005931dd_default;
    }
    *(int *)(puVar13 + 0xeb) = iVar12;
switchD_005931dd_default:
    uVar15 = *(uint *)((int)&this_00->field_00E7 + iVar6 * 0x1fb);
    local_c = piVar2;
    if (uVar15 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)((int)&this_00->field_012B + iVar6 * 0x1fb),uVar15,
                 *(uint *)((int)&this_00->field_00EB + iVar6 * 0x1fb),
                 *(uint *)((int)&this_00->field_00FF + iVar6 * 0x1fb),
                 *(uint *)((int)&this_00->field_0103 + iVar6 * 0x1fb));
    }
    if ((&this_00->field_00E2)[iVar6 * 0x1fb] != '\0') {
      switch(piVar2[1]) {
      case 0:
      case 2:
      case 3:
        *(int *)(&this_00->field_0x221 + iVar6 * 0x1fb) =
             *(int *)((int)&this_00->field_00FF + iVar6 * 0x1fb) +
             *(int *)(&this_00->field_0xab + iVar6 * 0x1fb);
        *(int *)(&this_00->field_0x225 + iVar6 * 0x1fb) =
             *(int *)((int)&this_00->field_0103 + iVar6 * 0x1fb) +
             *(int *)(&this_00->field_0xaf + iVar6 * 0x1fb);
        break;
      case 1:
        *(int *)(&this_00->field_0x221 + iVar6 * 0x1fb) =
             *(int *)((int)&this_00->field_00FF + iVar6 * 0x1fb) +
             *(int *)(&this_00->field_0xb3 + iVar6 * 0x1fb);
        *(int *)(&this_00->field_0x225 + iVar6 * 0x1fb) =
             *(int *)((int)&this_00->field_0103 + iVar6 * 0x1fb) +
             *(int *)(&this_00->field_0xb7 + iVar6 * 0x1fb);
      }
      uVar15 = *(uint *)((int)&this_00->field_0209 + iVar6 * 0x1fb);
      if (uVar15 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)((int)&this_00->field_024D + iVar6 * 0x1fb),uVar15,
                   *(uint *)(&this_00->field_0x20d + iVar6 * 0x1fb),
                   *(uint *)(&this_00->field_0x221 + iVar6 * 0x1fb),
                   *(uint *)(&this_00->field_0x225 + iVar6 * 0x1fb));
      }
    }
    local_10 = *(undefined4 *)((int)&this_00->field_0194 + iVar6 * 0x1fb);
    iVar12 = *(int *)((int)&this_00->field_0190 + iVar6 * 0x1fb);
    if (*local_c == 2) {
      iVar9 = 0;
LAB_0059332b:
      iVar14 = -2;
    }
    else {
      if (*local_c != 3) {
        iVar9 = 2;
        goto LAB_0059332b;
      }
      iVar9 = 0;
      iVar14 = -3;
    }
    switch(local_c[1]) {
    case 0:
      *(int *)((int)&this_00->field_017C + iVar6 * 0x1fb) =
           *(int *)(&this_00->field_0x180 + iVar6 * 0x1fb) + -3;
      break;
    case 1:
      *(int *)((int)&this_00->field_0190 + iVar6 * 0x1fb) = iVar9 + iVar12;
      *(int *)((int)&this_00->field_0194 + iVar6 * 0x1fb) =
           *(int *)((int)&this_00->field_0194 + iVar6 * 0x1fb) + iVar14;
    case 3:
      iVar9 = *(int *)(&this_00->field_0x180 + iVar6 * 0x1fb) + -2;
LAB_00593378:
      *(int *)((int)&this_00->field_017C + iVar6 * 0x1fb) = iVar9;
      break;
    case 2:
      iVar9 = *(int *)(&this_00->field_0x180 + iVar6 * 0x1fb) + -1;
      goto LAB_00593378;
    }
    uVar15 = *(uint *)((int)&this_00->field_0178 + iVar6 * 0x1fb);
    if (uVar15 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)((int)&this_00->field_01BC + iVar6 * 0x1fb),uVar15,
                 *(uint *)((int)&this_00->field_017C + iVar6 * 0x1fb),
                 *(uint *)((int)&this_00->field_0190 + iVar6 * 0x1fb),
                 *(uint *)((int)&this_00->field_0194 + iVar6 * 0x1fb));
    }
    *(int *)((int)&this_00->field_0190 + iVar6 * 0x1fb) = iVar12;
    *(undefined4 *)((int)&this_00->field_0194 + iVar6 * 0x1fb) = local_10;
  }
switchD_005931ad_caseD_6944:
  g_currentExceptionFrame = local_54.previous;
  uVar10 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar10;
}

