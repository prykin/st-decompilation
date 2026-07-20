
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054C740 -> 0054CB40 @ 0054C78B */

undefined4 * __thiscall FUN_0054cb40(void *this,AppClassTy *param_1)

{
  SystemWithNamedObjClassTy::SystemWithNamedObjClassTy(this,param_1,4);
  *(STPlaySystemCVTable **)this = &STPlaySystemCVTable;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf0) = 1;
  return this;
}

