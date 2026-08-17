#include "../../pseudocode_runtime.h"


int __thiscall FUN_0063c510(void *this,int param_1)

{
  STT3DSprC *this_00;
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = param_1 - STField<int>(this,0x28e);
  iVar4 = ((STField<int>(this,0x292) * iVar4 - (STField<int>(this,0x296) * iVar4 * iVar4) / 2)
          * 3) / 10;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (STField<int>(this,0x29a) == 1) {
    iVar4 = STField<short>(this,0x251) - iVar4;
    STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
    STField<int>(this,0x26e) = iVar4;
    if (iVar4 < STField<int>(this,0x282)) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
    if (STField<int>(this,0x26e) < 1000) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                ((AnonReceiver_00601500 *)((int)this + 899),STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),STField<int>(this,0x272)
                 ,STField<int>(this,0x276),STField<int>(this,0x27a),
                 STField<int>(this,0x235),50000,STField<int>(this,0x25d),
                 STField<ushort>(this,0x261),0xa8,0,0);
    }
  }
  iVar4 = thunk_FUN_0063cb30(this);
  if (iVar4 == 3) {
    if ((STField<char>(this,0x29e) == '\x04') || (STField<char>(this,0x29e) == '\x01')) {
      this_00 = (STT3DSprC *)((int)this + 0x1d5);
      thunk_FUN_004abce0(this_00,0xd,0,0x13,'\0');
      /* ST_CALLSITE[0063C664]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(this_00,0xd,g_playSystem_00802A38->field_00E4);
      STField<undefined1>(this,0x29f) = 1;
      thunk_FUN_004ac6b0(this_00,'\r');
      /* ST_CALLSITE[0063C693]: CALL 0x00403107; direct=00403107 sub_00416240 */
      sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      /* ST_CALLSITE[0063C69C]: CALL dword ptr [EDX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xd8))();
      pVVar2 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar4 = STField<int>(this,0x26e);
        local_8 = STBiasedDiv16(iVar4, 200); /* exact signed 16-bit grid-index division */
        iVar4 = STField<int>(this,0x26a);
        iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
        iVar3 = STField<int>(this,0x266);
        iVar3 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
        if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
              /* ST_CALLSITE[0063C768]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
              (VisibleClassTy::sub_00558C00
                         (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar4,
                          &local_c,&local_10), local_8 < 0)) || ((4 < local_8 || (local_c < 0)))) ||
            (((int)pVVar2->field_0030 <= local_c ||
             ((local_10 = g_centeredOffsets5[local_8] + local_10, local_10 < 0 ||
              (pVVar2->field_0034 <= local_10)))))) ||
           ((pVVar2->field_004C == nullptr ||
            (pVVar2->field_004C[local_c + local_10 * pVVar2->field_0030] != 0)))) {
          if (STField<char>(this,0x29f) == '\0') {
            thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
            STField<undefined1>(this,0x29f) = 1;
          }
        }
        else if (STField<char>(this,0x29f) != '\0') {
          thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
          STField<undefined1>(this,0x29f) = 0;
        }
      }
      STField<undefined1>(this,0x265) = 6;
      STField<undefined1>(this,0x29e) = 2;
      return 3;
    }
    if (STField<int>(this,0x26e) == STField<int>(this,0x282)) {
      return 4;
    }
  }
  return iVar4;
}

