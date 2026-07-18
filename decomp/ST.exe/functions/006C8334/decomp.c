
uint __cdecl FUN_006c8334(uint param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  
  if (-1 < (int)param_1) {
    uVar3 = (ulonglong)param_1 * (ulonglong)DAT_007eda8c;
    uVar7 = (uint)(uVar3 >> 0x20);
    uVar5 = (uint)uVar3;
    iVar6 = 0x20;
    uVar9 = uVar7;
    if (uVar7 == 0) {
      iVar6 = 0;
      uVar9 = uVar5;
    }
    if ((uVar9 & 0xffff0000) == 0) {
      uVar1 = 0xf;
      uVar8 = (ushort)uVar9;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar10 = (uint)uVar1;
      if (uVar8 == 0) {
        return uVar5;
      }
    }
    else {
      uVar10 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
        }
      }
    }
    bVar4 = (byte)(iVar6 + uVar10 + 1 >> 1) & 0x1f;
    param_1 = uVar5 >> bVar4 | uVar7 << 0x20 - bVar4;
    do {
      uVar9 = param_1;
      if (param_1 < uVar7) {
        uVar9 = (uVar7 >> 1) + uVar7;
      }
      uVar2 = (ulonglong)uVar7 << 0x20 | uVar3 & 0xffffffff;
      uVar5 = (uint)(uVar2 / uVar9);
      uVar10 = uVar9 + uVar5;
      param_1 = uVar10 >> 1 | (uint)CARRY4(uVar9,uVar5) << 0x1f;
      if ((int)(uVar2 % (ulonglong)uVar9) != 0) {
        param_1 = param_1 + ((uVar10 & 1) != 0);
      }
    } while (param_1 != uVar9);
  }
  return param_1;
}

