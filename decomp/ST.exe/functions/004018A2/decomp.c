
void __cdecl
thunk_FUN_004b0f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,int param_7,char *param_8,undefined4 param_9,
                  undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  char acStack_34 [15];
  undefined4 uStack_25;
  undefined4 uStack_21;
  undefined4 uStack_1d;
  undefined4 uStack_9;
  
  puVar2 = &uStack_74;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  uStack_64 = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  iStack_4c = param_2;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_44 = param_4;
  uStack_68 = 1;
  uStack_6c = 1;
  iStack_70 = param_1;
  uStack_74 = 0x3e9;
  uStack_9 = 0;
  uStack_54 = 3;
  uStack_58 = 1;
  iStack_5c = param_1;
  uStack_60 = 1000;
  uStack_3c = param_6;
  iStack_38 = param_1;
  if (param_7 != 0xff) {
    iStack_38 = param_7;
  }
  uStack_50 = uStack_64;
  if (param_8 != (char *)0x0) {
    Library::MSVCRT::_strncpy(acStack_34,param_8,0xe);
  }
  uStack_25 = param_9;
  uStack_21 = param_10;
  uStack_1d = 100;
  STPlaySystemC::CreateGameObject(DAT_00802a38,0x3e9,0,0,&uStack_74,0);
  return;
}

