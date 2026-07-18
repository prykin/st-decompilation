
void __fastcall FUN_0067a2d0(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)param_1 + 0xa4) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0xa4) = uVar1;
  *(uint *)((int)param_1 + 0x650) = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = *(int *)((int)param_1 + 0xa4) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0xa4) = uVar1;
  *(uint *)((int)param_1 + 0x66e) = (uVar1 >> 0x10) % 0x1a + 0x19;
  uVar1 = *(int *)((int)param_1 + 0xa4) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0xa4) = uVar1;
  *(uint *)((int)param_1 + 0x681) = (uVar1 >> 0x10) % 0x1a + 0x32;
  thunk_FUN_00679600(param_1);
  return;
}

