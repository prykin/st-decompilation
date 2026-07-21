
undefined4 __thiscall
FUN_005fa7f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  thunk_FUN_00417ff0(this,6);
  thunk_FUN_00418010(this,5);
  iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                    (this,(short)param_1,(short)param_2,(short)param_3);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x299) = param_3;
    *(undefined4 *)((int)this + 0x291) = param_1;
    *(undefined4 *)((int)this + 0x295) = param_2;
    return 1;
  }
  if ((iVar1 != -1) && (iVar1 == 1)) {
    *(undefined4 *)((int)this + 0x299) = param_3;
    *(undefined4 *)((int)this + 0x291) = param_1;
    *(undefined4 *)((int)this + 0x295) = param_2;
    return 2;
  }
  return 0;
}

