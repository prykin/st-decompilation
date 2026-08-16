
int FUN_00561dc0(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int local_1c;
  int local_10;
  int local_c;

  iVar2 = param_1 * 0x10000;
  iVar3 = param_2 * 0x10000;
  if (param_3 < 1) {
    local_10 = 0xf;
  }
  else {
    local_10 = param_3 + -1;
  }
  iVar10 = (int)(local_10 * 0x168 + (local_10 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar4 = FUN_006db6d0(iVar10);
  iVar5 = Library::DKW::STR::FUN_006db640(iVar10);
  local_1c = 0;
  iVar10 = iVar2 + iVar4 * 3;
  local_c = 0;
  iVar8 = iVar3 + iVar5 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar6 = iVar10 >> 0x10;
      iVar7 = iVar8 >> 0x10;
      if ((((iVar6 < 0) || (DAT_008033a4 <= iVar6)) || (iVar7 < 0)) ||
         ((DAT_008033a8 <= iVar7 || (sVar1 = PTR_008033b4[DAT_008033a4 * iVar7 + iVar6], sVar1 < 1))
         )) {
        local_1c = local_1c + DAT_00803344;
      }
      else {
        iVar6 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar6,iVar7);
        local_1c = local_1c + -1 + (sVar1 - iVar6);
      }
      iVar10 = iVar10 + iVar4;
      iVar8 = iVar8 - iVar5;
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
  iVar10 = (int)(local_10 * 0x168 + (local_10 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar5 = FUN_006db6d0(iVar10);
  iVar6 = Library::DKW::STR::FUN_006db640(iVar10);
  iVar4 = 0;
  iVar10 = iVar2 + iVar5 * 3;
  local_c = 0;
  iVar8 = iVar3 + iVar6 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar7 = iVar10 >> 0x10;
      iVar9 = iVar8 >> 0x10;
      if (((iVar7 < 0) || (DAT_008033a4 <= iVar7)) ||
         ((iVar9 < 0 ||
          ((DAT_008033a8 <= iVar9 || (sVar1 = PTR_008033b4[DAT_008033a4 * iVar9 + iVar7], sVar1 < 1)
           ))))) {
        iVar4 = iVar4 + DAT_00803344;
      }
      else {
        iVar7 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar7,iVar9);
        iVar4 = iVar4 + -1 + (sVar1 - iVar7);
      }
      iVar10 = iVar10 + iVar5;
      iVar8 = iVar8 - iVar6;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  if (iVar4 < local_1c) {
    local_20 = local_10;
    local_1c = iVar4;
  }
  iVar10 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar8 = FUN_006db6d0(iVar10);
  iVar4 = Library::DKW::STR::FUN_006db640(iVar10);
  iVar10 = 0;
  iVar2 = iVar2 + iVar8 * 3;
  local_c = 0;
  iVar3 = iVar3 + iVar4 * -3;
  if (0 < DAT_00803368) {
    do {
      iVar5 = iVar2 >> 0x10;
      iVar6 = iVar3 >> 0x10;
      if ((((iVar5 < 0) || (DAT_008033a4 <= iVar5)) || (iVar6 < 0)) ||
         ((DAT_008033a8 <= iVar6 || (sVar1 = PTR_008033b4[DAT_008033a4 * iVar6 + iVar5], sVar1 < 1))
         )) {
        iVar10 = iVar10 + DAT_00803344;
      }
      else {
        iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar5,iVar6);
        iVar10 = iVar10 + -1 + (sVar1 - iVar5);
      }
      iVar2 = iVar2 + iVar8;
      iVar3 = iVar3 - iVar4;
      local_c = local_c + 1;
    } while (local_c < DAT_00803368);
  }
  if (local_1c <= iVar10 - DAT_00803338) {
    param_3 = local_20;
  }
  return param_3;
}

