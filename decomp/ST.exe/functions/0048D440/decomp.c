#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (17), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00465E15
   -> CMP CMP EAX,EDI | 00465C60 @ 0046604C -> CMP CMP EAX,EDI | 00465C60 @ 004663A9 -> TEST TEST
   EAX,EAX | 00465C60 @ 004666BB -> TEST TEST EAX,EAX | 00465C60 @ 00466AEA -> CMP CMP EAX,EDI |
   00465C60 @ 00466D3A -> CMP CMP EAX,EDI | 00465C60 @ 00466F7E -> CMP CMP EAX,EDI | 00465C60 @
   00467202 -> CMP CMP EAX,EDI | 00465C60 @ 004678DA -> CMP CMP EAX,EDI | 00465C60 @ 00467C43 ->
   TEST TEST EAX,EAX | 00465C60 @ 00467FDB -> TEST TEST EAX,EAX | 00465C60 @ 00468498 -> CMP CMP
   EAX,EBX | 00465C60 @ 0046870E -> CMP CMP EAX,EDI | 00465C60 @ 00468AAC -> CMP CMP EAX,EDI |
   00465C60 @ 00469722 -> CMP CMP EAX,EBX | 00465C60 @ 00469969 -> CMP CMP EAX,EBX | 0049C210 @
   0049C896 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00465C60 -> 0048D440 @ 00465E15; STBoatC::LoadRC this; stable alias ESI | 00465C60 ->
   0048D440 @ 0046604C; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 004663A9;
   STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 004666BB; STBoatC::LoadRC this;
   stable alias ESI | 00465C60 -> 0048D440 @ 00466AEA; STBoatC::LoadRC this; stable alias ESI |
   00465C60 -> 0048D440 @ 00466D3A; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @
   00466F7E; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 00467202;
   STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 004678DA; STBoatC::LoadRC this;
   stable alias ESI | 00465C60 -> 0048D440 @ 00467C43; STBoatC::LoadRC this; stable alias ESI |
   00465C60 -> 0048D440 @ 00467FDB; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @
   00468498; STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 0046870E;
   STBoatC::LoadRC this; stable alias ESI | 00465C60 -> 0048D440 @ 00468AAC; STBoatC::LoadRC this;
   stable alias ESI | 00465C60 -> 0048D440 @ 00469722; STBoatC::LoadRC this; stable alias ESI |
   00465C60 -> 0048D440 @ 00469969; STBoatC::LoadRC this; stable alias ESI */

int __fastcall FUN_0048d440(STBoatC *param_1)

{
  STGroupBoatC *this;
  int iVar1;
  int iVar2;

  this = thunk_FUN_0042b760((char)param_1->field_0024,param_1->field_0030);
  if (param_1->field_04A1 == -1) {
    if (param_1->field_04AB != (HoloTy *)0xffffffff) {
      return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
    }
    return 0;
  }
  if (param_1->field_04AB == (HoloTy *)0xffffffff) {
    return (uint)(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28);
  }
  /* ST_CALLSITE[0048D4EF]: CALL 0x0040407a; direct=0040407A STGroupBoatC::sub_0040BC90 */
  iVar1 = STGroupBoatC::sub_0040BC90
                    (this,(uint)(ushort)param_1->field_0032,(short *)(int)param_1->field_049B,
                     (short *)(int)param_1->field_049D,(short *)(param_1->field_049F + 1),'\0');
  /* ST_CALLSITE[0048D51A]: CALL 0x0040407a; direct=0040407A STGroupBoatC::sub_0040BC90 */
  iVar2 = STGroupBoatC::sub_0040BC90
                    (this,(uint)(ushort)param_1->field_0032,(short *)(int)param_1->field_04A5,
                     (short *)(int)param_1->field_04A7,(short *)(param_1->field_04A9 + 1),'\0');
  if (iVar1 != -4) {
    if (iVar2 == -4) {
      return (uint)(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28);
    }
    return ((((param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2) * 100) / 0x28 <=
            100 - (iVar1 * 100) / (iVar2 + iVar1)) - 1 & 6) + 1;
  }
  if (iVar2 != -4) {
    return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
  }
  return 0;
}

