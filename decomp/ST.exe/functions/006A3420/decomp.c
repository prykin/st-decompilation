
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006A3930 -> 006A3420 @ 006A399B */

void __cdecl FUN_006a3420(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = param_1[2];
  uVar1 = Library::MSVCRT::FUN_0072e6c0();
  param_1[2] = uVar2 & 0xff00 ^ (ushort)param_2 & 0xf |
               (ushort)(((uVar1 % *(uint *)(&DAT_007dfb30 + (int)param_2 * 4) - 1) +
                         ((((uVar2 & 0xf0) >> 4) + 1) / 2) * 2 & 0xf) << 4);
  uVar2 = (byte)((byte)*param_1 ^ (byte)param_2) & 0xf ^ *param_1;
  *param_1 = uVar2;
  uVar1 = Library::MSVCRT::FUN_0072e6c0();
  *param_1 = (byte)(((char)(uVar1 % *(uint *)(&DAT_007dfb30 + (int)param_2 * 4)) + '\x01') * '\x10'
                   ^ (byte)uVar2) & 0xf0 ^ uVar2;
  return;
}

