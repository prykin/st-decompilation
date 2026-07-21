
undefined4 FUN_006b92b0(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if ((*(uint *)(*param_1 + 8) & 0x3000000) != 0) {
    Library::DKW::DDX::FUN_006bb370(*param_1,0,0);
    return 0;
  }
  local_14 = param_1[4];
  local_10 = param_1[5];
  local_c = param_1[6];
  local_24 = *param_2;
  local_8 = param_1[7];
  local_20 = param_2[1];
  local_1c = param_2[2];
  iVar6 = param_2[3];
  local_44 = *param_2;
  iVar1 = param_2[1];
  iVar7 = param_2[2];
  local_38 = param_2[3];
  local_18 = iVar6;
  iVar4 = FUN_006b0460(&local_34,param_2,&local_14);
  if (iVar4 == 0) {
    iVar4 = 0;
    goto LAB_006b945a;
  }
  iVar6 = param_2[2];
  bVar2 = false;
  if (local_c < iVar6) {
    if ((local_34 == local_14) && (local_2c == local_c)) {
      bVar2 = true;
    }
    else {
LAB_006b9365:
      bVar2 = false;
    }
  }
  else if (iVar6 < local_c) {
    if ((local_34 != *param_2) || (local_2c != iVar6)) goto LAB_006b9365;
    bVar2 = true;
  }
  iVar4 = param_2[3];
  if (local_8 < iVar4) {
    if ((local_30 == local_10) && (local_28 == local_8)) {
      bVar3 = 1;
    }
    else {
LAB_006b93a5:
      bVar3 = 0;
    }
LAB_006b93a7:
    bVar2 = (bool)(bVar2 | bVar3);
  }
  else if (iVar4 < local_8) {
    if ((local_30 != param_2[1]) || (local_28 != iVar4)) goto LAB_006b93a5;
    bVar3 = 1;
    goto LAB_006b93a7;
  }
  if (bVar2) {
    iVar7 = *param_2;
    if (iVar7 < local_14) {
      local_14 = iVar7;
    }
    iVar5 = local_c + local_14;
    if (local_c + local_14 < iVar7 + iVar6) {
      iVar5 = iVar7 + iVar6;
    }
    iVar6 = param_2[1];
    local_c = iVar5 - local_14;
    if (iVar6 < local_10) {
      local_10 = iVar6;
    }
    iVar7 = local_8 + local_10;
    if (local_8 + local_10 < iVar4 + iVar6) {
      iVar7 = iVar4 + iVar6;
    }
    local_8 = iVar7 - local_10;
    iVar7 = 0;
    iVar6 = local_18;
    iVar4 = 0;
  }
  else if (local_30 == param_2[1]) {
    if (local_34 == *param_2) {
      local_44 = local_44 + local_2c;
    }
    local_20 = local_20 + local_28;
    iVar7 = iVar7 - local_2c;
    iVar6 = local_18 - local_28;
    iVar4 = local_1c;
  }
  else {
    if (local_34 == *param_2) {
      local_24 = local_24 + local_2c;
    }
    iVar4 = local_1c - local_2c;
    local_38 = local_38 - local_28;
    local_20 = local_30;
    iVar6 = local_28;
  }
LAB_006b945a:
  Library::DKW::DDX::FUN_006bac60(*param_1,0,0,local_14,local_10,local_c,local_8);
  if ((iVar7 != 0) && (local_38 != 0)) {
    Library::DKW::DDX::FUN_006bac60(*param_1,0,0,local_44,iVar1,iVar7,local_38);
  }
  if ((iVar4 != 0) && (iVar6 != 0)) {
    Library::DKW::DDX::FUN_006bac60(*param_1,0,0,local_24,local_20,iVar4,iVar6);
    return 0;
  }
  return 0;
}

