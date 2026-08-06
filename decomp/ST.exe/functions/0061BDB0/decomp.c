#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0061BDB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
FUN_0061bdb0(void *this,Global_sub_0061BDB0_param_1Enum param_1,int param_2,int param_3,uint param_4
            )

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_8;

  uVar3 = param_4;
  iVar4 = param_3;
  iVar5 = param_2;
  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    iVar5 = FUN_006acf0d(STField<int>(this,0x9f),STField<int>(this,0xa3),
                         STField<int>(this,0xa7),param_2,param_3,param_4);
    STField<undefined4>(this,0x10f) = 3;
    if (iVar5 < 1) {
      return 2;
    }
    STField<int>(this,0xf7) = iVar5;
    STField<int>(this,0x103) = ((param_2 - STField<int>(this,0x9f)) * 10000) / iVar5;
    STField<int>(this,0xd7) = STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar4 - STField<int>(this,0xa3)) * 10000) / iVar5;
    STField<int>(this,0x10b) = (int)((uVar3 - STField<int>(this,0xa7)) * 10000) / iVar5;
    STField<undefined4>(this,0xcf) = STField<undefined4>(this,0x9f);
    STField<undefined4>(this,0xd3) = STField<undefined4>(this,0xa3);
    STField<uint>(this,0x11b) = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    if ((STField<char>(this,0x14b) != '\0') && (STField<void *>(this,0x7d) != nullptr)) {
      thunk_FUN_00618900(STField<void *>(this,0x7d),STField<int>(this,0x145),0);
      STField<undefined1>(this,0x14b) = 0;
    }
    iVar5 = STField<int>(this,0xa7);
    STField<undefined4>(this,0x10b) = 10000;
    STField<undefined4>(this,0x107) = 0;
    STField<undefined4>(this,0x103) = 0;
    STField<undefined4>(this,0x113) = 0;
    STField<undefined4>(this,0x117) = 0xfffff18c;
    STField<int>(this,0xcf) = STField<int>(this,0x9f);
    STField<int>(this,0xd3) = STField<int>(this,0xa3);
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 200) + sVar1) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 200) + sVar1) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    ST3DSMAPContext::sub_006E3310
              (g_sT3DSMAPContext_00807598,
               (STField<int>(this,0x9f) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
               (int *)((STField<int>(this,0xa3) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9)
               ,iVar5,(int *)&param_1);
    lVar6 = Library::MSVCRT::__ftol();
    if (STField<int>(this,0xd7) < (int)(short)lVar6) {
      STField<int>(this,0xd7) = (int)(short)lVar6;
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
    STField<int>(this,0x107) = ((iVar4 - STField<int>(this,0xa3)) * 10000) / iVar5;
    STField<int>(this,0x10b) = (int)((uVar3 - STField<int>(this,0xa7)) * 10000) / iVar5;
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
    param_2 = FUN_006aced8(STField<int>(this,0x9f),STField<int>(this,0xa3),iVar5,iVar4);
    STField<int>(this,0x103) = ((iVar5 - STField<int>(this,0x9f)) * 10000) / param_3;
    iVar5 = param_4 - STField<int>(this,0xa7);
    STField<int>(this,0x107) = ((iVar4 - STField<int>(this,0xa3)) * 10000) / param_3;
    STField<int>(this,0x10b) = (iVar5 * 10000) / param_3;
    if (param_3 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 1;
      }
      iVar4 = param_2;
      if (iVar5 < 1) {
        uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar3;
        iVar4 = (uVar3 >> 0x10 & 7) + 0x11;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = STField<int>(this,0x117) / 100;
        STField<int>(this,0x113) = iVar4;
        uVar3 = (param_3 * iVar5 + iVar4 * iVar4 * 0x32) * 2;
        if ((int)uVar3 < 1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = 0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = FUN_006c8334(uVar3);
        }
        iVar5 = STField<int>(this,0x113);
        iVar4 = (int)(param_4 + iVar5 * -1000) / param_3;
        if (0 < iVar4) {
          STField<int>(this,0x113) = iVar5 * 10000;
          STField<int>(this,0x10f) = (param_2 * 1000) / iVar4;
          return 1;
        }
        iVar2 = -((int)(iVar5 * 1000 + param_4) / param_3);
        if (0 < iVar2) {
          STField<int>(this,0x113) = iVar5 * 10000;
          goto LAB_0061c3e9;
        }
      }
      else {
        if (iVar5 < 0x321) {
          if (iVar5 < 0x191) {
            if (iVar5 < 0xc9) {
              uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0x1c) = uVar3;
              iVar2 = (uVar3 >> 0x10 & 7) + 7;
            }
            else {
              uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0x1c) = uVar3;
              iVar2 = (uVar3 >> 0x10 & 7) + 0x19;
            }
          }
          else {
            uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0x1c) = uVar3;
            iVar2 = (uVar3 >> 0x10 & 7) + 0x23;
          }
        }
        else {
          uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar3;
          iVar2 = (uVar3 >> 0x10 & 7) + 0x2d;
        }
        STField<int>(this,0x113) = iVar2;
        iVar2 = STField<int>(this,0x117) / 100;
        uVar3 = (iVar2 * iVar5 + STField<int>(this,0x113) * STField<int>(this,0x113) * 0x32) *
                2;
        if ((int)uVar3 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_006c8334(uVar3);
        }
        iVar2 = (int)(uVar3 + STField<int>(this,0x113) * -1000) / iVar2;
        if (0 < iVar2) {
          STField<int>(this,0x113) = STField<int>(this,0x113) * 10000;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = iVar4;
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

