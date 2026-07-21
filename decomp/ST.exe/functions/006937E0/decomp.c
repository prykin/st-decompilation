
uint __cdecl FUN_006937e0(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  byte local_108 [260];

  uVar2 = thunk_FUN_006938c0(param_2);
  uVar5 = 0;
  iVar7 = uVar2 * 0x218;
  if (*(int *)(iVar7 + 0x20c + DAT_00853d80) != 0) {
    do {
      wsprintfA((LPSTR)local_108,"%s%u",iVar7 + DAT_00853d80,uVar5);
      pbVar6 = local_108;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0069385e:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00693863;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0069385e;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00693863:
      if (iVar4 == 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar7 + 0x20c + DAT_00853d80));
  }
  return 0xffffffff;
}

