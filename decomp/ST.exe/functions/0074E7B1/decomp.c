
undefined4 * __thiscall
FUN_0074e7b1(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  FUN_0074e684((undefined4 *)((int)this + 4),param_1,param_2);
  *(undefined ***)this = &PTR_FUN_007a1c60;
  *(int *)((int)this + 0x18) = param_4;
  *(undefined4 *)((int)this + 4) = &PTR_FUN_007a1c18;
  *(undefined ***)((int)this + 8) = &PTR_FUN_007a1c08;
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  return this;
}

