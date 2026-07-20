
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00423E00 -> 00423D80 @ 00423E0E */

undefined4 __thiscall FUN_00423d80(void *this,uint *groupContent)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = groupContent[3];
  local_8 = 0;
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar5 = 0, uVar1 != 0)) {
    uVar4 = 0;
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)groupContent,uVar4,&local_c);
      iVar2 = (**(code **)(*(int *)this + 4))(local_c);
      if (iVar2 == 0) {
        local_8 = 1;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
      uVar3 = local_8;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}

