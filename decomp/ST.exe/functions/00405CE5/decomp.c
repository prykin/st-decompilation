
undefined4 __fastcall thunk_FUN_005f0ba0(int param_1)

{
  undefined4 *this;
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(uint *)(DAT_00802a38 + 0xe4) % 5 == 0) {
    this = (undefined4 *)(param_1 + 0x1d5);
    uVar1 = *(uint *)(DAT_00806724 + 0x30 + *(int *)(param_1 + 0x2d2) * 4);
    if (*(int *)(param_1 + 0x2b5) == 1) {
      thunk_FUN_004ace30(this,uVar1,(int)*(short *)(DAT_00806724 + 0x2c));
      iVar3 = *(int *)(param_1 + 0x2d2) + -1;
      *(int *)(param_1 + 0x2d2) = iVar3;
      if (iVar3 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
        cVar2 = thunk_FUN_004ad610((int)this);
        if (cVar2 != '\0') {
          thunk_FUN_005ef5f0(param_1);
          (**(code **)*this)();
        }
      }
      if (*(int *)(param_1 + 0x2d2) < 0) {
        *(undefined4 *)(param_1 + 0x2d2) = 0;
        thunk_FUN_004ace30(this,0,(int)*(short *)(DAT_00806724 + 0x2c));
        return 1;
      }
    }
    else {
      thunk_FUN_004ace30(this,uVar1,(int)*(short *)(DAT_00806724 + 0x2c));
      iVar3 = *(int *)(param_1 + 0x2d2);
      iVar4 = iVar3 + 1;
      *(int *)(param_1 + 0x2d2) = iVar4;
      if (*(short *)(DAT_00806724 + 0x23) <= iVar4) {
        *(int *)(param_1 + 0x2d2) = iVar3;
        thunk_FUN_004ad430((int)this);
        return 1;
      }
      if (iVar4 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
        thunk_FUN_004ad5e0((int)this);
      }
    }
  }
  return 0;
}

