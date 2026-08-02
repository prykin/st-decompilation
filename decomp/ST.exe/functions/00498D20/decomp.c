#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00498D20_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106

   [ST_RECOVERY:group_boat_set_order_data_v1]
   Source: E:\__titans\wlad\to_grpb.cpp
   Copies discriminator-specific group-order payloads into STGroupBoatC state, deep-copying
   DArray-backed variants and marking the corresponding order data dirty. Name is descriptive;
   original spelling is not confirmed.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_2. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_4. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 5 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_5. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 6 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_6. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 7 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_7. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 8 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_8. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 10 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_A. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 12 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_C. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 13 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_D. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 14 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_E. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 15 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_F. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 16 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_10. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 17 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_11. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 18 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_12. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 19 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_13. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 20 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_14. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 101 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_65. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_2. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_4. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 5 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_5. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 6 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_6. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 7 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_7. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 8 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_8. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 10 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_A. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 11 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_B. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 12 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_C. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 13 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_D. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 14 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_E. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 15 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_F. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 16 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_10. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 17 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_11. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 18 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_12. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 19 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_13. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 20 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_14. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 21 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_15. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 101 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_65. The
   carrier ABI remains pointer:/void.
   [STTypeBootstrapApplier] Retired legacy curated identity; name=STGroupBoatC::sub_00498D20.
   Evidence: unconfirmed descriptive leaf replaced by a structural address name
   [STTypeBootstrapApplier] Normalized signature, return, and explicit parameter provenance to
   ANALYSIS after heuristic identity retirement. Evidence: legacy signature/parameter source
   priority survived curated identity retirement

   [STSwitchEnumApplier] Switch target orderType uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_sub_00498D20_orderTypeEnum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00498D20 -> 006ACC70 @ 00498DD3 | 00498D20 -> 006ACC70 @ 00498EF0 | 00498D20 ->
   006ACC70 @ 00498F4A | 00498D20 -> 006ACC70 @ 00499021 | 00498D20 -> 006ACC70 @ 0049909E

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 102 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_66. The
   carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 103 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_67. The
   carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 104 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_68. The
   carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 105 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_69. The
   carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 106 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_6A. The
   carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy. */

void __thiscall
STGroupBoatC::sub_00498D20
          (STGroupBoatC *this,STGroupBoatC_sub_00498D20_orderTypeEnum orderType,DArrayTy *data)

