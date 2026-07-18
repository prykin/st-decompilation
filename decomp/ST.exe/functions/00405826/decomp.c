
void __fastcall thunk_FUN_005f0620(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    switch(*(undefined4 *)(param_1 + 0x2b1)) {
    case 0:
    case 1:
    case 2:
      uStack_e = *(undefined2 *)(param_1 + 0x32);
      uStack_14 = 0x5dd8;
      break;
    case 3:
    case 4:
    case 5:
      uStack_e = *(undefined2 *)(param_1 + 0x32);
      uStack_14 = 0x5ddd;
      break;
    default:
      goto switchD_005f064c_default;
    }
    uStack_c = *(undefined2 *)(param_1 + 0x2a3);
    uStack_a = *(undefined2 *)(param_1 + 0x2ab);
    (**(code **)*DAT_008117bc)(auStack_24);
  }
switchD_005f064c_default:
  return;
}

