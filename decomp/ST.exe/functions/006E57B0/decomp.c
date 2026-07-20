
void __thiscall FUN_006e57b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_24 [16];
  undefined4 local_14;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    local_14 = 3;
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (uVar2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x1c);
        }
        if ((*(undefined4 **)(iVar1 + 4))[1] == param_1) {
          (**(code **)**(undefined4 **)(iVar1 + 4))(local_24);
          FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x10),uVar3);
        }
        else {
          uVar3 = uVar3 + 1;
        }
        iVar1 = *(int *)((int)this + 0x10);
        uVar2 = *(uint *)(iVar1 + 0xc);
      } while (uVar3 < uVar2);
    }
  }
  return;
}

