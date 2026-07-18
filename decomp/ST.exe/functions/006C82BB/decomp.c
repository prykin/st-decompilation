
uint __fastcall FUN_006c82bb(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (DAT_007eda8c == 100) {
    param_2 = param_2 * 100;
  }
  bVar7 = (int)param_2 < 0;
  if (bVar7) {
    param_2 = -param_2;
  }
  if (param_2 < 0x2711) {
    iVar4 = DAT_007eda8c;
    uVar1 = 0;
    uVar6 = 0x5a;
    while( true ) {
      uVar5 = uVar1;
      uVar2 = uVar6 - uVar5 >> 1;
      uVar3 = (ushort)param_2;
      if (uVar2 == 0) break;
      uVar2 = uVar2 + uVar5;
      iVar4 = uVar2 * 2;
      if (uVar3 == *(ushort *)(&DAT_006ce9a0 + iVar4)) goto LAB_006c832a;
      uVar1 = uVar2;
      if (uVar3 <= *(ushort *)(&DAT_006ce9a0 + iVar4)) {
        uVar1 = uVar5;
        uVar6 = uVar2;
      }
    }
    uVar2 = uVar5;
    if (CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(&DAT_006ce9a0 + uVar6 * 2)) - param_2
        < CONCAT22((short)(param_2 >> 0x10),uVar3 - *(short *)(&DAT_006ce9a0 + uVar5 * 2))) {
      uVar2 = uVar6 & 0x7fffffff;
    }
  }
  else {
    uVar2 = 0x5a;
  }
LAB_006c832a:
  if (bVar7) {
    uVar2 = -uVar2;
  }
  return uVar2;
}

