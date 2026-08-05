
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00675430_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128

   [STPrototypeApplier] Propagated return.
   Evidence: 00675430 returns partial register write at 00675458 @ 0067545D | 00675430 returns
   partial register write at 0067545E @ 00675463 | 00675430 returns partial register write at
   00675464 @ 00675469 | 00675430 returns partial register write at 0067546A @ 0067546F | 00675430
   returns partial register write at 00675470 @ 00675475 | 00675430 returns partial register write
   at 00675476 @ 0067547B | 00675430 returns partial register write at 0067547C @ 00675481 |
   00675430 returns partial register write at 00675482 @ 00675487 | 00675430 returns partial
   register write at 006754A8 @ 006754AD | 00675430 returns partial register write at 006754AE @
   006754B3 | 00675430 returns partial register write at 006754BB @ 006754C0
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=0067C180 @ 0067C3FD -> read as AX on every CFG path | 0067C180 @
   0067C5B1 -> read as AX on every CFG path */

ushort __cdecl FUN_00675430(Global_sub_00675430_param_1Enum param_1)

{
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      return 0x32;
    }
    switch(param_1) {
    case CASE_1:
    case CASE_2:
      return 0x1e;
    case CASE_4:
      return 0x5f;
    case CASE_8:
      return 100;
    case CASE_10:
      return 0x46;
    case CASE_20:
      return 0x28;
    case CASE_40:
      return 0x5a;
    case CASE_80:
      return 0x6e;
    }
  }
  else if (param_1 < 0x100001) {
    if (param_1 == 0x100000) {
      return 10;
    }
    if (param_1 < 0x40001) {
      if (param_1 == 0x40000) {
        return 0x3c;
      }
      if (param_1 == 0x10000) {
        return 10;
      }
      if (param_1 == 0x20000) {
        return 10;
      }
    }
    else if (param_1 == 0x80000) {
      return 0x50;
    }
  }
  else {
    if (param_1 == 0x200000) {
      return 10;
    }
    if (param_1 == 0x400000) {
      return 10;
    }
    if (param_1 == 0x800000) {
      return 10;
    }
  }
  return 0;
}

