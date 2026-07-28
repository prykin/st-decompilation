
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006211E0 -> 00621430 @ 00621236; FUN_006211e0 parameter param_1 */

uint __thiscall
FUN_00621430(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (*(int *)((int)this + 0x101) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
    *(DArrayTy **)((int)this + 0x101) = pDVar1;
  }
  if (*(uint **)((int)this + 0x101) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x101),&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

