
uint __fastcall thunk_FUN_006941c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = thunk_FUN_00694200(param_1,uVar2);
    if (iVar1 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return 0xffffffff;
}

