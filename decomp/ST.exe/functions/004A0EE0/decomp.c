
void __thiscall FUN_004a0ee0(void *this,ushort param_1)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  uint uVar2;
  undefined4 local_1c;
  ushort local_18;
  
  thunk_FUN_0040cdb0(this,(uint)param_1);
  if (((*(int *)((int)this + 0x1e6) == 6) &&
      (pAVar1 = *(AnonShape_006ACC70_C8641025 **)((int)this + 0x22e),
      pAVar1 != (AnonShape_006ACC70_C8641025 *)0x0)) && (uVar2 = 0, 0 < (int)pAVar1->field_000C)) {
    do {
      FUN_006acc70(pAVar1,uVar2,&local_1c);
      if (local_18 == param_1) {
        local_18 = 0xffff;
        local_1c = 0;
        Library::DKW::TBL::FUN_006ae140(*(uint **)((int)this + 0x22e),uVar2,&local_1c);
      }
      pAVar1 = *(AnonShape_006ACC70_C8641025 **)((int)this + 0x22e);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)pAVar1->field_000C);
  }
  thunk_FUN_00423c70(this,param_1);
  return;
}

