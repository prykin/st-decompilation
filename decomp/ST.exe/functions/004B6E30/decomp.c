#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B6E30_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4 __thiscall FUN_004b6e30(void *this,int param_1,Global_sub_004B6E30_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  switch(param_2) {
  case CASE_0:
    iVar4 = 0;
    break;
  case CASE_1:
    iVar4 = 1;
    break;
  case CASE_2:
    iVar4 = 2;
    break;
  case CASE_3:
    iVar4 = 3;
    break;
  case CASE_4:
    iVar4 = 4;
    break;
  case CASE_5:
    iVar4 = 5;
    break;
  default:
    iVar4 = -1;
  }
  if (param_1 != 1) {
    return 0;
  }
  iVar4 = iVar4 * 4;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar3 = STField<int>(this,0x24) * 0xa62;
  if (*(int *)(iVar4 + 0x7f579a + iVar3) == 0) {
    iVar2 = 0;
    piVar5 = &g_packedRecords_A62x8[STField<int>(this,0x24)].field1942_0x97a;
    iVar1 = 6;
    do {
      if (iVar2 < *piVar5) {
        iVar2 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((-1 < iVar2) && (iVar2 < 6)) {
      iVar2 = iVar2 + 1;
      *(int *)(iVar4 + 0x7f579a + iVar3) = iVar2;
    }
  }
  else {
    iVar3 = 0;
    do {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar1 = STField<int>(this,0x24) * 0xa62;
      iVar2 = *(int *)(iVar3 + 0x7f579a + iVar1);
      if (*(int *)(iVar4 + 0x7f579a + iVar1) < iVar2) {
        *(int *)(iVar3 + 0x7f579a + iVar1) = iVar2 + -1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x18);
    iVar2 = STField<int>(this,0x24);
    *(undefined4 *)(iVar4 + STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A)) = 0;
  }
  /* ST_CALLSITE[004B6F30]: CALL 0x00401893; direct=00401893 STAllPlayersC::sub_004B7750 */
  STAllPlayersC::sub_004B7750
            (g_allPlayers_007FA174,
             STReplaceLowByte((uint32_t)(iVar2), (uint8_t)(STField<undefined1>(this,0x24))));
  return 0;
}

