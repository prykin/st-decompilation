
undefined4 __thiscall
FUN_00631e00(void *this,uint param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_8;
  
  iVar5 = *(int *)((int)this + 0x69);
  local_8 = 0;
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar1 = *(uint *)(iVar5 + 0xc);
    if ((((param_1 < uVar1) &&
         (piVar3 = (int *)(*(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c)),
         piVar3 != (int *)0x0)) && (piVar3[2] == param_2)) &&
       ((*piVar3 == 0xbe || (*piVar3 == 0xa8)))) {
      *param_3 = *(undefined4 *)(piVar3[7] + 0x266);
      *param_4 = *(undefined4 *)(piVar3[7] + 0x26a);
      *param_5 = *(undefined4 *)(piVar3[7] + 0x26e);
      *param_6 = *(undefined4 *)(piVar3[7] + 0x292);
      if (param_7 != (int *)0x0) {
        *param_7 = piVar3[7];
      }
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (piVar3 = (int *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
            piVar3 != (int *)0x0)) &&
           ((piVar3[2] == param_2 && ((*piVar3 == 0xbe || (*piVar3 == 0xa8)))))) {
          *param_3 = *(undefined4 *)(piVar3[7] + 0x266);
          *param_4 = *(undefined4 *)(piVar3[7] + 0x26a);
          *param_5 = *(undefined4 *)(piVar3[7] + 0x26e);
          *param_6 = *(undefined4 *)(piVar3[7] + 0x292);
          if (param_7 != (int *)0x0) {
            *param_7 = piVar3[7];
          }
          local_8 = 1;
        }
        uVar4 = uVar4 + 1;
        iVar5 = *(int *)((int)this + 0x69);
        bVar6 = uVar4 < *(uint *)(iVar5 + 0xc);
        uVar2 = local_8;
      } while ((int)uVar4 < (int)*(uint *)(iVar5 + 0xc));
    }
  }
  return uVar2;
}

