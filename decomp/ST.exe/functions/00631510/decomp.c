
void __thiscall
FUN_00631510(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  uint uVar1;

  uVar1 = *(int *)((int)this + 0x71) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x71) = uVar1;
  thunk_FUN_006308f0(this,param_3,param_4,param_5,param_2,(uVar1 >> 0x10) % 3,param_6);
  return;
}

