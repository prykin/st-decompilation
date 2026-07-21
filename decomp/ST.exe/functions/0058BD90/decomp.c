
void __fastcall FUN_0058bd90(AnonShape_0058BD90_DCBCF849 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint local_8;

  local_8 = 0;
  if (param_1->field_0231 == 1) {
    return;
  }
  sVar5 = param_1->field_0041;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar5;
  param_1->field_005B = sVar5;
  sVar5 = param_1->field_0043;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar5;
  param_1->field_005D = sVar5;
  sVar5 = param_1->field_0045;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar5;
  param_1->field_005F = sVar5;
  iVar2 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    iVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870(param_1->field_0211,iVar4,iVar2);
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
    iVar2 = thunk_FUN_004ac910(puVar1,'\x0e');
    local_8 = iVar2 + 1;
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
    if ((PTR_00802a38->field_00E4 & 3) == 0) {
      if (param_1->field_0235 == 0) {
        if (param_1->field_023D < param_1->field_0241) {
          iVar2 = param_1->field_0239 + 1;
          param_1->field_0239 = iVar2;
          if (*(short *)(DAT_00806724 + 0x23) <= iVar2) {
            param_1->field_0231 = 1;
            param_1->field_0251 = param_1->field_0249 * 2 - param_1->field_0251;
            param_1->field_0255 = param_1->field_024D * 2 - param_1->field_0255;
            goto cf_common_exit_0058C391;
          }
          thunk_FUN_004ace60(&param_1->field_0x1d5,'\x0e');
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004ace30(&param_1->field_0x1d5,
                             *(uint *)(DAT_00806724 + 0x30 + param_1->field_0239 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
        }
      }
      else {
        iVar2 = param_1->field_0239 + -1;
        param_1->field_0239 = iVar2;
        if (iVar2 < 1) {
          param_1->field_0239 = 0;
          param_1->field_0235 = 0;
          thunk_FUN_004aceb0(&param_1->field_0x1d5,'\x0e');
          param_1->field_0241 = -param_1->field_023D;
        }
        else {
          thunk_FUN_004ace30(&param_1->field_0x1d5,*(uint *)(DAT_00806724 + 0x30 + iVar2 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
          param_1->field_0241 = -param_1->field_023D;
        }
      }
    }
    iVar4 = param_1->field_0261 + param_1->field_0259 * 5;
    iVar8 = param_1->field_0265 + param_1->field_025D * 5;
    param_1->field_0265 = iVar8;
    iVar2 = param_1->field_023D + -5;
    sVar6 = param_1->field_0269 - (short)((uint)iVar4 >> 8);
    param_1->field_023D = iVar2;
    param_1->field_0261 = iVar4;
    iVar2 = iVar2 * iVar2 * 0xd;
    sVar7 = param_1->field_026D - (short)((uint)iVar8 >> 8);
    param_1->field_0041 = sVar6;
    param_1->field_0043 = sVar7;
    sVar5 = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe) + param_1->field_0271;
    param_1->field_0045 = sVar5;
    if ((((sVar5 < 0x4b0) && (PTR_00802a38->field_00E4 % 0x11 == 0)) &&
        ((int)sVar6 < g_worldGrid.sizeX * 0xc9)) &&
       (((0 < sVar6 && ((int)sVar7 < g_worldGrid.sizeY * 0xc9)) && (0 < sVar7)))) {
      param_1->field_0231 = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  iVar2 = thunk_FUN_004acd30(&param_1->field_0x1d5,'\b');
  iVar4 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\b');
  if (iVar2 + -1 <= iVar4) {
    thunk_FUN_0058bb50(param_1);
  }
switchD_0058bec9_caseD_0:
  sVar5 = param_1->field_0041;
  param_1->field_0045 = param_1->field_0045 + 0x12;
  sVar7 = param_1->field_0045;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  if (sVar7 < 0) {
    iVar2 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                   (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                        (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
  }
  if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
     ((sVar6 < 0 ||
      ((((g_worldGrid.sizeY <= sVar6 || (sVar7 = (short)iVar2, sVar7 < 0)) ||
        (g_worldGrid.sizeZ <= sVar7)) ||
       ((g_worldGrid.cells
         [(int)g_worldGrid.planeStride * (int)sVar7 + (int)g_worldGrid.sizeX * (int)sVar6 +
          (int)sVar5].objects[0] == (STWorldObject *)0x0 ||
        (g_worldGrid.cells
         [(int)g_worldGrid.planeStride * (int)sVar7 + (int)g_worldGrid.sizeX * (int)sVar6 +
          (int)sVar5].objects[0]->value_20 == 400)))))))) {
    if ((5 < iVar2) && ((PTR_00802a38->field_00E4 & 3) == 0)) {
      iVar2 = param_1->field_0239 + 1;
      param_1->field_0239 = iVar2;
      if (*(short *)(DAT_00806724 + 0x23) <= iVar2) {
        iVar2 = param_1->field_0231;
        param_1->field_0239 = 0;
        param_1->field_0231 = 1;
        if (iVar2 == 3) {
          thunk_FUN_0058c560(param_1,param_1->field_0249,param_1->field_024D);
        }
        goto cf_common_exit_0058C391;
      }
      thunk_FUN_004ace30(&param_1->field_0x1d5,*(uint *)(DAT_00806724 + 0x30 + iVar2 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((PTR_00802a38->field_00E4 & 1) == 0) {
      iVar2 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\x0e');
      local_8 = iVar2 + 1;
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
    STT3DSprC::LoadSequence((STT3DSprC *)puVar1,8,DAT_00806774,"explsna",0x1d);
    STT3DSprC::StartShow((STT3DSprC *)puVar1,8,PTR_00802a38->field_00E4);
    param_1->field_0045 = param_1->field_0045 + 0x12;
    param_1->field_0231 = 6;
  }
cf_common_exit_0058C391:
  STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_0x1d5,'\x0e');
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

