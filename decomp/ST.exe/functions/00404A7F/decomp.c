
void __cdecl
thunk_FUN_0062b830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [5];
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this = param_5;
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_28 = param_1;
  uStack_24 = param_2;
  iStack_18 = param_5[6];
  uStack_20 = param_3;
  iStack_14 = param_5[9];
  uStack_1c = param_4;
  auStack_44[0] = 0xd2;
  auStack_44[1] = 0xff;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  uStack_2c = 1;
  iVar1 = (**(code **)(*param_5 + 0x2c))();
  uStack_8 = param_7;
  uStack_30 = (uint)(*(int *)(&DAT_00791d68 + iVar1 * 4) == 1);
  uStack_c = param_6;
  (**(code **)(*DAT_00802a38 + 8))(0x124,0,0,auStack_44,0);
  thunk_FUN_004162b0(this,(undefined2 *)((int)&param_3 + 2),(undefined2 *)((int)&param_2 + 2),
                     (undefined2 *)((int)&param_1 + 2));
  iVar1 = param_8;
  if ((param_9 == 0) && (DAT_008117b0 != (void *)0x0)) {
    if (this[0xb] == 0) {
      thunk_FUN_00631510(DAT_008117b0,this[8],1,(int)param_3._2_2_,(int)param_2._2_2_,
                         (int)param_1._2_2_,param_8);
    }
    if (this[0xb] == 1) {
      thunk_FUN_00631510(DAT_008117b0,this[8],4,(int)param_3._2_2_,(int)param_2._2_2_,
                         (int)param_1._2_2_,iVar1);
    }
  }
  return;
}

