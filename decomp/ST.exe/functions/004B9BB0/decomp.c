#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=004B9C6C MOV AX,word ptr
   [EBP + 0xc] */

undefined4 __thiscall FUN_004b9bb0(void *this,int param_1,ushort param_2,word param_3)

{
  byte bVar1;
  int iVar2;
  STMessage local_24;

  iVar2 = STField<int>(this,0x241) - param_1;
  STField<int>(this,0x241) = iVar2;
  /* ST_CALLSITE[004B9BDA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(STField<char>(this,0x23d));
  STField<int>(this,0x5d7) =
       (iVar2 * 100) / *(int *)(&DAT_007e4178 + ((uint)bVar1 + STField<int>(this,0x235) * 3) * 4);
  if (iVar2 < 1) {
    iVar2 = STField<int>(this,0x245);
    STField<undefined4>(this,0x241) = 0;
    STField<undefined4>(this,0x5d7) = 0;
    if (((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 5)) {
      STField<undefined4>(this,0x5df) = 0;
      /* ST_CALLSITE[004B9C49]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
      TLOBaseTy::SetState(this,1,1);
      if (g_aiBossClass_008117BC != nullptr) {
        local_24.arg0.words.high = STField<word>(this,0x32);
        local_24.arg0.words.low = STField<word>(this,0x24);
        local_24.arg1.words.high = param_3;
        local_24.id = 0x5dd1;
        local_24.arg1.words.low = param_2;
        /* ST_CALLSITE[004B9C85]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_aiBossClass_008117BC->GetMessage(&local_24);
        return 0;
      }
    }
  }
  else {
    thunk_FUN_004cc840(this);
  }
  return 0;
}

