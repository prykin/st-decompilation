
void FUN_006e9a10(uint *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_1[0x28];
  if ((uVar2 != 0) && (*(int *)(uVar2 + 4 + param_2 * 8) != 0)) {
    if ((int)param_3 < 0) {
      uVar4 = (uint)*(short *)(param_1[0x29] + param_2 * 4);
      if (param_3 == 0xffffffff) {
        uVar4 = uVar4 + 1;
      }
      iVar3 = *(int *)(uVar2 + param_2 * 8);
      param_3 = uVar4 & 0xffff;
      if ((iVar3 != 0) && (iVar3 <= (int)param_3)) {
        param_3 = 0;
      }
    }
    else {
      iVar3 = *(int *)(uVar2 + param_2 * 8);
      if (0 < iVar3) {
        param_3 = (int)param_3 % iVar3;
      }
    }
    if ((((param_1[2] == 0) && ((*param_1 & 0x10000) != 0)) &&
        (iVar3 = param_1[0x29] + param_2 * 4,
        (int)*(short *)(param_1[0x29] + param_2 * 4) != param_3)) &&
       (uVar1 = *(ushort *)(iVar3 + 2), (uVar1 & 0xc000) == 0xc000)) {
      *(ushort *)(iVar3 + 2) = uVar1 | 0x80;
      if ((*(byte *)(param_1[0x29] + 2 + param_2 * 4) & 0x40) != 0) {
        *param_1 = *param_1 | 0x800;
        *(short *)(param_1[0x29] + param_2 * 4) = (short)param_3;
        return;
      }
      *param_1 = *param_1 & 0xff87ffff | 0x4c;
    }
    *(short *)(param_1[0x29] + param_2 * 4) = (short)param_3;
  }
  return;
}

