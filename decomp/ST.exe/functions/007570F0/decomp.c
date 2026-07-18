
void FUN_007570f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x192);
  if (*(int *)(iVar1 + 8) == 0) {
    if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x80) == 0)) {
      if ((*(int *)(param_1 + 0x54) == 0) || (*(int *)(param_1 + 100) == 0)) {
        if (*(int *)(param_1 + 0x5c) == 0) {
          FUN_006a5e40(0x2d,DAT_007ed77c,0x7f2d68,0x1cd);
        }
        else {
          *(undefined4 *)(param_1 + 0x1ba) = *(undefined4 *)(iVar1 + 0x14);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1ba) = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
    (*(code *)**(undefined4 **)(param_1 + 0x1ae))(param_1);
    (**(code **)(*(int *)(param_1 + 0x19a) + 8))(param_1);
    if (*(int *)(param_1 + 0x3c) != 0) goto LAB_007571f0;
    if (*(int *)(iVar1 + 0x10) == 0) {
      (*(code *)**(undefined4 **)(param_1 + 0x1b6))(param_1);
    }
    (*(code *)**(undefined4 **)(param_1 + 0x1b2))(param_1);
    if (*(int *)(param_1 + 0x4c) != 0) {
      (*(code *)**(undefined4 **)(param_1 + 0x1ba))(param_1,*(undefined4 *)(iVar1 + 8));
    }
    (*(code *)**(undefined4 **)(param_1 + 0x19e))(param_1,-(*(int *)(iVar1 + 8) != 0) & 3);
    puVar2 = *(undefined4 **)(param_1 + 0x196);
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x1ba))(param_1,0);
    (*(code *)**(undefined4 **)(param_1 + 0x19e))(param_1,2);
    puVar2 = *(undefined4 **)(param_1 + 0x196);
    uVar3 = 2;
  }
  (*(code *)*puVar2)(param_1,uVar3);
LAB_007571f0:
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(*(int *)(param_1 + 4) + 0x10) = (*(int *)(iVar1 + 8) != 0) + 1 + *(int *)(iVar1 + 0xc)
    ;
    if ((*(int *)(param_1 + 0x38) != 0) && (*(int *)(*(int *)(param_1 + 0x1a2) + 0x14) == 0)) {
      *(uint *)(*(int *)(param_1 + 4) + 0x10) =
           *(int *)(*(int *)(param_1 + 4) + 0x10) + (*(int *)(param_1 + 100) != 0) + 1;
    }
  }
  return;
}

