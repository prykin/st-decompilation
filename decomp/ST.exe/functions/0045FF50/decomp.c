#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=4; incoming_this_accesses=5;
   incoming_edx_uses=0
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (42), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004601F0 @ 00460206 -> read as EAX on
   every CFG path | 00460260 @ 00460276 -> read as EAX on every CFG path | 004602E0 @ 00460334 ->
   unknown: terminal before explicit accumulator kill | 004603B0 @ 00460516 -> read as EAX on every
   CFG path | 004603B0 @ 004605C2 -> read as EAX on every CFG path | 004603B0 @ 0046072D -> read as
   EAX on every CFG path | 004603B0 @ 0046076D -> read as EAX on every CFG path | 004608B0 @
   00460B95 -> read as EAX on every CFG path | 004608B0 @ 00460C2F -> read as EAX on every CFG path
   | 004608B0 @ 00460CEC -> read as EAX on every CFG path | 004608B0 @ 00460D7B -> read as EAX on
   every CFG path | 004608B0 @ 00461299 -> read as EAX on every CFG path | 004608B0 @ 004615C3 ->
   read as EAX on every CFG path | 004608B0 @ 0046187B -> read as EAX on every CFG path | 0046B100 @
   0046B258 -> read as EAX on every CFG path | 0046B100 @ 0046B278 -> read as EAX on every CFG path
   | 0046B100 @ 0046B633 -> read as EAX on every CFG path | 0046B100 @ 0046BF9E -> read as EAX on
   every CFG path | 0046B100 @ 0046C310 -> read as EAX on every CFG path | 0046B100 @ 0046C384 ->
   read as EAX on every CFG path | 0046B100 @ 0046C3C0 -> killed on every CFG path | 0046CF20 @
   0046D17F -> read as EAX on every CFG path | 0046CF20 @ 0046D215 -> read as EAX on every CFG path
   | 00471AC0 @ 00471DE4 -> read as EAX on every CFG path */

int __thiscall STBoatC::sub_0045FF50(STBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar1;
  uint uVar1;
  int iVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 0) {
    this_00 = thunk_FUN_0042b760((char)this->field_0024,this->field_0030);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[0045FF8B]: CALL 0x00402b26; direct=00402B26 STGroupBoatC::sub_0040AE40 */
      STGroupBoatC::sub_0040AE40(this_00,(uint)(ushort)this->field_0032,'\0');

      iVar1 = thunk_FUN_0040d540((AnonShape_0040D540_1BB7A4CF *)this_00,
                                 (uint)(ushort)this->field_0032);
      switch(iVar1) {
      case 0:
        this->field_00FD = 1;
        /* ST_CALLSITE[0045FFF0]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
        STGroupBoatC::sub_0040CDB0(this_00,(uint)(ushort)this->field_0032);
        break;
      case 1:
        this->field_00FA = 0;
        /* ST_CALLSITE[0045FFBB]: CALL 0x00403927; direct=00403927 STBoatC::sub_0045F6C0 */
        sub_0045F6C0(this);
        return 2;
      case -6:
      case 2:
        this->field_00FA = this->field_00FA + 1;
        return 2;
      default:
        return 2;
      }
switchD_00460024_caseD_1:
      return 0;
    }
  }
  else {
    /* ST_CALLSITE[00460001]: CALL dword ptr [EDX + 0x1c] */
    uVar1 = this->vfunc_1C();
    /* ST_CALLSITE[0046000A]: CALL dword ptr [EAX + 0xd8] */
    iVar2 = this->vfunc_D8();
    if (iVar2 == 0) {
      switch(uVar1) {
      case 0:
        if ((this->field_06F7 != CASE_B) && (this->field_06F7 != CASE_23)) {
          return 2;
        }
        if (this->field_021D != 1) {
          return 2;
        }
        if (this->field_0024 != (uint)DAT_0080874d) {
          return 2;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        ST3DSMAPContext::sub_006E6780
                  (this->field_0211,
                   CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                            (short)this->field_0018));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        ST3DSMAPContext::sub_006E6710
                  (this->field_0211,(float)(int)this->field_0041 * _DAT_007904f8 * _DAT_007904f0,
                   (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                   (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                   CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                            (short)this->field_0018));
        return 2;
      case 1:
        goto switchD_00460024_caseD_1;
      case 2:
        /* ST_CALLSITE[00460106]: CALL dword ptr [EDX + 0x20] */
        this->StopMove();
        return 3;
      }
    }
  }
  return -1;
}

