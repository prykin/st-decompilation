
void __fastcall FUN_0058bd90(AnonShape_0058BD90_DCBCF849 *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint local_8;
  
  local_8 = 0;
  if (param_1->field_0231 == 1) {
    return;
  }
  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar3 = thunk_FUN_0041c710((int)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar4,iVar3);
    bVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870(param_1->field_0211,iVar5,iVar3);
  switch(param_1->field_0231) {
  case 0:
  case 3:
    goto switchD_0058bec9_caseD_0;
  default:
    goto cf_common_exit_0058C391;
  case 2:
    goto switchD_0058bec9_caseD_2;
  case 4:
    puVar1 = &param_1->field_0x1d5;
    iVar3 = thunk_FUN_004ac910(puVar1,'\x0e');
    local_8 = iVar3 + 1;
    if ((int)local_8 < 0x23) {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',local_8);
    }
    else {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',0x18);
      param_1->field_0231 = 2;
    }
    if (local_8 == 0x20) {
      thunk_FUN_0058bb90((AnonShape_0058BB90_CF74AF20 *)param_1);
    }
switchD_0058bec9_caseD_2:
    if (param_1->field_0231 == 2) {
      local_8 = 0x18;
    }
    if ((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0) {
      if (param_1->field_0235 == 0) {
        if (param_1->field_023D < param_1->field_0241) {
          iVar3 = param_1->field_0239 + 1;
          param_1->field_0239 = iVar3;
          if (*(short *)(DAT_00806724 + 0x23) <= iVar3) {
            param_1->field_0231 = 1;
            param_1->field_0251 = param_1->field_0249 * 2 - param_1->field_0251;
            param_1->field_0255 = param_1->field_024D * 2 - param_1->field_0255;
            goto cf_common_exit_0058C391;
          }
          thunk_FUN_004ace60(&param_1->field_0x1d5,'\x0e');
          thunk_FUN_004ace30(&param_1->field_0x1d5,
                             *(uint *)(DAT_00806724 + 0x30 + param_1->field_0239 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
        }
      }
      else {
        iVar3 = param_1->field_0239 + -1;
        param_1->field_0239 = iVar3;
        if (iVar3 < 1) {
          param_1->field_0239 = 0;
          param_1->field_0235 = 0;
          thunk_FUN_004aceb0(&param_1->field_0x1d5,'\x0e');
          param_1->field_0241 = -param_1->field_023D;
        }
        else {
          thunk_FUN_004ace30(&param_1->field_0x1d5,*(uint *)(DAT_00806724 + 0x30 + iVar3 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
          param_1->field_0241 = -param_1->field_023D;
        }
      }
    }
    iVar5 = param_1->field_0261 + param_1->field_0259 * 5;
    iVar9 = param_1->field_0265 + param_1->field_025D * 5;
    param_1->field_0265 = iVar9;
    iVar3 = param_1->field_023D + -5;
    sVar7 = param_1->field_0269 - (short)((uint)iVar5 >> 8);
    param_1->field_023D = iVar3;
    param_1->field_0261 = iVar5;
    iVar3 = iVar3 * iVar3 * 0xd;
    sVar8 = param_1->field_026D - (short)((uint)iVar9 >> 8);
    param_1->field_0041 = sVar7;
    param_1->field_0043 = sVar8;
    sVar6 = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe) + param_1->field_0271;
    param_1->field_0045 = sVar6;
    if ((((sVar6 < 0x4b0) && ((uint)PTR_00802a38->field_00E4 % 0x11 == 0)) &&
        ((int)sVar7 < g_worldGrid.sizeX * 0xc9)) &&
       (((0 < sVar7 && ((int)sVar8 < g_worldGrid.sizeY * 0xc9)) && (0 < sVar8)))) {
      param_1->field_0231 = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  iVar3 = thunk_FUN_004acd30(&param_1->field_0x1d5,'\b');
  iVar5 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\b');
  if (iVar3 + -1 <= iVar5) {
    thunk_FUN_0058bb50((STJellyGunC *)param_1);
  }
switchD_0058bec9_caseD_0:
  sVar6 = param_1->field_0041;
  param_1->field_0045 = param_1->field_0045 + 0x12;
  sVar8 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0043;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  if (sVar8 < 0) {
    iVar3 = (short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                   (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                        (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f));
  }
  if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
     ((sVar7 < 0 ||
      ((((g_worldGrid.sizeY <= sVar7 || (sVar8 = (short)iVar3, sVar8 < 0)) ||
        (g_worldGrid.sizeZ <= sVar8)) ||
       ((g_worldGrid.cells
         [(int)g_worldGrid.planeStride * (int)sVar8 + (int)g_worldGrid.sizeX * (int)sVar7 +
          (int)sVar6].objects[0] == (STWorldObject *)0x0 ||
        (g_worldGrid.cells
         [(int)g_worldGrid.planeStride * (int)sVar8 + (int)g_worldGrid.sizeX * (int)sVar7 +
          (int)sVar6].objects[0]->value_20 == 400)))))))) {
    if ((5 < iVar3) && ((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0)) {
      iVar3 = param_1->field_0239 + 1;
      param_1->field_0239 = iVar3;
      if (*(short *)(DAT_00806724 + 0x23) <= iVar3) {
        iVar3 = param_1->field_0231;
        param_1->field_0239 = 0;
        param_1->field_0231 = 1;
        if (iVar3 == 3) {
          thunk_FUN_0058c560(param_1,param_1->field_0249,param_1->field_024D);
        }
        goto cf_common_exit_0058C391;
      }
      thunk_FUN_004ace30(&param_1->field_0x1d5,*(uint *)(DAT_00806724 + 0x30 + iVar3 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0) {
      iVar3 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\x0e');
      local_8 = iVar3 + 1;
      if (0x18 < (int)local_8) {
        local_8 = 0x18;
      }
LAB_0058c38c:
      STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_0x1d5,'\x0e',local_8);
    }
  }
  else {
    puVar1 = &param_1->field_0x1d5;
    param_1->field_0231 = 5;
    STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
    thunk_FUN_004ad5e0((int)puVar1);
    STT3DSprC::LoadSequence((STT3DSprC *)puVar1,8,DAT_00806774,s_explsna_007cbaac,0x1d);
    STT3DSprC::StartShow((STT3DSprC *)puVar1,8,PTR_00802a38->field_00E4);
    param_1->field_0045 = param_1->field_0045 + 0x12;
    param_1->field_0231 = 6;
  }
cf_common_exit_0058C391:
  STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_0x1d5,'\x0e');
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

