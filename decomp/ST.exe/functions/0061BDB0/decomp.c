#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0061BDB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=11; incoming_this_accesses=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=29; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STJumpMineC_sub_0061BDB0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (9), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00618C00 @ 00618D14 -> read as EAX on
   every CFG path | 00618C00 @ 00618D42 -> read as EAX on every CFG path | 00619C70 @ 00619F32 ->
   read as EAX on every CFG path | 00619C70 @ 00619FB6 -> read as EAX on every CFG path | 00619C70 @
   0061A294 -> read as EAX on every CFG path | 00619C70 @ 0061A2EB -> read as EAX on every CFG path
   | 00619C70 @ 0061A48F -> read as EAX on every CFG path | 00619C70 @ 0061A4DF -> read as EAX on
   every CFG path | 00619C70 @ 0061A51D -> killed on every CFG path | 00619C70 @ 0061A561 -> read as
   EAX on every CFG path | 00619C70 @ 0061AAFC -> killed on every CFG path */

int __thiscall
STJumpMineC::sub_0061BDB0
          (STJumpMineC *this,STJumpMineC_sub_0061BDB0_param_1Enum param_1,int param_2,int param_3,
          uint param_4)

{
  short sVar1;
  int local_EAX_66;
  int iVar5;
  int iVar2;
  uint uVar4;
  int uVar3;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int local_8;

  uVar4 = param_4;
  iVar6 = param_3;
  iVar7 = param_2;
  local_8 = 0;
  switch(param_1) {
  case CASE_0:

    local_EAX_66 = FUN_006acf0d(this->field_009F,this->field_00A3,this->field_00A7,param_2,param_3,
                                param_4);
    this->field_010F = 3;
    if (local_EAX_66 < 1) {
      return 2;
    }
    this->field_00F7 = local_EAX_66;
    this->field_0103 = ((param_2 - this->field_009F) * 10000) / local_EAX_66;
    this->field_00D7 = this->field_00A7;
    this->field_0107 = ((iVar6 - this->field_00A3) * 10000) / local_EAX_66;
    this->field_010B = (int)((uVar4 - this->field_00A7) * 10000) / local_EAX_66;
    this->field_00CF = this->field_009F;
    this->field_00D3 = this->field_00A3;
    this->field_011B = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    if ((this->field_014B != '\0') && ((void *)this->field_007D != nullptr)) {

      thunk_FUN_00618900((void *)this->field_007D,this->field_0145,0);
      this->field_014B = 0;
    }
    iVar7 = this->field_00A7;
    this->field_010B = 10000;
    this->field_0107 = 0;
    this->field_0103 = 0;
    this->field_0113 = 0;
    this->field_0117 = 0xfffff18c;
    this->field_00CF = this->field_009F;
    this->field_00D3 = this->field_00A3;
    iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
    ST3DSMAPContext::sub_006E3310
              (g_sT3DSMAPContext_00807598,
               (this->field_009F * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
               (int *)((this->field_00A3 * g_sT3DSMAPContext_00807598->field_0380) / 0xc9),iVar7,
               (int *)&param_1);
    lVar8 = Library::MSVCRT::__ftol();
    if (this->field_00D7 < (short)lVar8) {
      this->field_00D7 = (short)lVar8;
    }
    if ((((-1 < this->field_009F) && (-1 < this->field_00A3)) &&
        (this->field_009F < g_worldGrid.sizeX * 0xc9)) &&
       (this->field_00A3 < g_worldGrid.sizeY * 0xc9)) {
      this->field_00D7 = this->field_00A7;
      goto LAB_0061c0e4;
    }
    break;
  case CASE_2:

    iVar5 = FUN_006acf0d(this->field_009F,this->field_00A3,this->field_00A7,param_2,param_3,param_4);
    this->field_010F = 0;
    this->field_0117 = 0xffffea52;
    this->field_0113 = 0;
    this->field_00F3 = 0;
    if (iVar5 < 1) {
      return 2;
    }
    this->field_00F7 = iVar5;
    this->field_0103 = ((param_2 - this->field_009F) * 10000) / iVar5;
    this->field_00D7 = this->field_00A7;
    this->field_0107 = ((iVar6 - this->field_00A3) * 10000) / iVar5;
    this->field_010B = (int)((uVar4 - this->field_00A7) * 10000) / iVar5;
    this->field_00CF = this->field_009F;
    this->field_00D3 = this->field_00A3;
LAB_0061c0e4:
    this->field_011B = g_playSystem_00802A38->field_00E4;
    return 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_3:

    param_3 = FUN_006acf0d(this->field_009F,this->field_00A3,this->field_00A7,param_2,param_3,
                           param_4);

    auto param_2_after_write = FUN_006aced8(this->field_009F,this->field_00A3,iVar7,iVar6); /* compiler stack-slot lifetime split */
    this->field_0103 = ((iVar7 - this->field_009F) * 10000) / param_3;
    iVar7 = param_4 - this->field_00A7;
    this->field_0107 = ((iVar6 - this->field_00A3) * 10000) / param_3;
    this->field_010B = (iVar7 * 10000) / param_3;
    if (param_3 != 0) {
      if (param_2_after_write == 0) {
        param_2_after_write = 1;
      }
      iVar6 = param_2_after_write;
      if (iVar7 < 1) {
        uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar4;
        iVar6 = (uVar4 >> 0x10 & 7) + 0x11;
        auto param_3_after_write = (int)this->field_0117 / 100; /* compiler stack-slot lifetime split */
        this->field_0113 = iVar6;
        uVar4 = (param_3_after_write * iVar7 + iVar6 * iVar6 * 0x32) * 2;
        if ((int)uVar4 < 1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = 0;
        }
        else {

          param_4 = FUN_006c8334(uVar4);
        }
        iVar7 = this->field_0113;
        iVar6 = (int)(param_4 + iVar7 * -1000) / param_3_after_write;
        if (0 < iVar6) {
          this->field_0113 = iVar7 * 10000;
          this->field_010F = (param_2_after_write * 1000) / iVar6;
          return 1;
        }
        iVar2 = -((int)(iVar7 * 1000 + param_4) / param_3_after_write);
        if (0 < iVar2) {
          this->field_0113 = iVar7 * 10000;
          goto LAB_0061c3e9;
        }
      }
      else {
        if (iVar7 < 0x321) {
          if (iVar7 < 0x191) {
            if (iVar7 < 0xc9) {
              uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar4;
              iVar2 = (uVar4 >> 0x10 & 7) + 7;
            }
            else {
              uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar4;
              iVar2 = (uVar4 >> 0x10 & 7) + 0x19;
            }
          }
          else {
            uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar4;
            iVar2 = (uVar4 >> 0x10 & 7) + 0x23;
          }
        }
        else {
          uVar4 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar4;
          iVar2 = (uVar4 >> 0x10 & 7) + 0x2d;
        }
        this->field_0113 = iVar2;
        iVar2 = (int)this->field_0117 / 100;
        uVar4 = (iVar2 * iVar7 + this->field_0113 * this->field_0113 * 0x32) * 2;
        if ((int)uVar4 < 1) {
          uVar3 = 0;
        }
        else {

          uVar3 = FUN_006c8334(uVar4);
        }
        iVar2 = (uVar3 + this->field_0113 * -1000) / iVar2;
        if (0 < iVar2) {
          this->field_0113 = this->field_0113 * 10000;
          param_2_after_write = iVar6;
LAB_0061c3e9:
          this->field_010F = (param_2_after_write * 1000) / iVar2;
          return 1;
        }
      }
      this->field_010F = 100;
    }
    local_8 = 1;
  }
  return local_8;
}

