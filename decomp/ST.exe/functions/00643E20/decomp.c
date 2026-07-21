
undefined4 __fastcall FUN_00643e20(AnonShape_00643E20_B7FEAA75 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGameObjC *pSVar4;
  undefined4 in_EAX;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  STGameObjC *local_c;
  int *local_8;
  
  pVVar3 = g_visibleClass_00802A88;
  uVar9 = (undefined2)((uint)param_2 >> 0x10);
  local_8 = (int *)0x0;
  local_c = (STGameObjC *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    sVar2 = param_1->field_0045;
    if (sVar2 < 0) {
      iVar10 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                      (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                           (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
    }
    sVar2 = param_1->field_0043;
    if (sVar2 < 0) {
      iVar8 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
    }
    sVar2 = param_1->field_0041;
    if (sVar2 < 0) {
      uVar5 = (int)(sVar2 / 0xc9) - 1;
    }
    else {
      uVar5 = (uint)(sVar2 / 0xc9);
    }
    uVar12 = CONCAT44((int)sVar2 / 0xc9,uVar5);
    if ((DAT_0080874d == -1) ||
       (uVar12 = (ulonglong)uVar5, g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_00643f4a:
      if (param_1->field_01E7 == '\x01') {
        uVar12 = thunk_FUN_004ad460(&param_1->field_0x1d5,0);
      }
    }
    else {
      uVar11 = thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,uVar5,
                                  iVar8,(int *)&local_1c,&local_20);
      uVar12 = uVar11;
      if ((iVar10 < 0) ||
         (((4 < iVar10 || (uVar12 = CONCAT44(local_1c,(int)uVar11), (int)local_1c < 0)) ||
          (uVar12 = CONCAT44(local_1c,(int)uVar11), (int)pVVar3->field_0030 <= (int)local_1c))))
      goto LAB_00643f4a;
      local_20 = (&DAT_0079aed0)[iVar10] + local_20;
      uVar12 = CONCAT44(local_1c,local_20);
      if ((((local_20 < 0) ||
           (uVar12 = CONCAT44(local_1c,local_20), (int)pVVar3->field_0034 <= local_20)) ||
          (uVar12 = CONCAT44(local_1c,local_20), pVVar3->field_004C == 0)) ||
         (uVar5 = (uint)*(byte *)(local_20 * pVVar3->field_0030 + pVVar3->field_004C + local_1c),
         uVar12 = CONCAT44(local_1c,uVar5), uVar5 != 0)) goto LAB_00643f4a;
      uVar12 = (ulonglong)local_1c << 0x20;
      if (param_1->field_01E7 == '\0') {
        uVar12 = thunk_FUN_004ad430((int)&param_1->field_0x1d5);
      }
    }
    in_EAX = (undefined4)uVar12;
    uVar9 = (undefined2)(uVar12 >> 0x30);
  }
  if (param_1->field_023D == 1) {
    if ((byte)param_1->field_027D < 8) {
      local_c = STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,
                           CONCAT31((int3)((uint)in_EAX >> 8),param_1->field_0024),
                           CONCAT22(uVar9,param_1->field_0262),CASE_1);
    }
    pSVar4 = local_c;
    if (((param_1->field_027D == '\0') && (param_1->field_0259 != 10)) &&
       ((local_c != (STGameObjC *)0x0 && (local_c->field_0018 == param_1->field_025E)))) {
      FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,local_c[1].field_001C);
    }
    bVar7 = param_1->field_027D + 1;
    param_1->field_027D = bVar7;
    if (bVar7 < 8) {
      if ((pSVar4 == (STGameObjC *)0x0) || (pSVar4->field_0018 != param_1->field_025E)) {
        FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
      }
      bVar7 = param_1->field_027D;
    }
    if (bVar7 == 8) {
      FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
      uVar6 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
      return uVar6;
    }
  }
  else {
    if (param_1->field_0270 == 0) {
      puVar1 = &param_1->field_0x1d5;
      iVar10 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar10 != 0) {
        return 0xffffffff;
      }
      iVar10 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar10 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      iVar10 = thunk_FUN_004acd30(puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar10) {
        iVar10 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar10 != 0) {
          return 0xffffffff;
        }
        iVar10 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar10 != 0) {
          return 0xffffffff;
        }
      }
      iVar10 = thunk_FUN_004acd30(puVar1,'\x01');
      if (iVar10 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar7 = param_1->field_027C;
      if (bVar7 < 0xf) {
        iVar10 = FUN_006e62d0(PTR_00802a38,param_1->field_0274,(int *)&local_8);
        if (iVar10 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        iVar10 = (**(code **)(*local_8 + 0xe0))
                           (param_1->field_0278,&local_10,&local_14,&local_18,&local_24);
        if (iVar10 != 0) {
          return 0xffffffff;
        }
        param_1->field_0041 = (undefined2)local_10;
        param_1->field_0045 = (undefined2)local_18;
        param_1->field_0043 = (undefined2)local_14;
        if (local_24 == 0) {
          FUN_006ea460(param_1->field_0211,param_1->field_01ED,*(int *)((int)local_8 + 0x1ed));
        }
        else {
          FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,*(int *)((int)local_8 + 0x1ed));
        }
        bVar7 = param_1->field_027C;
      }
      if (bVar7 == 0xf) {
        iVar10 = FUN_006e62d0(PTR_00802a38,param_1->field_0274,(int *)&local_8);
        if (iVar10 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        (**(code **)(*local_8 + 0xe4))(param_1->field_0278);
      }
      puVar1 = &param_1->field_0x1d5;
      iVar10 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar10 != 0) {
        return 0xffffffff;
      }
      iVar10 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar10 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      iVar10 = thunk_FUN_004acd30(puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar10) {
        iVar10 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar10 != 0) {
          return 0xffffffff;
        }
        iVar10 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar10 != 0) {
          return 0xffffffff;
        }
      }
      iVar10 = thunk_FUN_004acd30(puVar1,'\x01');
      if (iVar10 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    STT3DSprC::StopShow((STT3DSprC *)&param_1->field_0x1d5,1);
  }
cf_common_exit_0064428F:
  uVar6 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
  return uVar6;
}

