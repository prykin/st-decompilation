
undefined4 __cdecl FUN_0064e290(undefined4 param_1,undefined4 param_2,void *param_3,uint param_4)

{
  uint uVar1;
  short sVar2;

  uVar1 = param_4 >> 0x10;
  sVar2 = (short)param_4;
  if (sVar2 < 0) {
    thunk_FUN_005801c0(param_3,uVar1);
  }
  if (sVar2 == 0) {
    STResourceC::sub_005802A0(param_3,uVar1,1);
    return 0;
  }
  if (0 < sVar2) {
    thunk_FUN_005800e0(param_3,uVar1);
  }
  return 0;
}

