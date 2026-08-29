#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e46f0(int *param_1)

{
  int iVar1;
  byte bVar2;
  AiFltClassTy *this;
  int iVar3;
  STGroupBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  STMessage local_28;
  int local_8;

  if (param_1[0x135] + 0x19U <= g_playSystem_00802A38->field_00E4) {
    iVar6 = param_1[0x136];
    param_1[0x135] = g_playSystem_00802A38->field_00E4;
    local_8 = 0;
    do {
      iVar1 = iVar6 % 0x1d + -0xf + param_1[0x16c];
      iVar3 = iVar6 / 0x1d + -0xf + param_1[0x16d];
      if ((((-1 < iVar1) && (iVar1 < g_worldGrid.sizeX)) && (-1 < iVar3)) &&
         (iVar3 < g_worldGrid.sizeY)) {
        iVar3 = g_worldGrid.sizeX * iVar3 + DAT_007fa168;
        bVar2 = *(byte *)(iVar3 + iVar1);
        uVar5 = (uint)bVar2;
        if (uVar5 != 0) {
          if (9 < uVar5) {
            uVar5 = 10;
          }
          *(byte *)(iVar3 + iVar1) = bVar2 - (char)uVar5;
          iVar1 = param_1[0x134];
          local_8 = local_8 + uVar5;
          param_1[0x134] = iVar1 + uVar5;
          if (99 < (int)(iVar1 + uVar5)) {

            thunk_FUN_004e4670(param_1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      if (0x348 < iVar6) {
        iVar6 = 0;
      }
    } while ((iVar6 != param_1[0x136]) && (local_8 < 10));
    param_1[0x136] = iVar6;
    if ((local_8 == 0) && (param_1[0x137] == 0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        param_1[0x137] = 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pSVar4 = thunk_FUN_0042b760((char)param_1[9],*(ushort *)(param_1 + 0xc));
        if ((pSVar4 != nullptr) &&
           (this = pSVar4->field_001C, this != nullptr)) {
          local_28.arg1 = *(STMessageArg *)(param_1 + 6);
          local_28.arg0.words.high = STField<word>(param_1,0x32);
          local_28.id = MESS_AIFLTCLASSTY_5D99;
          local_28.arg0.words.low = 1;
          /* ST_CALLSITE[004E4854]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/int;pointer:/AiFltClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          this->GetMessage(&local_28);
        }
        /* ST_CALLSITE[004E4861]: CALL dword ptr [EDX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
        STStructuralVirtualCall<undefined4>(param_1, 0x90, 4, 0x3cf);
      }
    }
  }
  return 0;
}

