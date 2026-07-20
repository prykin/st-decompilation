
/* [STPrototypeApplier] Propagated return.
   Evidence: 006755E0 returns partial register write at 006755F0 @ 006755F5 | 006755E0 returns
   partial register write at 00675662 @ 00675667 | 006755E0 returns partial register write at
   00675668 @ 0067566D | 006755E0 returns partial register write at 0067566E @ 00675673 | 006755E0
   returns partial register write at 00675674 @ 00675679 | 006755E0 returns partial register write
   at 0067567A @ 0067567F | 006755E0 returns partial register write at 00675680 @ 00675685 |
   006755E0 returns partial register write at 00675686 @ 0067568B | 006755E0 returns partial
   register write at 0067568C @ 00675691 */

uint __cdecl FUN_006755e0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((uint)param_1 >> 0x10);
  if ((0x31 < param_1) && (param_1 < 0x74)) {
    return CONCAT22(uVar1,1);
  }
  if ((param_1 == 8) || ((param_1 == 0x14 || (param_1 == 0x1a)))) {
    return CONCAT22(uVar1,2);
  }
  if (((param_1 == 0x19) || (param_1 == 0xc)) || (param_1 == 0x18)) {
    return CONCAT22(uVar1,4);
  }
  if (((param_1 != 7) && (param_1 != 0x13)) && (param_1 != 0x1b)) {
    if (((param_1 == 5) || (param_1 == 0x11)) || (param_1 == 0x21)) {
      return CONCAT22(uVar1,0x40);
    }
    if (((param_1 == 6) || (param_1 == 0x12)) || (param_1 == 0x22)) {
      return CONCAT22(uVar1,0x80);
    }
    if ((param_1 == 9) || (param_1 == 0x15)) {
      return CONCAT22(uVar1,0x100);
    }
    if (((param_1 != 4) && (param_1 != 0x16)) && (param_1 != 0x1c)) {
      return CONCAT22(uVar1,0x10);
    }
    return CONCAT22(uVar1,0x20);
  }
  return CONCAT22(uVar1,8);
}

