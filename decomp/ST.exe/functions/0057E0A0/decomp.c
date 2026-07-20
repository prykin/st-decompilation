
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::GetMessage */

undefined4 __thiscall
STDcResourcC::GetMessage(STDcResourcC *this,AnonShape_0057E0A0_323CBAA3 *param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  VisibleClassTy *pVVar5;
  STSprGameObjC *this_00;
  byte bVar6;
  short sVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar14;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 unaff_ESI;
  int *piVar15;
  int iVar16;
  byte *pbVar17;
  void *unaff_EDI;
  undefined4 *puVar18;
  int iVar19;
  byte *pbVar20;
  InternalExceptionFrame local_68;
  STSprGameObjC *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  if (((this->field_0x261 & 4) != 0) && (param_1->field_0010 != 3)) {
    return 0;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = (STSprGameObjC *)this;
  iVar8 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x169,0,iVar8,&DAT_007a4ccc,
                                s_STDcResourcC__GetMessage_007cb1f4);
    if (iVar13 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Igor_To_gold_cpp_007cb19c,0x16a);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return uVar9;
  }
  iVar8 = STSprGameObjC::GetMessage(local_24,(AnonShape_0041AF40_F59F8577 *)param_1);
  uVar14 = extraout_var_01;
  if (iVar8 == 0xffff) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_Igor_To_gold_cpp_007cb19c,0x56);
    uVar14 = extraout_var_02;
  }
  uVar10 = param_1->field_0010;
  if (0x108 < uVar10) {
    if (uVar10 == 0x10f) {
      if (*(int *)&this_00->field_0x25d == 2) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      local_10 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_8);
      local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_8 + 0x46);
      if (local_10 == (byte *)0x0) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if (local_c == (byte *)0x0) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x23d = 2;
      puVar11 = (undefined4 *)&this_00->field_0x231;
      pbVar17 = local_c;
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pbVar17 = *puVar11;
        puVar11 = puVar11 + 1;
        pbVar17 = pbVar17 + 4;
      }
      *(undefined2 *)pbVar17 = *(undefined2 *)puVar11;
      pbVar17 = local_10;
      pbVar20 = local_c + 0x46;
      for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar20 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar20 = pbVar20 + 4;
      }
      for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar20 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar20 = pbVar20 + 1;
      }
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_c,local_8 + 0x46);
      FUN_006ab060(&local_10);
      FUN_006ab060(&local_c);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (uVar10 != 0x111) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    sVar7 = *(short *)&this_00->field_0x245;
    sVar1 = *(short *)&this_00->field_0x24d;
    sVar2 = *(short *)&this_00->field_0x249;
    if ((((sVar7 < 0) || (SHORT_007fb240 <= sVar7)) || (sVar2 < 0)) ||
       (((SHORT_007fb242 <= sVar2 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1)))) {
      piVar15 = (int *)0x0;
    }
    else {
      piVar15 = *(int **)(DAT_007fb248 +
                         ((int)sVar1 * (int)SHORT_007fb246 + (int)sVar2 * (int)SHORT_007fb240 +
                         (int)sVar7) * 8);
    }
    if (piVar15 == (int *)0x0) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar8 = (**(code **)(*piVar15 + 0x2c))();
    if ((*(int *)&this_00->field_0x255 != 0xdd) || ((iVar8 != 0x39 && (iVar8 != 0x5e)))) {
      if (*(int *)&this_00->field_0x255 != 0xde) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if ((iVar8 != 0x4f) && (iVar8 != 0x61)) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
    thunk_FUN_005803c0();
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (uVar10 == 0x108) {
    iVar8 = thunk_FUN_004ab050();
    local_18 = (undefined4 *)0x0;
    if (*(int *)&this_00->field_0x265 < 1) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar13 = iVar8 * 2 + 1;
    local_14 = iVar8 * 8 + -0x1c;
    iVar8 = iVar13 * 4;
    do {
      iVar12 = iVar8;
      if (8 < iVar13) {
        iVar12 = local_14;
      }
      local_20 = *(int *)((int)&DAT_007cb0b8 + iVar12) + *(int *)&this_00->field_0x245;
      thunk_FUN_004ad3c0(*(void **)(*(int *)&this_00->field_0x26d + (int)local_18 * 4),
                         (float)local_20 * _DAT_007904f8 + _DAT_007904f4,
                         (float)(*(int *)((int)&DAT_007cb0dc + iVar12) +
                                *(int *)&this_00->field_0x249) * _DAT_007904f8 + _DAT_007904f4,
                         (float)*(int *)&this_00->field_0x24d * _DAT_00790504 + _DAT_00790500 +
                         _DAT_007904fc);
      iVar19 = iVar8 + 4;
      iVar16 = iVar13 + 1;
      iVar12 = local_14 + 4;
      if (*(int *)&this_00->field_0x255 == 0xde) {
        iVar19 = iVar8 + 8;
        iVar16 = iVar13 + 2;
        iVar12 = local_14 + 8;
      }
      local_14 = iVar12;
      local_18 = (undefined4 *)((int)local_18 + 1);
      iVar13 = iVar16;
      iVar8 = iVar19;
    } while ((int)local_18 < *(int *)&this_00->field_0x265);
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (uVar10 != 0) {
    if (uVar10 != 2) {
      if (uVar10 != 3) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      thunk_FUN_004d8530((STResourceC *)this_00);
      uVar14 = extraout_var;
      if (*(int *)&this_00->field_0x26d != 0) {
        iVar8 = *(int *)&this_00->field_0x265 + -1;
        *(int *)&this_00->field_0x265 = iVar8;
        while (-1 < iVar8) {
          thunk_FUN_004ad310(*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar8 * 4));
          Library::MSVCRT::FUN_0072e2b0
                    (*(HoloTy **)(*(int *)&this_00->field_0x26d + *(int *)&this_00->field_0x265 * 4)
                    );
          iVar8 = *(int *)&this_00->field_0x265 + -1;
          *(int *)&this_00->field_0x265 = iVar8;
        }
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x26d);
        uVar14 = extraout_var_00;
      }
      if (*(short *)&this_00->field_0x32 != -1) {
        STAllPlayersC::UnRegisterDeposit
                  (g_sTAllPlayers_007FA174,CONCAT22(uVar14,*(short *)&this_00->field_0x32),
                   (STResourceC *)this_00);
      }
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      if (*(int **)&this_00->field_0x273 == (int *)0x0) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      FUN_006e6580((void *)this_00->field_0211,*(int **)&this_00->field_0x273);
      *(undefined4 *)&this_00->field_0x273 = 0;
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    local_18 = param_1->field_0014;
    if ((uint)local_18[3] < 2) {
      *(undefined4 *)&this_00->field_0x261 = 4;
      *(undefined4 *)&this_00->field_0x265 = 0;
      *(undefined4 *)&this_00->field_0x26d = 0;
      puVar11 = param_1->field_0014;
      puVar18 = (undefined4 *)&this_00->field_0x231;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar18 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar18 = puVar18 + 1;
      }
      if (*(int *)&this_00->field_0x251 < 1) {
        thunk_FUN_00580380((STJellyGunC *)this_00);
        goto cf_common_exit_0057E624;
      }
      iVar8 = *(int *)&this_00->field_0x255;
      if ((((iVar8 != 0xdd) && (iVar8 != 0xde)) && (iVar8 != 0xdc)) && (iVar8 != 0xe0)) {
        iVar8 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x6a,0,0,&DAT_007a4ccc,
                                   s_STResourceC__Invalid_resource_ty_007cb214);
        if (iVar8 != 0) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return uVar9;
        }
        *(undefined4 *)&this_00->field_0x231 = 0xde;
        uVar14 = extraout_var_04;
      }
      sVar7 = *(short *)&this_00->field_0x245;
      sVar1 = *(short *)&this_00->field_0x249;
      local_14 = CONCAT22(uVar14,sVar1);
      sVar2 = *(short *)&this_00->field_0x24d;
      if (((sVar7 < 0) || (SHORT_007fb240 <= sVar7)) ||
         (((sVar1 < 0 || ((SHORT_007fb242 <= sVar1 || (sVar2 < 0)))) || (SHORT_007fb244 <= sVar2))))
      {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = *(int **)(DAT_007fb248 +
                           ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar1 +
                           (int)sVar7) * 8);
      }
      if (((((sVar7 < 0) || (SHORT_007fb240 <= sVar7)) || (sVar1 < 0)) ||
          ((SHORT_007fb242 <= sVar1 || (sVar2 < 0)))) || (SHORT_007fb244 <= sVar2)) {
        sVar7 = -1;
      }
      else {
        sVar7 = *(short *)(DAT_007fb280 +
                          ((int)SHORT_007fb278 * (int)sVar1 + (int)SHORT_007fb27e * (int)sVar2 +
                          (int)sVar7) * 2);
      }
      if ((sVar7 != 0) &&
         ((piVar15 == (int *)0x0 ||
          (((iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x39 &&
            (iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x4f)) &&
           ((iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x5e &&
            (iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x61)))))))) {
        thunk_FUN_00580380((STJellyGunC *)this_00);
      }
      iVar8 = STAllPlayersC::RegisterDeposit(g_sTAllPlayers_007FA174,0xffff,this_00);
      if (iVar8 != 0) {
        thunk_FUN_00580380((STJellyGunC *)this_00);
      }
      *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 | 1;
      this_00->field_0259 = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
      thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x245,*(short *)&this_00->field_0x249,
                         *(short *)&this_00->field_0x24d,0);
      iVar8 = CreateRes((STDcResourcC *)this_00);
      if (iVar8 == 0xffff) {
        iVar8 = 0x85;
        goto LAB_0057e60c;
      }
    }
    else {
      if (local_18[3] != 2) goto cf_common_exit_0057E624;
      puVar11 = local_18;
      puVar18 = (undefined4 *)&this_00->field_0x231;
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar18 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar18 = puVar18 + 1;
      }
      *(undefined2 *)puVar18 = *(undefined2 *)puVar11;
      *(undefined4 *)&this_00->field_0x273 = 0;
      *(undefined4 *)&this_00->field_0x265 = 0;
      *(undefined4 *)&this_00->field_0x26d = 0;
      *(undefined4 *)&this_00->field_0x261 = 4;
      STAllPlayersC::RestoreGObjData((STAllPlayersC *)this_00,(undefined4 *)((int)local_18 + 0x46));
      sVar7 = *(short *)&this_00->field_0x245;
      sVar1 = *(short *)&this_00->field_0x249;
      local_14 = CONCAT22(extraout_var_03,sVar1);
      sVar2 = *(short *)&this_00->field_0x24d;
      if (((((sVar7 < 0) || (SHORT_007fb240 <= sVar7)) || (sVar1 < 0)) ||
          ((SHORT_007fb242 <= sVar1 || (sVar2 < 0)))) || (SHORT_007fb244 <= sVar2)) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = *(int **)(DAT_007fb248 +
                           ((int)sVar1 * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)sVar2 +
                           (int)sVar7) * 8);
      }
      if (((sVar7 < 0) || (SHORT_007fb240 <= sVar7)) ||
         ((sVar1 < 0 || (((SHORT_007fb242 <= sVar1 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2))))))
      {
        sVar7 = -1;
      }
      else {
        sVar7 = *(short *)(DAT_007fb280 +
                          ((int)sVar1 * (int)SHORT_007fb278 + (int)SHORT_007fb27e * (int)sVar2 +
                          (int)sVar7) * 2);
      }
      if ((sVar7 != 0) &&
         ((piVar15 == (int *)0x0 ||
          (((iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x39 &&
            (iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x4f)) &&
           ((iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x5e &&
            (iVar8 = (**(code **)(*piVar15 + 0x2c))(), iVar8 != 0x61)))))))) {
        thunk_FUN_00580380((STJellyGunC *)this_00);
      }
      iVar8 = STAllPlayersC::RegisterDeposit
                        (g_sTAllPlayers_007FA174,*(ushort *)&this_00->field_0x32,this_00);
      if (iVar8 != 0) {
        thunk_FUN_00580380((STJellyGunC *)this_00);
      }
      if (local_18[3] == 1) {
        thunk_FUN_00580f50();
      }
      *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 | 1;
      this_00->field_0259 = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
      thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x245,*(short *)&this_00->field_0x249,
                         *(short *)&this_00->field_0x24d,0);
      iVar8 = CreateRes((STDcResourcC *)this_00);
      if (iVar8 == 0xffff) {
        iVar8 = 0xb1;
LAB_0057e60c:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_Igor_To_gold_cpp_007cb19c,iVar8)
        ;
      }
    }
    *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 & 0xfffffffb;
