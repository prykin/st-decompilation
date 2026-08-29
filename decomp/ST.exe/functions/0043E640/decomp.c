#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043E640_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

short FUN_0043e640(char param_1,Global_sub_0043E640_param_2Enum param_2,int param_3,char param_4)

{
  DArrayOf_STGameObjCPtr *pDVar1;
  STGameObjC *this;
  short sVar2;
  short sVar3;
  Global_sub_0043E640_param_2Enum GVar4;
  int iVar5;
  int iVar6;
  byte local_c [4];
  dword local_8;

  iVar6 = 0;
  sVar3 = 0;
  pDVar1 = g_packedRecords_A62x8[param_1].field3_0x9;
  local_8 = pDVar1->count;
  sVar2 = 0;
  if (0 < (int)local_8) {
    do {
      sVar3 = sVar2;
      this = pDVar1->data[iVar6];
      if (((this != nullptr) &&
          /* ST_CALLSITE[0043E685]: CALL dword ptr [EAX + 0x2c] */
          (GVar4 = this->vfunc_2C(), GVar4 == param_2)) &&
         /* ST_CALLSITE[0043E691]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STGameObjC */
         (iVar5 = (*this->vtable[1].vfunc_24)(this), iVar5 != 0)) {
        if (param_3 == 0) {
LAB_0043e6d3:
          if ((param_4 == -1) ||
             /* ST_CALLSITE[0043E6E1]: CALL dword ptr [EAX + 0x6c] */
             (iVar5 = (*pDVar1->data[iVar6]->vtable->vfunc_6C)(pDVar1->data[iVar6]),
             iVar5 == param_4)) {
            sVar3 = sVar3 + 1;
          }
        }
        else {
          switch(param_2) {
          case CASE_38:
          case CASE_39:
          case CASE_4F:
          case CASE_5E:
            /* ST_CALLSITE[0043E6C9]: CALL dword ptr [EAX + 0x88] */
            if ((param_3 == 1) && (iVar5 = (*this->vtable->vfunc_88)(local_c), 0 < iVar5))
            goto LAB_0043e6d3;
          }
        }
      }
      iVar6 = iVar6 + 1;
      sVar2 = sVar3;
    } while (iVar6 < (int)local_8);
  }
  return sVar3;
}

