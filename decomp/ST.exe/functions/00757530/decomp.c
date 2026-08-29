#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (8), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00755560 @ 0075568F -> read as EAX on
   every CFG path | 00755560 @ 007556A9 -> read as EAX on every CFG path | 00755560 @ 007557A9 ->
   read as EAX on every CFG path | 00755BC0 @ 00755C23 -> read as EAX on every CFG path | 00755E10 @
   00755EAF -> read as EAX on every CFG path | 00755E10 @ 00755FA3 -> read as EAX on every CFG path
   | 00755E10 @ 00756043 -> read as EAX on every CFG path | 00755E10 @ 00756173 -> read as EAX on
   every CFG path */

int FUN_00757530(AnonShape_00757530_EEED7D69 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  AnonNested_00757530_000C_743CE253 *pAVar4;
  AnonShape_00757530_EEED7D69 *pAVar6;
  AnonNested_00757530_000C_743CE253 **ppAVar7;

  if (param_2 == 0) {
    ppAVar7 = (AnonNested_00757530_000C_743CE253 **)&param_1[1].field_0x8;
    pAVar6 = param_1 + 2;
  }
  else {
    ppAVar7 = &param_1[1].field_000C;
    pAVar6 = (AnonShape_00757530_EEED7D69 *)&param_1[2].field_0x4;
  }
  sVar2 = param_1->field_000C->field_0034;
  if (sVar2 == 0) {
    /* ST_CALLSITE[00757566]: CALL dword ptr [EAX + 0x8] */
    iVar3 = (*STField<code *>(param_1->field_000C,0x0008))(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  if ((int)*(uint *)pAVar6 < (int)uVar1) {
    /* ST_CALLSITE[00757576]: CALL 0x006bfb50; direct=006BFB50 FUN_006bfb50; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonNested_00757530_000C_743CE253; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonNested_00757530_000C_743CE253;pointer:/int;/uint */
    pAVar4 = FUN_006bfb50((int *)*ppAVar7,uVar1);
    *ppAVar7 = pAVar4;
    if (pAVar4 == nullptr) {
      return 0;
    }
    *(uint *)pAVar6 = uVar1;
  }
  if (uVar1 != 0) {
    pAVar4 = *ppAVar7;
    memmove(pAVar4, param_3, uVar1); /* compiler REP MOVS byte copy */
  }
  return uVar1;
}

