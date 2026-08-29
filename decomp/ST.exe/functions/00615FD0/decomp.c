#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006101B0 @ 00610879 -> read as EAX on
   every CFG path | 006101B0 @ 006111FC -> read as EAX on every CFG path | 006101B0 @ 0061185E ->
   read as EAX on every CFG path | 006101B0 @ 00612365 -> read as EAX on every CFG path */

int __thiscall FUN_00615fd0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_c;
  short local_6;

  iVar2 = 0;
  local_c = 0;
  STField<undefined4>(this,0x248) = 0xffffffff;
  if (param_1 != 1) {
    if (param_1 < 2) {
      return param_2;
    }
    if (3 < param_1) {
      return param_2;
    }
    if ((STField<int *>(this,0x2ff) != nullptr) &&
       /* ST_CALLSITE[0061602F]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
       (iVar1 = STStructuralVirtualCall<undefined4>(STField<int *>(this,0x2ff), 0xE0, STField<undefined4>(this,0x303), (int)&param_2 + 2, (int)&param_1 + 2, &local_6, &local_c), iVar1 == 0)) {
      if (STField<int>(this,0x1f7) == 2) {
        if (STField<int>(this,0x2fb) == STField<int>(this,0x207)) {
          thunk_FUN_00601d10((int)STField<short>(this,0x201),STField<int>(this,0x21b),
                             STField<RecoveredRecord_00601D10_11B39116 *>(this,0x2ff),
                             (short)STField<undefined4>(this,0x1fb),
                             STField<ushort>(this,0x1ff),0xb0,0x12a);
          iVar2 = 1;
        }
        else {
          thunk_FUN_00601d10((int)STField<short>(this,0x201),STField<int>(this,0x21b),
                             STField<RecoveredRecord_00601D10_11B39116 *>(this,0x2ff),
                             (short)STField<undefined4>(this,0x1fb),
                             STField<ushort>(this,0x1ff),0xb0,0x110);
        }
      }
      STField<int>(this,0x30f) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x22f) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x30b) = (int)STPiece<2,2>(param_2);
      STField<int>(this,0x313) = (int)local_6;
      STField<undefined4>(this,0x307) = local_c;
      STField<int>(this,0x22b) = (int)STPiece<2,2>(param_2);
      STField<int>(this,0x233) = (int)local_6;
      /* ST_CALLSITE[00616113]: CALL 0x00405993; direct=00405993 STGenBombC::LoadImagSpr */
      iVar2 = STGenBombC::LoadImagSpr(this,0,iVar2);
      if (iVar2 != 0) {
        if (STField<int>(this,0x1f7) == 0) {
          thunk_FUN_00617560(this,0x478);
          return 7;
        }
        if (STField<int>(this,0x1f7) != 1) {
          return 7;
        }
        thunk_FUN_00617560(this,0x48c);
        return 7;
      }
    }
    goto LAB_006161d7;
  }
  STField<undefined4>(this,0x22f) = STField<undefined4>(this,0x30f);
  STField<undefined4>(this,0x22b) = STField<undefined4>(this,0x30b);
  STField<undefined4>(this,0x233) = STField<undefined4>(this,0x313);
  STField<undefined4>(this,0x2ff) = 0;
  if (STField<int>(this,0x1f7) == 0) {
    iVar2 = 0x478;
LAB_006161a8:
    thunk_FUN_00617560(this,iVar2);
  }
  else if (STField<int>(this,0x1f7) == 1) {
    iVar2 = 0x48c;
    goto LAB_006161a8;
  }
  /* ST_CALLSITE[006161B5]: CALL 0x00405993; direct=00405993 STGenBombC::LoadImagSpr */
  iVar2 = STGenBombC::LoadImagSpr(this,0,0);
  if (iVar2 != 0) {
    STField<undefined4>(this,0x307) = local_c;
    return 7;
  }
LAB_006161d7:

  thunk_FUN_0060ec00(this);
  return 9;
}

