
void __fastcall thunk_FUN_006a0a70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0xaa);
  *param_1 = (int)puVar1;
  for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0;
  *(undefined4 *)*param_1 = 10;
  *(undefined4 *)(*param_1 + 4) = 0xff;
  *(undefined4 *)(*param_1 + 8) = 2;
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  param_1[1] = 0;
  return;
}

