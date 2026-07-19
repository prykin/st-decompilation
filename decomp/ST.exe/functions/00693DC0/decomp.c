
undefined4 FUN_00693dc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *this;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_19a8 [1635];
  undefined4 uStackY_1c;
  
  Library::MSVCRT::FUN_0072da40();
  thunk_FUN_00693910(local_19a8);
  puVar3 = this;
  puVar4 = local_19a8;
  for (iVar2 = 0x666; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  iVar2 = 0;
  do {
    thunk_FUN_006940b0(this,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  uStackY_1c = 0x693e0c;
  uVar1 = thunk_FUN_00693d00(this,param_1,param_2);
  puVar3 = local_19a8;
  puVar4 = this;
  for (iVar2 = 0x666; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  thunk_FUN_006939d0();
  return uVar1;
}

