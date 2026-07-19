
int __cdecl thunk_FUN_006838b0(int *param_1,char param_2,byte *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uStack_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  undefined1 uStack_8;
  
  uStack_c = 0;
  uStack_b = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  if (((param_4 == 0) || (param_1 == (int *)0x0)) || (param_3 == (byte *)0x0)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_script_cpp_007d5604,0x3be);
  }
  iVar1 = param_1[1];
  if (param_2 == '\x01') {
    uStack_c = 10;
    iVar3 = thunk_FUN_006836c0(param_4,param_3);
    uStack_b = (undefined2)iVar3;
    thunk_FUN_0064a830(param_1,(undefined4 *)&uStack_c);
    return iVar1;
  }
  if (param_2 == '\x02') {
    uVar2 = *(undefined4 *)param_3;
    uStack_c = 8;
    uStack_b = (undefined2)uVar2;
    uStack_9 = (undefined1)((uint)uVar2 >> 0x10);
    uStack_8 = (undefined1)((uint)uVar2 >> 0x18);
    thunk_FUN_0064a830(param_1,(undefined4 *)&uStack_c);
    return iVar1;
  }
  if (param_2 != '\x03') {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_script_cpp_007d5604,0x3d4);
    return iVar1;
  }
  uVar2 = *(undefined4 *)param_3;
  uStack_c = 9;
  uStack_b = (undefined2)uVar2;
  uStack_9 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_8 = (undefined1)((uint)uVar2 >> 0x18);
  thunk_FUN_0064a830(param_1,(undefined4 *)&uStack_c);
  return iVar1;
}

