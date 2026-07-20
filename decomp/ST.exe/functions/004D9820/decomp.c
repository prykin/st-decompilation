
undefined4 __fastcall FUN_004d9820(int *param_1)

{
  STWorldObject *this;
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  int local_8;
  
  if (param_1[0x136] + 0x4bU <= (uint)PTR_00802a38->field_00E4) {
    param_1[0x136] = PTR_00802a38->field_00E4;
    param_1[0x137] = 0;
    param_1[0x138] = 0;
    iVar6 = param_1[0x16d] + -0xd;
    if (iVar6 < param_1[0x16d] + 0xd) {
      do {
        if (((-1 < iVar6) && (iVar6 < SHORT_007fb242)) &&
           (iVar8 = param_1[0x16c] + -0xd, sVar3 = SHORT_007fb240, sVar4 = SHORT_007fb244,
           iVar8 < param_1[0x16c] + 0xd)) {
          do {
            if (((-1 < iVar8) && (iVar8 < sVar3)) && (local_8 = 0, 0 < sVar4)) {
              do {
                sVar7 = (short)iVar8;
                if ((((-1 < sVar7) && (sVar7 < sVar3)) &&
                    (((sVar5 = (short)iVar6, -1 < sVar5 &&
                      ((((sVar5 < SHORT_007fb242 && (sVar1 = (short)local_8, -1 < sVar1)) &&
                        (sVar1 < sVar4)) &&
                       ((this = g_worldCells
                                [(int)sVar5 * (int)sVar3 + (int)sVar1 * (int)SHORT_007fb246 +
                                 (int)sVar7].objects[0], this != (STWorldObject *)0x0 &&
                        (this != (STWorldObject *)param_1)))))) &&
                     (iVar2 = (*this->vtable->GetObjectTypeId)(this), iVar2 == 0x3a)))) &&
                   (iVar2 = FUN_006aced8(iVar8,iVar6,param_1[0x16c],param_1[0x16d]), iVar2 < 0xe)) {
                  param_1[0x137] = param_1[0x137] + 1;
                  param_1[0x138] = param_1[0x138] + iVar2;
                }
                local_8 = local_8 + 1;
                sVar3 = SHORT_007fb240;
                sVar4 = SHORT_007fb244;
              } while (local_8 < SHORT_007fb244);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < param_1[0x16c] + 0xd);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[0x16d] + 0xd);
    }
  }
  iVar6 = param_1[0x137] * 0xd - param_1[0x138];
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (param_1[0x137] == 0) {
    iVar6 = thunk_FUN_004d8230();
  }
  else {
    lVar9 = FUN_006b12cc(0xd);
    iVar8 = (int)lVar9;
    lVar9 = FUN_006b12cc(iVar6);
    iVar6 = FUN_006b12a8((int)lVar9,iVar8);
    iVar6 = iVar6 + DAT_007eda8c;
    iVar8 = thunk_FUN_004d8230();
    lVar9 = FUN_006b12cc(iVar8);
    iVar6 = FUN_006b12dc((int)lVar9,iVar6);
    iVar6 = FUN_006b1280(iVar6);
  }
  param_1[0x139] = iVar6;
  if ((uint)(param_1[0x139] + param_1[0x135]) <= (uint)PTR_00802a38->field_00E4) {
    param_1[0x135] = PTR_00802a38->field_00E4;
    param_1[0x134] = param_1[0x134] + 2;
    thunk_FUN_004d82b0(2);
    if (99 < param_1[0x134]) {
      thunk_FUN_004d9b20((int)param_1);
    }
  }
  return 0;
}

