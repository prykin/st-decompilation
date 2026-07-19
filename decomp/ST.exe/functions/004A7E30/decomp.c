
undefined4 __thiscall FUN_004a7e30(void *this,int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EDI;
  int iVar5;
  undefined4 local_14;
  int local_e;
  int local_a;
  
  if (*(int *)((int)this + 0x23e) < *(int *)((int)this + 0x23a)) {
    if (param_1 != 1) {
      return 1;
    }
    iVar5 = 0;
    iVar1 = *(int *)(*(int *)((int)this + 0x22e) + 0xc);
    piVar3 = *(int **)(*(int *)((int)this + 0x22e) + 0x1c);
    if (0 < iVar1) {
      do {
        if (((short)piVar3[1] != -1) && (*piVar3 == 0)) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        piVar3 = (int *)((int)piVar3 + 0x16);
      } while (iVar5 < iVar1);
    }
  }
  if (*(int *)((int)this + 0x236) == 1) {
    iVar1 = *(int *)((int)this + 0x22a);
    iVar5 = *(int *)((int)this + 0x232);
    if (iVar5 == *(int *)(iVar1 + 0xc) + -1) {
      if (*(int *)((int)this + 0x246) != 0) {
        return 2;
      }
      if (iVar5 < 1) {
        return 1;
      }
      *(undefined4 *)((int)this + 0x236) = 0;
      *(undefined4 *)((int)this + 0x23e) = 0;
      *(uint *)((int)this + 0x232) = iVar5 - 1U;
      FUN_006acc70(iVar1,iVar5 - 1U,&local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_e * 0xc9;
    }
    else {
      *(undefined4 *)((int)this + 0x23e) = 0;
      *(uint *)((int)this + 0x232) = iVar5 + 1U;
      FUN_006acc70(iVar1,iVar5 + 1U,&local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_a * 0xc9;
    }
  }
  else {
    if (*(int *)((int)this + 0x232) == 0) {
      *(undefined4 *)((int)this + 0x232) = 1;
      *(undefined4 *)((int)this + 0x236) = 1;
      *(undefined4 *)((int)this + 0x23e) = 0;
      FUN_006acc70(*(int *)((int)this + 0x22a),1,&local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
    }
    else {
      uVar4 = *(int *)((int)this + 0x232) - 1;
      *(uint *)((int)this + 0x232) = uVar4;
      *(undefined4 *)((int)this + 0x23e) = 0;
      FUN_006acc70(*(int *)((int)this + 0x22a),uVar4,&local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      local_a = local_e;
    }
    uVar4 = (uint)bVar2;
    local_e = local_a * 0xc9;
  }
  *(int *)((int)this + 0x23a) = (local_e / (int)uVar4) / 3;
  STGroupBoatC::SetPatrolCmdToBoat(this,unaff_EDI);
  return 0;
}

