
undefined4 * __thiscall
FUN_006d70b0(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0074c952(this,param_1,param_2,(undefined4 *)&DAT_0079dae0);
  *(VTable_0079DDEC **)this = &VTable_0079DDEC;
  *(undefined4 *)((int)this + 0xa0) = param_4;
  *(VTable_0079DDB0 **)((int)this + 0xc) = &VTable_0079DDB0;
  *(VTable_0079DD9C **)((int)this + 0x10) = &VTable_0079DD9C;
  return this;
}

