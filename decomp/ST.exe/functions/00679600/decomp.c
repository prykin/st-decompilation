
void __fastcall FUN_00679600(void *param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  bool bVar10;
  int local_1a8;
  undefined4 local_1a4 [87];
  uint local_48 [13];
  uint local_14;
  byte *local_10;
  byte local_c;
  undefined3 uStack_b;
  void *local_8;
  
  local_14 = *(uint *)((int)param_1 + 0x640);
  if (8 < local_14) {
    *(undefined4 *)((int)param_1 + 0x640) = 0xff;
  }
  if (*(int *)((int)param_1 + 0x640) == 8) {
    *(uint *)((int)param_1 + 0x640) = (uint)DAT_0080874d;
  }
  local_8 = param_1;
  if (*(char *)((int)param_1 + 0x644) != '\x01') goto cf_common_exit_0067989B;
  uVar4 = *(uint *)((int)param_1 + 0x640);
  uVar7 = *(uint *)((int)param_1 + 0x5d7);
  if ((uVar4 != uVar7) && (uVar4 != 0xff)) {
    cVar2 = (char)uVar4;
    local_10 = (byte *)CONCAT31(local_10._1_3_,cVar2);
    _local_c = CONCAT31(uStack_b,(char)uVar7);
    if (DAT_00808a8f == '\0') {
      if (cVar2 == (char)uVar7) {
LAB_0067971a:
        iVar6 = 0;
      }
      else {
        uVar4 = uVar4 & 0xff;
        uVar7 = uVar7 & 0xff;
        cVar1 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7);
        if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\0')) {
          iVar6 = -2;
        }
        else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\0')) {
          iVar6 = -1;
        }
        else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\x01')) {
          iVar6 = 1;
        }
        else {
          if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) != '\x01'))
          goto LAB_0067971a;
          iVar6 = 2;
        }
      }
      bVar10 = iVar6 < 0;
    }
    else {
      bVar10 = (&DAT_008087ea)[(uVar7 & 0xff) * 0x51] != (&DAT_008087ea)[(uVar4 & 0xff) * 0x51];
    }
    if ((bVar10) && (sVar3 = thunk_FUN_0043e460(cVar2), param_1 = local_8, sVar3 != 0))
    goto cf_common_exit_0067989B;
  }
  iVar6 = 0;
  piVar8 = &local_1a8;
  local_10 = &DAT_008087e9;
  param_1 = local_8;
  do {
    uVar4 = (uint)*local_10;
    if ((uVar4 != 0xff) && (uVar7 = *(uint *)((int)param_1 + 0x5d7), uVar4 != uVar7)) {
      _local_c = CONCAT31(uStack_b,(byte)uVar7);
      if (DAT_00808a8f == '\0') {
        if (*local_10 == (byte)uVar7) {
          iVar5 = 0;
        }
        else {
          uVar7 = uVar7 & 0xff;
          cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar7);
          if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\0')) {
            iVar5 = -2;
            param_1 = local_8;
          }
          else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\0'))
          {
            iVar5 = -1;
            param_1 = local_8;
          }
          else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\x01'))
          {
            iVar5 = 1;
            param_1 = local_8;
          }
          else if ((cVar2 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar4) == '\x01')) {
            iVar5 = 2;
            param_1 = local_8;
          }
          else {
            iVar5 = 0;
            param_1 = local_8;
          }
        }
        bVar10 = iVar5 < 0;
      }
      else {
        bVar10 = (&DAT_008087ea)[(uVar7 & 0xff) * 0x51] != (&DAT_008087ea)[uVar4 * 0x51];
        param_1 = local_8;
      }
      if (bVar10) {
        piVar8[1] = uVar4;
        iVar6 = iVar6 + 1;
        *piVar8 = (-(uint)(*(char *)((int)&DAT_008087c4 + uVar4 * 0x51 + 3) != '\0') & 0xffffffa6) +
                  100;
        piVar8 = piVar8 + 0xb;
      }
    }
    local_10 = local_10 + 0x51;
  } while ((int)local_10 < 0x808a71);
  if (iVar6 < 1) {
    *(undefined4 *)((int)param_1 + 0x640) = 0xff;
  }
  else {
    iVar6 = thunk_FUN_00423220((void *)((int)param_1 + 0xa4),&local_1a8,iVar6);
    *(undefined4 *)((int)param_1 + 0x640) = local_1a4[iVar6 * 0xb];
  }
cf_common_exit_0067989B:
  uVar4 = *(uint *)((int)param_1 + 0x640);
  if (uVar4 != local_14) {
    puVar9 = local_48;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_48[1] = *(undefined4 *)((int)param_1 + 0x6fe);
    local_48[0] = 0x6a;
    local_48[2] = uVar4;
    thunk_FUN_0067a020(param_1,local_48,-1);
    thunk_FUN_0067c110(param_1);
  }
  return;
}

