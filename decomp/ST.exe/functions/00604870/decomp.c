
uint __thiscall FUN_00604870(void *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;

  if (*(int *)((int)this + 0x215) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x20,0x14);
    *(DArrayTy **)((int)this + 0x215) = pDVar1;
  }
  if (*(uint **)((int)this + 0x215) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x215),param_1);
    return uVar2;
  }
  return 0xffffffff;
}

