
void __cdecl
thunk_FUN_004b1040(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,int param_7,char *param_8,undefined4 param_9,
                  undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  char acStack_30 [19];
  undefined4 uStack_1d;
  undefined4 uStack_15;
  
  puVar2 = &uStack_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  iStack_48 = param_2;
  uStack_50 = 3;
  uStack_4c = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  uStack_44 = param_3;
  uStack_3c = param_5;
  uStack_40 = param_4;
  uStack_54 = 1;
  iStack_58 = param_1;
  uStack_5c = 1000;
  uStack_38 = param_6;
  iStack_34 = param_1;
  if (param_7 != 0xff) {
    iStack_34 = param_7;
  }
  if (param_8 != (char *)0x0) {
    _strncpy(acStack_30,param_8,0xe);
  }
  uStack_1d = param_9;
  uStack_15 = param_10;
  thunk_FUN_0054cc20(1000,0,0,&uStack_5c,0);
  return;
}

