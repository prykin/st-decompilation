
undefined4 __fastcall FUN_00643e20(AnonShape_00643E20_B7FEAA75 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGameObjC *pSVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  undefined2 uVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  int iVar11;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  STGameObjC *local_c;
  int *local_8;

  pVVar3 = g_visibleClass_00802A88;
  uVar10 = (undefined2)((uint)param_2 >> 0x10);
  local_8 = (int *)0x0;
  local_c = (STGameObjC *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    sVar2 = param_1->field_0045;
    if (sVar2 < 0) {
      iVar11 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                      (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                           (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
    }
    sVar2 = param_1->field_0043;
    if (sVar2 < 0) {
      iVar9 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
    }
    sVar2 = param_1->field_0041;
    if (sVar2 < 0) {
      iVar6 = sVar2 / 0xc9 + -1;
    }
    else {
      iVar6 = (int)(sVar2 / 0xc9);
    }
    iVar5 = (int)sVar2 / 0xc9;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if ((((((DAT_0080874d == -1) || (iVar5 = 0, g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,
                              iVar9,&local_1c,&local_20), iVar5 = extraout_EDX, iVar11 < 0)) ||
         (((iVar5 = extraout_EDX, 4 < iVar11 || (iVar5 = local_1c, local_1c < 0)) ||
          ((pVVar3->field_0030 <= local_1c ||
           ((local_20 = (&DAT_0079aed0)[iVar11] + local_20, local_20 < 0 ||
            (pVVar3->field_0034 <= local_20)))))))) || (pVVar3->field_004C == 0)) ||
       (*(char *)(local_20 * pVVar3->field_0030 + pVVar3->field_004C + local_1c) != '\0')) {
      local_1c = iVar5;
      if (param_1->field_01E7 == '\x01') {
        thunk_FUN_004ad460(&param_1->field_0x1d5,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_1c = extraout_EDX_00;
      }
    }
    else if (param_1->field_01E7 == '\0') {
      thunk_FUN_004ad430((int)&param_1->field_0x1d5);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_1c = extraout_EDX_01;
    }
    uVar10 = (undefined2)((uint)local_1c >> 0x10);
  }
  if (param_1->field_023D == 1) {
    if ((byte)param_1->field_027D < 8) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,param_1->field_0024,
                           CONCAT22(uVar10,param_1->field_0262),CASE_1);
    }
    pSVar4 = local_c;
    if ((((param_1->field_027D == '\0') && (param_1->field_0259 != 10)) &&
        (local_c != (STGameObjC *)0x0)) && (local_c->field_0018 == param_1->field_025E)) {
      FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,local_c->field_01ED);
    }
    bVar8 = param_1->field_027D + 1;
    param_1->field_027D = bVar8;
    if (bVar8 < 8) {
      if ((pSVar4 == (STGameObjC *)0x0) || (pSVar4->field_0018 != param_1->field_025E)) {
        FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
      }
      bVar8 = param_1->field_027D;
    }
    if (bVar8 == 8) {
      FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
      uVar7 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
      return uVar7;
    }
  }
  else {
    if (param_1->field_0270 == 0) {
      puVar1 = &param_1->field_0x1d5;
      iVar11 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar11 != 0) {
        return 0xffffffff;
      }
      iVar11 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar11 != 0) {
        return 0xffffffff;
      }
      bVar8 = param_1->field_027C;
      iVar11 = thunk_FUN_004acd30(puVar1,'\x01');
      if ((int)(uint)bVar8 < iVar11) {
        iVar11 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar8);
        if (iVar11 != 0) {
          return 0xffffffff;
        }
        iVar11 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar11 != 0) {
          return 0xffffffff;
        }
      }
      iVar11 = thunk_FUN_004acd30(puVar1,'\x01');
      if (iVar11 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar8 = param_1->field_027C;
      if (bVar8 < 0xf) {
        iVar11 = FUN_006e62d0(PTR_00802a38,param_1->field_0274,(int *)&local_8);
        if (iVar11 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar11 = (**(code **)(*local_8 + 0xe0))
                           (param_1->field_0278,&local_10,&local_14,&local_18,&local_24);
        if (iVar11 != 0) {
          return 0xffffffff;
        }
        param_1->field_0041 = (undefined2)local_10;
        param_1->field_0045 = (undefined2)local_18;
        param_1->field_0043 = (undefined2)local_14;
        if (local_24 == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006ea460(param_1->field_0211,param_1->field_01ED,*(int *)((int)local_8 + 0x1ed));
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,*(int *)((int)local_8 + 0x1ed));
        }
        bVar8 = param_1->field_027C;
      }
      if (bVar8 == 0xf) {
        iVar11 = FUN_006e62d0(PTR_00802a38,param_1->field_0274,(int *)&local_8);
        if (iVar11 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0xe4))(param_1->field_0278);
      }
      puVar1 = &param_1->field_0x1d5;
      iVar11 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar11 != 0) {
        return 0xffffffff;
      }
      iVar11 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar11 != 0) {
        return 0xffffffff;
      }
      bVar8 = param_1->field_027C;
      iVar11 = thunk_FUN_004acd30(puVar1,'\x01');
      if ((int)(uint)bVar8 < iVar11) {
        iVar11 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar8);
        if (iVar11 != 0) {
          return 0xffffffff;
        }
        iVar11 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar11 != 0) {
          return 0xffffffff;
        }
      }
      iVar11 = thunk_FUN_004acd30(puVar1,'\x01');
      if (iVar11 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    STT3DSprC::StopShow((STT3DSprC *)&param_1->field_0x1d5,1);
  }
cf_common_exit_0064428F:
  uVar7 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
  return uVar7;
}

