
void __fastcall FUN_0041f630(AnonShape_0041F630_B1BEE81C *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined1 local_c;
  undefined1 local_8;

  if (7 < *(uint *)&param_1->field_0x24) {
    return;
  }
  if ((g_playSystem_00802A38 != (STPlaySystemC *)0x0) &&
     (7 < (byte)(&DAT_008087e9)[*(uint *)&param_1->field_0x24 * 0x51])) {
    return;
  }
  if (param_1->field_0229 != 0) {
    return;
  }
  iVar4 = *(int *)&param_1->field_0x20;
  if (((iVar4 != 0x14) && (iVar4 != 1000)) && (iVar4 != 0x3e9)) {
    return;
  }
  bVar1 = param_1->field_0x24;
  if (DAT_00808a8f == '\0') {
    if (bVar1 == DAT_0080874d) {
LAB_0041f738:
      iVar7 = 0;
    }
    else {
      uVar5 = (uint)DAT_0080874d;
      bVar2 = g_playerRelationMatrix[bVar1][uVar5];
      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar7 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar7 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
        iVar7 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_0041f738;
        iVar7 = 2;
      }
    }
    bVar6 = iVar7 < 0;
  }
  else {
    bVar6 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
  }
  if (!bVar6) {
    local_c = 1;
    goto LAB_0041f793;
  }
  if (iVar4 != 0x14) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(*(int *)param_1 + 0x2c))();
    switch(uVar3) {
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x4a:
    case 0x4b:
    case 0x4e:
    case 0x51:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
      goto switchD_0041f763_caseD_9;
    default:
switchD_0041f763_caseD_7:
      local_c = 2;
      goto LAB_0041f793;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)param_1 + 0x2c))();
  switch(uVar3) {
  case 7:
  case 8:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    goto switchD_0041f763_caseD_7;
  }
switchD_0041f763_caseD_9:
  local_c = 4;
LAB_0041f793:
  if (param_1->field_0211 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(*(int *)param_1 + 0x6c))();
    switch(uVar3) {
    case 0:
      local_8 = 10;
      break;
    case 1:
      local_8 = 0x10;
      break;
    case 2:
      local_8 = 0x16;
      break;
    case 3:
      local_8 = 0x1c;
      break;
    case 4:
      local_8 = 0x22;
      break;
    case 5:
      local_8 = 0x28;
      break;
    case 6:
      local_8 = 0x2e;
      break;
    case 7:
      local_8 = 0x34;
      break;
    default:
      local_8 = 0xff;
    }
    Library::Ourlib::ST3DSMAP::FUN_006e6630
              ((void *)param_1->field_0211,param_1->field_01ED,local_c,local_8,0);
    iVar7 = 0;
    iVar4 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
    FUN_006e6870((void *)param_1->field_0211,iVar4,iVar7);
    param_1->field_0229 = 1;
  }
  return;
}