{
  DArrayTy *pDVar1;
  undefined4 *puVar2;
  DArrayTy *pDVar3;
  int iVar4;
  DArrayTy **ppDVar5;
  dword *pdVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_8 [4];

  switch(orderType) {
  case CASE_1:
    this->field_0065 = 1;
    this->field_0089 = 1;
    pdVar6 = (dword *)&this->field_0xdd;
    goto LAB_00499129;
  case CASE_2:
    this->field_0065 = 1;
    this->field_008D = 1;
    pdVar6 = &this->field_00E7;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pdVar6 = data->flags;
      data = (DArrayTy *)&data->iteratorIndex;
      pdVar6 = pdVar6 + 1;
    }
    if (this->field_00E7 == 0) {
      data = this->field_00EF;
      uVar7 = data->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,uVar7,4,1);
      uVar8 = 0;
      this->field_00EF = pDVar3;
      if (0 < (int)uVar7) {
        do {
          DArrayGetElement(data,uVar8,local_8);
          Library::DKW::TBL::DArrayPut(this->field_00EF,uVar8,local_8);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
        return;
      }
    }
    break;
  case CASE_3:
    this->field_0065 = 1;
    this->field_0091 = 1;
    return;
  case CASE_4:
    this->field_0065 = 1;
    this->field_0095 = 1;
    this->field_015C = data->flags;
    this->field_0160 = (DArrayTy *)data->iteratorIndex;
    if (this->field_015C == 0) {
      data = this->field_0160;
      uVar7 = data->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,uVar7,2,1);
      uVar8 = 0;
      this->field_0160 = pDVar3;
      if (0 < (int)uVar7) {
        do {
          DArrayGetElement(data,uVar8,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::DArrayPut(this->field_0160,uVar8,(byte *)((int)&orderType + 2));
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
        return;
      }
    }
    break;
  case CASE_5:
    this->field_0065 = 1;
    this->field_0099 = 1;
    pdVar6 = &this->field_0164;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pdVar6 = data->flags;
      data = (DArrayTy *)&data->iteratorIndex;
      pdVar6 = pdVar6 + 1;
    }
    if (this->field_0164 == 0) {
      data = this->field_0168;
      uVar7 = data->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,uVar7,2,1);
      uVar8 = 0;
      this->field_0168 = pDVar3;
      if (0 < (int)uVar7) {
        do {
          DArrayGetElement(data,uVar8,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::DArrayPut(this->field_0168,uVar8,(byte *)((int)&orderType + 2));
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
        return;
      }
    }
    break;
  case CASE_6:
    this->field_0065 = 1;
    this->field_009D = 1;
    ppDVar5 = &this->field_0103;
    *ppDVar5 = (DArrayTy *)data->flags;
    this->field_0107 = data->iteratorIndex;
    pDVar3 = *ppDVar5;
    data = (DArrayTy *)pDVar3->count;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
    *ppDVar5 = pDVar1;
    uVar7 = 0;
    if (0 < (int)data) {
      do {
        if (uVar7 < pDVar3->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar7) (runtime stride) */
          puVar2 = (undefined4 *)(pDVar3->elementSize * uVar7 + (int)pDVar3->data);
        }
        else {
          puVar2 = nullptr;
        }
        local_10 = *puVar2;
        local_c = *(undefined2 *)(puVar2 + 1);
        Library::DKW::TBL::DArrayPut(*ppDVar5,uVar7,&local_10);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)data);
      return;
    }
    break;
  case CASE_7:
    this->field_0065 = 1;
    this->field_00A1 = 1;
    this->field_00FF = data->flags;
    return;
  case CASE_8:
    this->field_0065 = 1;
    this->field_00A5 = 1;
    pdVar6 = &this->field_010B;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pdVar6 = data->flags;
      data = (DArrayTy *)&data->iteratorIndex;
      pdVar6 = pdVar6 + 1;
    }
    if (this->field_010B == 0) {
      data = this->field_010F;
      uVar7 = data->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,uVar7,2,1);
      uVar8 = 0;
      this->field_010F = pDVar3;
      if (0 < (int)uVar7) {
        do {
          DArrayGetElement(data,uVar8,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::DArrayPut(this->field_010F,uVar8,(byte *)((int)&orderType + 2));
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
      }
    }
    if (this->field_0123 == 0) {
      data = this->field_0127;
      uVar7 = data->count;
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,uVar7,2,1);
      uVar8 = 0;
      this->field_0127 = pDVar3;
      if (0 < (int)uVar7) {
        do {
          DArrayGetElement(data,uVar8,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::DArrayPut(this->field_0127,uVar8,(byte *)((int)&orderType + 2));
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
        return;
      }
    }
    break;
  case CASE_9:
    this->field_0065 = 1;
    this->field_00A9 = 1;
    pdVar6 = (dword *)&this->field_0137;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pdVar6 = data->flags;
      data = (DArrayTy *)&data->iteratorIndex;
      pdVar6 = pdVar6 + 1;
    }
    *(short *)pdVar6 = (short)data->flags;
    *(undefined1 *)((int)pdVar6 + 2) = *(undefined1 *)((int)&data->flags + 2);
    return;
  case CASE_A:
    this->field_0065 = 1;
    this->field_00AD = 1;
    *(dword *)&this->field_0x156 = data->flags;
    this->field_015A = (short)data->iteratorIndex;
    return;
  case CASE_B:
    this->field_0065 = 1;
    this->field_00B1 = 1;
    this->field_0178 = (AnonShape_005EFAE0_B406B78B *)data->flags;
    return;
  case CASE_C:
    this->field_0065 = 1;
    this->field_00B5 = 1;
    *(dword *)&this->field_0x17c = data->flags;
    this->field_0180 = (short)data->iteratorIndex;
    return;
  case CASE_D:
    this->field_0065 = 1;
    this->field_00B9 = 1;
    pdVar6 = &this->field_0182;
LAB_00499129:
    *pdVar6 = data->flags;
    pdVar6[1] = data->iteratorIndex;
    *(short *)(pdVar6 + 2) = (short)data->elementSize;
    return;
  case CASE_E:
    this->field_0065 = 1;
    this->field_00BD = 1;
    this->field_018C = data->flags;
    this->field_0190 = (short)data->iteratorIndex;
    return;
  case CASE_F:
    this->field_0065 = 1;
    this->field_00C1 = 1;
    *(dword *)&this->field_0x192 = data->flags;
    this->field_0196 = (short)data->iteratorIndex;
    this->field_0198 = *(undefined1 *)((int)&data->iteratorIndex + 2);
    return;
  case CASE_10:
    this->field_0065 = 1;
    this->field_00C5 = 1;
    this->field_01A3 = data->flags;
    this->field_01A7 = data->iteratorIndex;
    this->field_01AB = data->elementSize;
    this->field_01AF = data->count;
    return;
  case CASE_11:
    this->field_0065 = 1;
    this->field_00C9 = 1;
    this->field_0199 = data->flags;
    this->field_019D = data->iteratorIndex;
    this->field_01A1 = (short)data->elementSize;
    return;
  case CASE_12:
    this->field_0065 = 1;
    this->field_00CD = 1;
    this->field_01B3 = data->flags;
    this->field_01B7 = (short)data->iteratorIndex;
    return;
  case CASE_13:
    this->field_0065 = 1;
    this->field_00D1 = 1;
    *(dword *)&this->field_0x1b9 = data->flags;
    this->field_01BD = (short)data->iteratorIndex;
    return;
  case CASE_14:
    this->field_0065 = 1;
    this->field_00D5 = 1;
    *(dword *)&this->field_0x1bf = data->flags;
    this->field_01C3 = (short)data->iteratorIndex;
    return;
  case CASE_15:
    this->field_0065 = 1;
    this->field_00D9 = 1;
    this->field_01C5 = (AnonShape_005EFAE0_B406B78B *)data->flags;
    return;
  case CASE_65:
    this->field_0061 = 1;
    this->field_006D = 1;
    this->field_01C9 = (char)data->flags;
    return;
  case CASE_66:
    this->field_0061 = 1;
    this->field_0071 = 1;
    if (this->field_01CA == nullptr) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      this->field_01CA = pDVar3;
    }
    Library::DKW::TBL::DArrayAppend(this->field_01CA,data);
    return;
  case CASE_67:
    this->field_0061 = 1;
    this->field_0075 = 1;
    if (this->field_01CE == nullptr) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
      this->field_01CE = pDVar3;
    }
    Library::DKW::TBL::DArrayAppend(this->field_01CE,data);
    return;
  case CASE_68:
    this->field_0061 = 1;
    this->field_0079 = 1;
    if (*(int *)&this->field_0x1d2 == 0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      *(DArrayTy **)&this->field_0x1d2 = pDVar3;
    }
    Library::DKW::TBL::DArrayAppend(*(DArrayTy **)&this->field_0x1d2,data);
    return;
  case CASE_69:
    this->field_0061 = 1;
    this->field_007D = 1;
    if (this->field_01D6 == nullptr) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      this->field_01D6 = pDVar3;
    }
    Library::DKW::TBL::DArrayAppend(this->field_01D6,data);
    return;
  case CASE_6A:
    this->field_0061 = 1;
    this->field_0081 = 1;
    if (this->field_01DA == nullptr) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      this->field_01DA = pDVar3;
    }
    Library::DKW::TBL::DArrayAppend(this->field_01DA,data);
  }
  return;
}

