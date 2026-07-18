
int __thiscall FUN_00679d60(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  void *this_00;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
LAB_00679e18:
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(*(int *)((int)this + 0x695) + 0xc);
joined_r0x00679d8c:
    do {
      do {
        do {
          uVar2 = uVar2 - 1;
          if ((int)uVar2 < 0) goto LAB_00679e18;
          iVar5 = *(int *)((int)this + 0x695);
        } while (((iVar5 == 0) || ((int)uVar2 < 0)) || ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar2));
        if (uVar2 < *(uint *)(iVar5 + 0xc)) {
          puVar3 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar2 + *(int *)(iVar5 + 0x1c));
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
      } while ((puVar3[1] == 0) || (this_00 = (void *)*puVar3, this_00 == (void *)0x0));
      if (*param_2 != 0) {
        pbVar6 = (byte *)((int)this_00 + 0x3b);
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00679df3:
            iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00679df8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00679df3;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00679df8:
        if (iVar5 != 0) goto joined_r0x00679d8c;
      }
      iVar5 = thunk_FUN_0068e3c0(this_00,param_1);
    } while (iVar5 == 0);
  }
  return iVar5;
}

