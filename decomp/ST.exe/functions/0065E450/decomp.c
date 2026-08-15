#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0065E450_param_3Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0065E450 -> 004C5350 @ 0065E520

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0065E450 -> 004C5350 @ 0065E520 */

int __fastcall
FUN_0065e450(AnonShape_0065E360_B94C37CB *param_1,undefined4 param_2,
            Global_sub_0065E450_param_3Enum param_3,int param_4,int param_5)

{
  byte bVar1;
  Global_sub_0065E450_param_3Enum GVar2;
  int iVar3;
  DArrayTy *array;
  Global_sub_0065E450_param_3Enum GVar4;
  ushort *puVar5;
  STGameObjC *this;
  uint uVar8;
  int uVar6;
  int uVar7;
  int local_8;

  GVar2 = param_3;
  local_8 = 0;
  switch(param_3) {
  case CASE_A3:
    iVar3 = 0x4e;
    break;
  default:
    iVar3 = 0;
    break;
  case CASE_A8:
    iVar3 = 0x45;
    break;
  case CASE_B2:
    iVar3 = 0x70;
    break;
  case CASE_BE:
    iVar3 = 0x72;
  }
  array = (DArrayTy *)AiFltClassTy::sub_0065E360((AiFltClassTy *)param_1,param_2,iVar3);
  if (array == nullptr) {
    return 0;
  }
  GVar4 = array->count;
  param_3 = 0;
  if (0 < (int)GVar4) {
    do {
      if (param_3 < GVar4) {
        puVar5 = DArrayAt<ushort>(array, param_3);
      }
      else {
        puVar5 = nullptr;
      }
      this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,param_1->field_0024,*puVar5,CASE_1);
      switch(GVar2) {
      case 0:
      case 5:
      case 0x1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar8 = thunk_FUN_004c5350(this,0,nullptr,param_4,param_5,0,0,0);
        local_8 = local_8 + (uint)(uVar8 != 0);
        break;
      case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (this->field_0024 == this->field_023D) {
LAB_0065e58d:
          if ((this->field_0245 != 0) || (this->field_04EC < 100)) goto LAB_0065e5a7;
          bVar1 = 1;
        }
        else {
          uVar6 = LookupRecordByte((char)this->field_023D);
          iVar3 = this->field_0235;
          uVar7 = LookupRecordByte(*(char *)&this->field_0024);
          uVar7 = (int)(byte)uVar7;
          if ((&DAT_007e1984)[uVar7 + ((uint)(byte)uVar6 + iVar3 * 3) * 3] != '\0')
          goto LAB_0065e58d;
LAB_0065e5a7:
          bVar1 = 0;
        }
        local_8 = local_8 + (uint)bVar1;
      }
                    /* WARNING: This code block may not be properly labeled as switch case */
      GVar4 = array->count;
      param_3 = param_3 + 1;
    } while ((int)param_3 < (int)GVar4);
  }
  DArrayDestroy(array);
  return local_8;
}

