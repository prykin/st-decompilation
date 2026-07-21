
int FUN_00562cd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_8;

  iVar7 = (int)(param_3 * 0x168 + (param_3 * 0x168 >> 0x1f & 0xfU)) >> 4;
  iVar1 = FUN_006db6d0(iVar7);
  iVar2 = Library::DKW::STR::FUN_006db640(iVar7);
  iVar7 = 0;
  iVar3 = iVar1 * 3 + param_1 * 0x10000;
  iVar5 = iVar2 * -3 + param_2 * 0x10000;
  local_8 = 0;
  if (0 < DAT_00803368) {
    do {
      iVar4 = iVar3 >> 0x10;
      iVar6 = iVar5 >> 0x10;
      if ((((iVar4 < 0) || (DAT_008033a4 <= iVar4)) || (iVar6 < 0)) ||
         ((DAT_008033a8 <= iVar6 ||
          (iVar8 = (int)*(short *)(DAT_008033b4 + (DAT_008033a4 * iVar6 + iVar4) * 2), iVar8 < 1))))
      {
        iVar7 = iVar7 + DAT_00803344;
      }
      else {
        iVar4 = thunk_FUN_0055de60(DAT_00803304,DAT_00803308,iVar4,iVar6);
        iVar7 = iVar7 + -1 + (iVar8 - iVar4);
      }
      iVar3 = iVar3 + iVar1;
      iVar5 = iVar5 - iVar2;
      local_8 = local_8 + 1;
    } while (local_8 < DAT_00803368);
  }
  iVar7 = (DAT_00803368 + iVar7) / (DAT_00803368 * 2);
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (DAT_00803344 < iVar7) {
    iVar7 = DAT_00803344;
  }
  return DAT_00803344 - iVar7;
}

