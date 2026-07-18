
undefined4 * __thiscall
FUN_006d5cd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00749024(this,param_2,0,param_3,1);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x5c) = param_1;
  *(undefined ***)this = &PTR_FUN_0079dd1c;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_0079dcf8;
  return this;
}

