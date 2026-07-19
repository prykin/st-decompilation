
void __fastcall FUN_004fad20(void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 6;
  puVar1 = (undefined1 *)((int)param_1 + 0xba8);
  do {
    puVar1[0x5c] = 0xff;
    *puVar1 = 0xff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_004fa870(param_1,CASE_2);
  thunk_FUN_004fa870(param_1,CASE_4);
  return;
}

