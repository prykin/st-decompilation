
void __thiscall thunk_FUN_00696940(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uStack_14;
  uint uStack_c;
  uint uStack_8;
  
  uStack_14 = 1;
  if (*(int *)((int)this + 0x5853) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x5853) + 0xc);
    uStack_c = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)((int)this + 0x5853);
        if (((uStack_c < *(uint *)(iVar3 + 0xc)) &&
            (piVar6 = (int *)(*(int *)(iVar3 + 8) * uStack_c + *(int *)(iVar3 + 0x1c)),
            piVar6 != (int *)0x0)) && (*piVar6 != param_1)) {
          if (*(int *)((int)piVar6 + 0x15) != 0) {
            uVar2 = FUN_0072e6c0();
            uStack_14 = (int)uVar2 % 6 + 1;
          }
          iVar3 = *(int *)((int)piVar6 + 0x15);
          uStack_8 = 0;
          uVar2 = *(uint *)(iVar3 + 0xc);
          if (0 < (int)uVar2) {
            do {
              if (uStack_8 < uVar2) {
                iVar3 = *(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar4 = *(int *)(iVar3 + 2) / *(int *)((int)this + 0x5833);
              uVar5 = *(int *)(iVar3 + 2) % *(int *)((int)this + 0x5833);
              uVar2 = FUN_0072e6c0();
              uVar2 = uVar2 & 0x80000003;
              if ((int)uVar2 < 0) {
                uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
              }
              if (((uVar2 == 1) && (uVar5 != 0)) &&
                 ((iVar4 != 0 &&
                  ((uVar5 != *(uint *)((int)this + 0x5833) &&
                   (iVar4 != *(int *)((int)this + 0x5837))))))) {
                thunk_FUN_006a0c90(uVar5,iVar4,0,1,0,1,uStack_14);
              }
              uStack_8 = uStack_8 + 1;
              iVar3 = *(int *)((int)piVar6 + 0x15);
              uVar2 = *(uint *)(iVar3 + 0xc);
            } while ((int)uStack_8 < (int)uVar2);
          }
        }
        uStack_c = uStack_c + 1;
      } while ((int)uStack_c < iVar1);
    }
    uStack_c = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)((int)this + 0x5853);
        if ((((uStack_c < *(uint *)(iVar3 + 0xc)) &&
             (piVar6 = (int *)(*(int *)(iVar3 + 8) * uStack_c + *(int *)(iVar3 + 0x1c)),
             piVar6 != (int *)0x0)) && (*piVar6 == param_1)) &&
           (iVar3 = *(int *)((int)piVar6 + 0x15), iVar3 != 0)) {
          uVar2 = *(uint *)(iVar3 + 0xc);
          uStack_8 = 0;
          if (0 < (int)uVar2) {
            do {
              if (uStack_8 < uVar2) {
                iVar3 = *(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar3 = *(int *)(iVar3 + 2);
              iVar4 = *(int *)((int)this + 0x5833);
              uStack_14 = 0;
              if (((*(int *)((int)piVar6 + 5) < 1) || (2 < *(int *)((int)piVar6 + 5))) ||
                 (uVar2 = FUN_0072e6c0(), (int)uVar2 % 3 != 0)) {
                if (*(int *)((int)piVar6 + 5) != 1) goto LAB_00696b1f;
                uVar2 = FUN_0072e6c0();
                uVar2 = uVar2 & 0x80000007;
                if ((int)uVar2 < 0) {
                  uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
                }
                uVar5 = *(uint *)((int)piVar6 + 5);
                uVar2 = uVar2 + 1;
                iVar7 = 1;
                uStack_14 = 0;
              }
              else {
                uStack_14 = 1;
LAB_00696b1f:
                uVar5 = *(uint *)((int)piVar6 + 5);
                uVar2 = 1;
                iVar7 = 0xff;
              }
              thunk_FUN_006a0c90(iVar3 % iVar4 + 1,iVar3 / iVar4 + 1,uStack_14,uVar5,iVar7,1,uVar2);
              iVar3 = *(int *)((int)piVar6 + 0x15);
              uStack_8 = uStack_8 + 1;
              uVar2 = *(uint *)(iVar3 + 0xc);
            } while ((int)uStack_8 < (int)uVar2);
          }
        }
        uStack_c = uStack_c + 1;
      } while ((int)uStack_c < iVar1);
    }
  }
  return;
}