cf_common_exit_0057E624:
    if ((this_00->field_0x261 & 4) != 0) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    thunk_FUN_004d84e0((int)this_00);
    *(undefined2 *)&this_00->field_0x47 = *(undefined2 *)&this_00->field_0x245;
    *(undefined2 *)&this_00->field_0x5b = *(undefined2 *)&this_00->field_0x245;
    *(undefined2 *)&this_00->field_0x49 = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&this_00->field_0x5d = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&this_00->field_0x4b = *(undefined2 *)&this_00->field_0x24d;
    *(undefined2 *)&this_00->field_0x5f = *(undefined2 *)&this_00->field_0x24d;
    *(short *)&this_00->field_0x45 = *(short *)&this_00->field_0x24d * 200 + 100;
    *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x245 * 0xc9 + 100;
    *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x249 * 0xc9 + 100;
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  iVar8 = thunk_FUN_0041c710((int)this_00);
  if (iVar8 == 0) {
    if ((this_00->field_0x261 & 1) == 0) {
      thunk_FUN_005803e0((int)this_00);
      uVar10 = *(uint *)&this_00->field_0x261 | 2;
LAB_0057e6f0:
      *(uint *)&this_00->field_0x261 = uVar10;
    }
  }
  else if ((this_00->field_0x261 & 2) != 0) {
    thunk_FUN_005803c0();
    uVar10 = *(uint *)&this_00->field_0x261 & 0xfffffffd;
    goto LAB_0057e6f0;
  }
  pVVar5 = g_visibleClass_00802A88;
  if (*(int *)&this_00->field_0x273 == 0) {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) goto cf_common_join_0057E9C2;
    iVar8 = *(int *)&this_00->field_0x24d;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar10 = 0;
    }
    else {
      thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                         *(int *)&this_00->field_0x245,*(int *)&this_00->field_0x249,
                         (int *)&local_18,&local_14);
      if ((iVar8 < 0) || (4 < iVar8)) {
        uVar10 = 0xffffffff;
      }
      else {
        if (((((int)local_18 < 0) || ((int)pVVar5->field_0028 <= (int)local_18)) ||
            ((&DAT_0079aed0)[iVar8] + local_14 < 0)) ||
           ((int)pVVar5->field_002C <= (&DAT_0079aed0)[iVar8] + local_14)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && ((int)pVVar5->field_010C < 4)) &&
           ((&pVVar5->field_003C)[pVVar5->field_010C] != 0)) {
          uVar10 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_14) * pVVar5->field_0028 +
                                   (&pVVar5->field_003C)[pVVar5->field_010C] + (int)local_18);
        }
        else {
          uVar10 = 0xffffffff;
        }
        if (-1 < (int)uVar10) {
          if (uVar10 == 0xf) {
            if ((((int)local_18 < 0) || ((int)pVVar5->field_0030 <= (int)local_18)) ||
               (((&DAT_0079aed0)[iVar8] + local_14 < 0 ||
                ((int)pVVar5->field_0034 <= (&DAT_0079aed0)[iVar8] + local_14)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (pVVar5->field_004C != 0)) {
              uVar10 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_14) * pVVar5->field_0030 +
                                       pVVar5->field_004C + (int)local_18);
            }
            else {
              uVar10 = 0xffffffff;
            }
            if (-1 < (int)uVar10) {
              uVar10 = (uint)(uVar10 != 0xf);
            }
          }
          else {
            uVar10 = 2;
          }
        }
      }
    }
    if (uVar10 != 2) {
      puVar11 = STFieldC::CreateField
                          ((STFieldC *)this_00,*(int *)&this_00->field_0x245,
                           *(int *)&this_00->field_0x249);
      *(undefined4 **)&this_00->field_0x273 = puVar11;
      goto cf_common_join_0057E9C2;
    }
    piVar15 = *(int **)&this_00->field_0x273;
    if (piVar15 == (int *)0x0) goto cf_common_join_0057E9C2;
  }
  else {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) goto cf_common_join_0057E9C2;
    iVar8 = *(int *)&this_00->field_0x24d;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar10 = 0;
    }
    else {
      thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                         *(int *)&this_00->field_0x245,*(int *)&this_00->field_0x249,&local_1c,
                         &local_20);
      if ((iVar8 < 0) || (4 < iVar8)) {
        uVar10 = 0xffffffff;
      }
      else {
        if ((((local_1c < 0) || ((int)pVVar5->field_0028 <= local_1c)) ||
            ((&DAT_0079aed0)[iVar8] + local_20 < 0)) ||
           ((int)pVVar5->field_002C <= (&DAT_0079aed0)[iVar8] + local_20)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && ((int)pVVar5->field_010C < 4)) &&
           ((&pVVar5->field_003C)[pVVar5->field_010C] != 0)) {
          uVar10 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_20) * pVVar5->field_0028 +
                                   (&pVVar5->field_003C)[pVVar5->field_010C] + local_1c);
        }
        else {
          uVar10 = 0xffffffff;
        }
        if (-1 < (int)uVar10) {
          if (uVar10 == 0xf) {
            if (((local_1c < 0) || ((int)pVVar5->field_0030 <= local_1c)) ||
               (((&DAT_0079aed0)[iVar8] + local_20 < 0 ||
                ((int)pVVar5->field_0034 <= (&DAT_0079aed0)[iVar8] + local_20)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (pVVar5->field_004C != 0)) {
              uVar10 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_20) * pVVar5->field_0030 +
                                       pVVar5->field_004C + local_1c);
            }
            else {
              uVar10 = 0xffffffff;
            }
            if (-1 < (int)uVar10) {
              uVar10 = (uint)(uVar10 != 0xf);
            }
          }
          else {
            uVar10 = 2;
          }
        }
      }
    }
    if (uVar10 != 2) goto cf_common_join_0057E9C2;
    piVar15 = *(int **)&this_00->field_0x273;
  }
  FUN_006e6580((void *)this_00->field_0211,piVar15);
  *(undefined4 *)&this_00->field_0x273 = 0;
