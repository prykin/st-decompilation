
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00620A00 -> 00620C50 @ 00620A56; FUN_00620a00 parameter param_1 */

uint __thiscall
FUN_00620c50(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  if (*(int *)((int)this + 0xe9) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
    *(DArrayTy **)((int)this + 0xe9) = pDVar1;
  }
  if (*(DArrayTy **)((int)this + 0xe9) != (DArrayTy *)0x0) {
    uVar2 = Library::DKW::TBL::DArrayAppend(*(DArrayTy **)((int)this + 0xe9),&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

