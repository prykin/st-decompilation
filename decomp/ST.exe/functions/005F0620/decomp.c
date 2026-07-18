
void __fastcall FUN_005f0620(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    switch(*(undefined4 *)(param_1 + 0x2b1)) {
    case 0:
    case 1:
    case 2:
      local_e = *(undefined2 *)(param_1 + 0x32);
      local_14 = 0x5dd8;
      break;
    case 3:
    case 4:
    case 5:
      local_e = *(undefined2 *)(param_1 + 0x32);
      local_14 = 0x5ddd;
      break;
    default:
      goto switchD_005f064c_default;
    }
    local_c = *(undefined2 *)(param_1 + 0x2a3);
    local_a = *(undefined2 *)(param_1 + 0x2ab);
    (**(code **)*DAT_008117bc)(local_24);
  }
switchD_005f064c_default:
  return;
}

