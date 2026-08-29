#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00619C70 @ 0061A266 -> read as EAX on
   every CFG path | 00619C70 @ 0061A461 -> read as EAX on every CFG path */

int __thiscall FUN_0061c5f0(void *this,undefined4 *param_1)

{
  short sVar1;
  STAllPlayersC_GetObjPtr_param_3Enum SVar2;
  STGameObjC *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short local_18;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  *param_1 = 0;
  if ((STField<char>(this,0x14b) != '\0') && (STField<short>(this,0x149) != -1)) {
    /* ST_CALLSITE[0061C629]: CALL 0x00404052; direct=00404052 thunk_FUN_00601db0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
    SVar2 = thunk_FUN_00601db0(STField<Global_sub_00601DB0_param_1Enum>(this,0x123));
    /* ST_CALLSITE[0061C644]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
    this_00 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,STField<char>(this,0x11f),
                         STField<ushort>(this,0x149),SVar2);
    if (this_00 != nullptr) {
      STField<STGameObjC *>(this,0x139) = this_00;
      /* ST_CALLSITE[0061C667]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0((STFishC *)this_00,&local_a,&local_e,&local_10);
      iVar5 = STField<int>(this,0x127);
      iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
      iVar6 = STField<int>(this,299);
      iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      iVar3 = STField<int>(this,0x12f);
      local_18 = STBiasedDiv16(iVar3, 200); /* exact signed 16-bit grid-index division */
      iVar3 = (-(uint)(STField<int>(this,0x7d) != 0) & 4) + 1;
      if ((((local_a - iVar3 <= iVar5) && (iVar5 < local_a + iVar3)) && (local_e - iVar3 <= iVar6))
         && (iVar6 < local_e + iVar3)) {
        thunk_FUN_00416270(this_00,(uint *)&local_8,&local_6,&local_c);

        FUN_006aced8(STField<int>(this,0x9f),STField<int>(this,0xa3),(int)local_8,(int)local_6
                    );
        STField<int>(this,0x127) = (int)local_8;
        STField<int>(this,0x12f) = (int)local_c;
        STField<int>(this,299) = (int)local_6;
        if ((iVar5 != STField<short>(this,0x133)) || (iVar6 != STField<short>(this,0x135))) {
          *param_1 = 1;
        }
        STField<short>(this,0x133) = (short)iVar5;
        STField<short>(this,0x135) = (short)iVar6;
        STField<short>(this,0x137) = local_18;
        STField<undefined4>(this,0x145) = this_00->field_0018;
        STField<undefined2>(this,0x149) = this_00->field_0032;
        /* ST_CALLSITE[0061C7EB]: CALL dword ptr [EDX + 0x2c] */
        uVar4 = this_00->vfunc_2C();
        STField<undefined4>(this,0x123) = uVar4;

        iVar5 = FUN_006acf0d(STField<int>(this,0x9f),STField<int>(this,0xa3),
                             STField<int>(this,0xa7),(int)local_8,(int)local_6,(int)local_c);
        STField<int>(this,0x13d) = iVar5;

        iVar5 = FUN_006aced8(STField<int>(this,0x9f),STField<int>(this,0xa3),(int)local_8,
                             (int)local_6);
        STField<int>(this,0x141) = iVar5;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

