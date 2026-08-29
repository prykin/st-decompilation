#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C21A0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_E=14;CASE_17=23;CASE_19=25;CASE_1A=26;CASE_26=38;CASE_2A=42;CASE_34=52;CASE_37=55;CASE_42=66;CASE_43=67
    */

undefined4 __thiscall
FUN_004c21a0(void *this,Global_sub_004C21A0_param_1Enum param_1,int *param_2,float param_3,
            int param_4)

{
  AnonShape_004C21A0_FDE833A6 *pAVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  float local_c;
  AnonShape_004C21A0_FDE833A6 *local_8;

  sVar3 = 0;
  local_8 = this;

  ST3DSMAPContext::sub_006E1C20
            (STField<ST3DSMAPContext *>(this,0x211),param_3,param_4,0.0,&param_3,&local_c);
  if (param_3 < _DAT_0079034c) {
    lVar5 = Library::MSVCRT::__ftol();
    iVar4 = (short)lVar5 + -1;
  }
  else {
    lVar5 = Library::MSVCRT::__ftol();
    iVar4 = (short)lVar5;
  }
  if (local_c < _DAT_0079034c) {
    lVar5 = Library::MSVCRT::__ftol();
    param_4 = (short)lVar5 + -1;
  }
  else {
    lVar5 = Library::MSVCRT::__ftol();
    param_4 = (short)lVar5;
  }
  pAVar1 = local_8;
  if ((STField<byte>(this,0x1d1) & 4) != 0) {
    sVar3 = 0;
    if (param_2 == this) {
      sVar3 = 4;
    }
    if ((param_2 == nullptr) || (param_2[9] != *(int *)&local_8->field_0x24))
    goto cf_common_exit_004C261B;
    iVar4 = param_2[8];
    if (iVar4 == 0x14) {
      iVar4 = *param_2;
LAB_004c2260:
      /* ST_CALLSITE[004C2260]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar4 = (**(code **)(iVar4 + 0xec))();
      if (iVar4 != 0) {
        sVar3 = 3;
      }
      goto cf_common_exit_004C261B;
    }
    if ((iVar4 != 1000) && (iVar4 != 0x3e9)) goto cf_common_exit_004C261B;
    /* ST_CALLSITE[004C228C]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar4 = STStructuralVirtualCall<undefined4>(param_2, 0xEC);
joined_r0x004c2294:
    if (iVar4 == 0) goto cf_common_exit_004C261B;
LAB_004c2616:
    sVar3 = 4;
    goto cf_common_exit_004C261B;
  }
  switch(param_1) {
  case CASE_0:
    if ((AnonShape_004C21A0_FDE833A6 *)param_2 != local_8) {
      if (param_2 == nullptr) {
        if (local_8->field_0245 == 4) {
          if ((((-1 < iVar4) && (iVar4 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
             (param_4 < g_worldGrid.sizeY)) {
            sVar3 = 5;
          }
          break;
        }
      }
      else if (((local_8->field_0245 == 4) &&
               /* ST_CALLSITE[004C253A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
               ((iVar2 = STStructuralVirtualCall<undefined4>(param_2, 0x2C), iVar2 == 0x37 ||
                /* ST_CALLSITE[004C2546]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                (iVar2 = STStructuralVirtualCall<undefined4>(param_2, 0x2C), iVar2 == 0x6c)))) &&

              (iVar2 = thunk_FUN_004e8b10(param_2,*(uint *)&local_8->field_0x24), iVar2 != 0)) {
        sVar3 = 0x1d;
        break;
      }
      if ((((-1 < iVar4) && (iVar4 < g_worldGrid.sizeX)) &&
          ((-1 < param_4 &&
           ((param_4 < g_worldGrid.sizeY &&
            /* ST_CALLSITE[004C25A2]: CALL 0x004012c1; direct=004012C1 STGameObjC::sub_004C5350 */
            (iVar4 = STGameObjC::sub_004C5350((STGameObjC *)local_8,0,param_2,iVar4,param_4,0,0,1),
            iVar4 != 0)))))) &&
         ((iVar4 = (&DAT_00792ca0)[local_8->field_0235 * 6], iVar4 != 0xa8 &&
          ((iVar4 != 0xa3 && (iVar4 != 0xbe)))))) {
        sVar3 = 7;
        break;
      }
      if ((param_2 == nullptr) || (param_2[9] != *(int *)&local_8->field_0x24)) break;
      iVar4 = param_2[8];
      if (iVar4 == 0x14) {
        iVar4 = *param_2;
        sVar3 = 0;
        goto LAB_004c2260;
      }
      if ((iVar4 != 1000) && (iVar4 != 0x3e9)) break;
      /* ST_CALLSITE[004C260C]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar4 = STStructuralVirtualCall<undefined4>(param_2, 0xEC);
      goto joined_r0x004c2294;
    }
    goto LAB_004c2616;
  case CASE_2:
    goto joined_r0x004c231f;
  case CASE_3:
  case CASE_19:
  case CASE_1A:
  case CASE_34:
    if ((AnonShape_004C21A0_FDE833A6 *)param_2 == local_8) {
      sVar3 = 0;
    }
    else if ((((-1 < iVar4) && (iVar4 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
            (param_4 < g_worldGrid.sizeY)) {
      /* ST_CALLSITE[004C242B]: CALL 0x004012c1; direct=004012C1 STGameObjC::sub_004C5350 */
      iVar4 = STGameObjC::sub_004C5350((STGameObjC *)local_8,0,param_2,iVar4,param_4,0,0,0);
      sVar3 = (-(ushort)(iVar4 != 0) & 6) + 1;
    }
    break;
  case CASE_E:
    sVar3 = 0x15;
    if ((g_tLOBldMark_007FB2AC != nullptr) && (g_tLOBldMark_007FB2AC->field_0024 != 0)) {
      sVar3 = 0x14;
    }
    break;
  case CASE_17:
    if (((param_2 != nullptr) && (local_8->field_0245 == 4)) &&
       /* ST_CALLSITE[004C245E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
       (((iVar4 = STStructuralVirtualCall<undefined4>(param_2, 0x2C), iVar4 == 0x37 ||
         /* ST_CALLSITE[004C246A]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
         (iVar4 = STStructuralVirtualCall<undefined4>(param_2, 0x2C), iVar4 == 0x6c)) &&

        (iVar4 = thunk_FUN_004e8b10(param_2,*(uint *)&pAVar1->field_0x24), iVar4 != 0)))) {
      sVar3 = 0x1d;
      break;
    }
    goto cf_common_exit_004C2352;
  case CASE_26:
  case CASE_37:
joined_r0x004c231f:
    if (param_2 == nullptr) {
      sVar3 = 6;
      break;
    }
    if (((iVar4 < 0) || (g_worldGrid.sizeX <= iVar4)) ||
       ((param_4 < 0 || (g_worldGrid.sizeY <= param_4)))) break;
    goto cf_common_exit_004C2352;
  case CASE_2A:
  case CASE_43:
    if (((((-1 < iVar4) && (iVar4 < g_worldGrid.sizeX)) &&
         ((-1 < param_4 &&
          ((param_4 < g_worldGrid.sizeY && (g_visibleClass_00802A88 != nullptr))))))
        && (0x27 < *(int *)&local_8[2].field_0x3c)) &&
       /* ST_CALLSITE[004C23C4]: CALL 0x004040a7; direct=004040A7 VisibleClassTy::sub_0055AD00 */
       (iVar4 = VisibleClassTy::sub_0055AD00
                          (g_visibleClass_00802A88,iVar4,param_4,2,*(uint *)&local_8->field_0x24,7),
       iVar4 == 0)) {
      sVar3 = 0x19;
    }
    break;
  case CASE_42:
    if ((((param_2 != nullptr) && (param_2[9] == *(int *)&local_8->field_0x24)) &&
        (param_2[8] == 1000)) &&

       (iVar4 = thunk_FUN_004dbb10(local_8,(RecoveredRecord_004DBB10_49DFDDD6 *)param_2), iVar4 != 0
       )) {
      sVar3 = 0x1f;
      break;
    }
cf_common_exit_004C2352:
    sVar3 = 1;
  }
cf_common_exit_004C261B:
  if (((*(int *)&local_8[1].field_0x1d4 != 0) && (sVar3 != 4)) && (sVar3 != 3)) {
    return 0;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22((short)((uint)*(int *)&local_8[1].field_0x1d4 >> 0x10),sVar3);
}

