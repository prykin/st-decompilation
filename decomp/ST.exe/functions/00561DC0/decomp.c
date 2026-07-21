
int FUN_00561dc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 local_c;

  iVar1 = param_1 * 0x10000;
  iVar2 = param_2 * 0x10000;
  if (param_3 < 1) {
    local_10 = 0xf;
  }
  else {
    local_10 = param_3 + -1;
  }
  iVar8 = (int)(local_10 * 0x168 + (local_10 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar3 = FUN_006db6d0(iVar8);
  iVar4 = Library::DKW::STR::FUN_006db640(iVar8);
  local_1c = 0;
  iVar8 = iVar1 + iVar3 * 3;
  local_c = 0;
  iVar7 = iVar2 + iVar4 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar5 = iVar8 >> 0x10;
      iVar6 = iVar7 >> 0x10;
      if ((((iVar5 < 0) || (DAT_008033a4 <= iVar5)) || (iVar6 < 0)) ||
         ((DAT_008033a8 <= iVar6 ||
          (iVar9 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar6 + iVar5) * 2), iVar9 < 1))))
      {
        local_1c = local_1c + DAT_00803344;
      }
      else {
        iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar5,iVar6);
        local_1c = local_1c + -1 + (iVar9 - iVar5);
      }
      iVar8 = iVar8 + iVar3;
      iVar7 = iVar7 - iVar4;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
    if (local_1c < 0) {
      local_1c = 0;
    }
  }
  local_20 = local_10;
  if (param_3 < 0xf) {
    local_10 = param_3 + 1;
  }
  else {
    local_10 = 0;
  }
  iVar8 = (int)(local_10 * 0x168 + (local_10 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar4 = FUN_006db6d0(iVar8);
  iVar5 = Library::DKW::STR::FUN_006db640(iVar8);
  iVar3 = 0;
  iVar8 = iVar1 + iVar4 * 3;
  local_c = 0;
  iVar7 = iVar2 + iVar5 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar6 = iVar8 >> 0x10;
      iVar9 = iVar7 >> 0x10;
      if (((iVar6 < 0) || (DAT_008033a4 <= iVar6)) ||
         ((iVar9 < 0 ||
          ((DAT_008033a8 <= iVar9 ||
           (iVar10 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar9 + iVar6) * 2), iVar10 < 1)
           ))))) {
        iVar3 = iVar3 + DAT_00803344;
      }
      else {
        iVar6 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar6,iVar9);
        iVar3 = iVar3 + -1 + (iVar10 - iVar6);
      }
      iVar8 = iVar8 + iVar4;
      iVar7 = iVar7 - iVar5;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  if (iVar3 < local_1c) {
    local_20 = local_10;
    local_1c = iVar3;
  }
  iVar8 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar7 = FUN_006db6d0(iVar8);
  iVar3 = Library::DKW::STR::FUN_006db640(iVar8);
  iVar8 = 0;
  iVar1 = iVar1 + iVar7 * 3;
  local_c = 0;
  iVar2 = iVar2 + iVar3 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar4 = iVar1 >> 0x10;
      iVar5 = iVar2 >> 0x10;
      if ((((iVar4 < 0) || (DAT_008033a4 <= iVar4)) || (iVar5 < 0)) ||
         ((DAT_008033a8 <= iVar5 ||
          (iVar6 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar5 + iVar4) * 2), iVar6 < 1))))
      {
        iVar8 = iVar8 + DAT_00803344;
      }
      else {
        iVar4 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar4,iVar5);
        iVar8 = iVar8 + -1 + (iVar6 - iVar4);
      }
      iVar1 = iVar1 + iVar7;
      iVar2 = iVar2 - iVar3;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
  }
  if (local_1c <= iVar8 - DAT_00803338) {
    param_3 = local_20;
  }
  return param_3;
}

