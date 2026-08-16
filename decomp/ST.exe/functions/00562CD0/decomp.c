
int FUN_00562cd0(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;

  iVar8 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar2 = FUN_006db6d0(iVar8);
  iVar3 = Library::DKW::STR::FUN_006db640(iVar8);
  iVar8 = 0;
  iVar4 = iVar2 * 3 + param_1 * 0x10000;
  iVar6 = iVar3 * -3 + param_2 * 0x10000;
  local_8 = 0;
  if (0 < DAT_00803368) {
    do {
      iVar5 = iVar4 >> 0x10;
      iVar7 = iVar6 >> 0x10;
      if ((((iVar5 < 0) || (DAT_008033a4 <= iVar5)) || (iVar7 < 0)) ||
         ((DAT_008033a8 <= iVar7 || (sVar1 = PTR_008033b4[DAT_008033a4 * iVar7 + iVar5], sVar1 < 1))
         )) {
        iVar8 = iVar8 + DAT_00803344;
      }
      else {
        iVar5 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar5,iVar7);
        iVar8 = iVar8 + -1 + (sVar1 - iVar5);
      }
      iVar4 = iVar4 + iVar2;
      iVar6 = iVar6 - iVar3;
      local_8 = local_8 + 1;
    } while (local_8 < DAT_00803368);
  }
  iVar8 = (DAT_00803368 + iVar8) / (DAT_00803368 * 2);
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  if (DAT_00803344 < iVar8) {
    iVar8 = DAT_00803344;
  }
  return DAT_00803344 - iVar8;
}

