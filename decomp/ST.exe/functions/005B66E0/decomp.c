
void __fastcall FUN_005b66e0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)param_1 + 0x1d);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x25) = *(undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x14);
  *(undefined4 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x2d) = 10;
  *(undefined4 *)((int)param_1 + 0x31) = *(undefined4 *)((int)param_1 + 8);
  STJellyGunC::sub_006E60A0(param_1,(undefined4 *)((int)param_1 + 0x1d));
  return;
}

