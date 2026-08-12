#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0061BDB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
FUN_0061bdb0(void *this,Global_sub_0061BDB0_param_1Enum param_1,int param_2,int param_3,uint param_4
            )

{
  short sVar1;
  int local_EAX_66;
  int iVar5;
  int iVar2;
  uint uVar4;
  uint uVar3;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_8;

  uVar4 = param_4;
  iVar6 = param_3;
  iVar7 = param_2;
  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    local_EAX_66 = FUN_006acf0d(STField<int>(this,0x9f),STField<int>(this,0xa3),
                                STField<int>(this,0xa7),param_2,param_3,param_4);
    STField<undefined4>(this,0x10f) = 3;
    if (local_EAX_66 < 1) {
      return 2;
    }
    STField<int>(this,0xf7) = local_EAX_66;
    STField<int>(this,0x103) = ((param_2 - STField<int>(this,0x9f)) * 10000) / local_EAX_66;
    STField<int>(this,0xd7) = STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar6 - STField<int>(this,0xa3)) * 10000) / local_EAX_66;
    STField<int>(this,0x10b) = (int)((uVar4 - STField<int>(this,0xa7)) * 10000) / local_EAX_66
    ;
    STField<undefined4>(this,0xcf) = STField<undefined4>(this,0x9f);
    STField<undefined4>(this,0xd3) = STField<undefined4>(this,0xa3);
    STField<uint>(this,0x11b) = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    if ((STField<char>(this,0x14b) != '\0') && (STField<void *>(this,0x7d) != nullptr)) {
      thunk_FUN_00618900(STField<void *>(this,0x7d),STField<int>(this,0x145),0);
      STField<undefined1>(this,0x14b) = 0;
    }
    iVar7 = STField<int>(this,0xa7);
    STField<undefined4>(this,0x10b) = 10000;
    STField<undefined4>(this,0x107) = 0;
    STField<undefined4>(this,0x103) = 0;
    STField<undefined4>(this,0x113) = 0;
    STField<undefined4>(this,0x117) = 0xfffff18c;
    STField<int>(this,0xcf) = STField<int>(this,0x9f);
    STField<int>(this,0xd3) = STField<int>(this,0xa3);
    iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
    ST3DSMAPContext::sub_006E3310
              (g_sT3DSMAPContext_00807598,
               (STField<int>(this,0x9f) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
               (int *)((STField<int>(this,0xa3) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9)
               ,iVar7,(int *)&param_1);
    lVar8 = Library::MSVCRT::__ftol();
    if (STField<int>(this,0xd7) < (int)(short)lVar8) {
      STField<int>(this,0xd7) = (int)(short)lVar8;
    }
    if ((((-1 < STField<int>(this,0x9f)) && (-1 < STField<int>(this,0xa3))) &&
        (STField<int>(this,0x9f) < g_worldGrid.sizeX * 0xc9)) &&
       (STField<int>(this,0xa3) < g_worldGrid.sizeY * 0xc9)) {
      STField<undefined4>(this,0xd7) = STField<undefined4>(this,0xa7);
      goto LAB_0061c0e4;
    }
    break;
  case CASE_2:
    iVar5 = FUN_006acf0d(STField<int>(this,0x9f),STField<int>(this,0xa3),
                         STField<int>(this,0xa7),param_2,param_3,param_4);
    STField<undefined4>(this,0x10f) = 0;
    STField<undefined4>(this,0x117) = 0xffffea52;
    STField<undefined4>(this,0x113) = 0;
    STField<undefined4>(this,0xf3) = 0;
    if (iVar5 < 1) {
      return 2;
    }
    STField<int>(this,0xf7) = iVar5;
    STField<int>(this,0x103) = ((param_2 - STField<int>(this,0x9f)) * 10000) / iVar5;
    STField<int>(this,0xd7) = STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar6 - STField<int>(this,0xa3)) * 10000) / iVar5;
    STField<int>(this,0x10b) = (int)((uVar4 - STField<int>(this,0xa7)) * 10000) / iVar5;
    STField<undefined4>(this,0xcf) = STField<undefined4>(this,0x9f);
    STField<undefined4>(this,0xd3) = STField<undefined4>(this,0xa3);
LAB_0061c0e4:
    STField<uint>(this,0x11b) = g_playSystem_00802A38->field_00E4;
    return 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_3:
    param_3 = FUN_006acf0d(STField<int>(this,0x9f),STField<int>(this,0xa3),
                           STField<int>(this,0xa7),param_2,param_3,param_4);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = FUN_006aced8(STField<int>(this,0x9f),STField<int>(this,0xa3),iVar7,iVar6);
    STField<int>(this,0x103) = ((iVar7 - STField<int>(this,0x9f)) * 10000) / param_3;
    iVar7 = param_4 - STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar6 - STField<int>(this,0xa3)) * 10000) / param_3;
    STField<int>(this,0x10b) = (iVar7 * 10000) / param_3;
    if (param_3 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 1;
      }
      iVar6 = param_2;
      if (iVar7 < 1) {
        uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar4;
        iVar6 = (uVar4 >> 0x10 & 7) + 0x11;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = STField<int>(this,0x117) / 100;
        STField<int>(this,0x113) = iVar6;
        uVar4 = (param_3 * iVar7 + iVar6 * iVar6 * 0x32) * 2;
        if ((int)uVar4 < 1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = 0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = FUN_006c8334(uVar4);
        }
        iVar7 = STField<int>(this,0x113);
        iVar6 = (int)(param_4 + iVar7 * -1000) / param_3;
        if (0 < iVar6) {
          STField<int>(this,0x113) = iVar7 * 10000;
          STField<int>(this,0x10f) = (param_2 * 1000) / iVar6;
          return 1;
        }
        iVar2 = -((int)(iVar7 * 1000 + param_4) / param_3);
        if (0 < iVar2) {
          STField<int>(this,0x113) = iVar7 * 10000;
          goto LAB_0061c3e9;
        }
      }
      else {
        if (iVar7 < 0x321) {
          if (iVar7 < 0x191) {
            if (iVar7 < 0xc9) {
              uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0x1c) = uVar4;
              iVar2 = (uVar4 >> 0x10 & 7) + 7;
            }
            else {
              uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0x1c) = uVar4;
              iVar2 = (uVar4 >> 0x10 & 7) + 0x19;
            }
          }
          else {
            uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0x1c) = uVar4;
            iVar2 = (uVar4 >> 0x10 & 7) + 0x23;
          }
        }
        else {
          uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar4;
          iVar2 = (uVar4 >> 0x10 & 7) + 0x2d;
        }
        STField<int>(this,0x113) = iVar2;
        iVar2 = STField<int>(this,0x117) / 100;
        uVar4 = (iVar2 * iVar7 + STField<int>(this,0x113) * STField<int>(this,0x113) * 0x32) *
                2;
        if ((int)uVar4 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_006c8334(uVar4);
        }
        iVar2 = (int)(uVar3 + STField<int>(this,0x113) * -1000) / iVar2;
        if (0 < iVar2) {
          STField<int>(this,0x113) = STField<int>(this,0x113) * 10000;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = iVar6;
LAB_0061c3e9:
          STField<int>(this,0x10f) = (param_2 * 1000) / iVar2;
          return 1;
        }
      }
      STField<undefined4>(this,0x10f) = 100;
    }
    local_8 = 1;
  }
  return local_8;
}

