
void __fastcall FUN_0041f630(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined1 local_c;
  undefined1 local_8;
  
  if (7 < (uint)param_1[9]) {
    return;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[param_1[9] * 0x51])) {
    return;
  }
  if (*(int *)((int)param_1 + 0x229) != 0) {
    return;
  }
  iVar5 = param_1[8];
  if (((iVar5 != 0x14) && (iVar5 != 1000)) && (iVar5 != 0x3e9)) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 9);
  if (DAT_00808a8f == '\0') {
    if (bVar1 == DAT_0080874d) {
LAB_0041f738:
      iVar8 = 0;
    }
    else {
      uVar6 = (uint)DAT_0080874d;
      uVar3 = (uint)bVar1;
      cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar6);
      if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\0')) {
        iVar8 = -2;
      }
      else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\0')) {
        iVar8 = -1;
      }
      else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\x01')) {
        iVar8 = 1;
      }
      else {
        if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) != '\x01'))
        goto LAB_0041f738;
        iVar8 = 2;
      }
    }
    bVar7 = iVar8 < 0;
  }
  else {
    bVar7 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
  }
  if (!bVar7) {
    local_c = 1;
    goto LAB_0041f793;
  }
  if (iVar5 != 0x14) {
    uVar4 = (**(code **)(*param_1 + 0x2c))();
    switch(uVar4) {
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
  uVar4 = (**(code **)(*param_1 + 0x2c))();
  switch(uVar4) {
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
  if (*(int *)((int)param_1 + 0x211) != 0) {
    uVar4 = (**(code **)(*param_1 + 0x6c))();
    switch(uVar4) {
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
              (*(void **)((int)param_1 + 0x211),*(int *)((int)param_1 + 0x1ed),local_c,local_8,0);
    iVar8 = 0;
    iVar5 = thunk_FUN_004ad650((int)param_1 + 0x1d5);
    FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar5,iVar8);
    *(undefined4 *)((int)param_1 + 0x229) = 1;
  }
  return;
}