cf_common_join_0057E9C2:
  (*this_00->vtable->vfunc_D8)();
  if ((*(int *)&this_00->field_0x255 != 0xe0) && (iVar8 = 0, 0 < *(int *)&this_00->field_0x265)) {
    do {
      thunk_FUN_004ac9e0(*(void **)(*(int *)&this_00->field_0x26d + iVar8 * 4),
                         PTR_00802a38->field_00E4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)&this_00->field_0x265);
  }
  if (*(int *)&this_00->field_0x25d == 2) {
    if ((this_00->field_0211 != 0) && ((uint)PTR_00802a38->field_00E4 % 0xf == 0)) {
      bVar6 = this_00->field_0x272 + 1;
      this_00->field_0x272 = bVar6;
      if ((short)(ushort)bVar6 < *(short *)(DAT_00806724 + 0x23)) {
        thunk_FUN_004ace30(&this_00->field_01D5,*(uint *)(DAT_00806724 + 0x30 + (uint)bVar6 * 4),
                           (int)*(short *)(DAT_00806724 + 0x2c));
        if ((*(int *)&this_00->field_0x255 != 0xe0) &&
           (iVar8 = 0, 0 < *(int *)&this_00->field_0x265)) {
          do {
            thunk_FUN_004ace30(*(void **)(*(int *)&this_00->field_0x26d + iVar8 * 4),
                               *(uint *)(DAT_00806724 + 0x30 + (uint)(byte)this_00->field_0x272 * 4)
                               ,(int)*(short *)(DAT_00806724 + 0x2c));
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)&this_00->field_0x265);
        }
      }
      else {
        thunk_FUN_00580380((STJellyGunC *)this_00);
      }
    }
    if ((((this_00->field_0259 != 0) &&
         (iVar8 = thunk_FUN_00580dc0((STJellyGunC *)this_00), iVar8 != 0)) &&
        (thunk_FUN_004ace30(&this_00->field_01D5,0,(int)*(short *)(DAT_00806724 + 0x2c)),
        *(int *)&this_00->field_0x255 != 0xe0)) && (iVar8 = 0, 0 < *(int *)&this_00->field_0x265)) {
      do {
        thunk_FUN_004ace30(*(void **)(*(int *)&this_00->field_0x26d + iVar8 * 4),0,
                           (int)*(short *)(DAT_00806724 + 0x2c));
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)&this_00->field_0x265);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

