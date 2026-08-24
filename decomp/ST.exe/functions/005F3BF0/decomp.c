#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=3; incoming_this_accesses=12;
   incoming_edx_uses=2; incoming_stack_parameter_uses=32; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STBHEShellC::sub_005F3BF0(STBHEShellC *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
  double dVar1;
  short sVar2;
  float fVar3;
  AnonPointee_STBHEShellC_00F3 *pAVar4;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float local_20 [2];
  int local_18;
  float local_14_mg0;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == '\0') {
    this->field_00D1 = (short)this->field_0093;
    sVar2 = (short)this->field_009B;
    this->field_00D3 = (short)this->field_0097;
    this->field_00D5 = sVar2;
    iVar6 = 900 - sVar2;
    this->field_00DF = 0x14;
    this->field_00E7 = 1;
    this->field_00EF = iVar6;
    this->field_00FB = g_playSystem_00802A38->field_00E4;
    if (0 < iVar6) {
      this->field_00C9 = 0;
      return 1;
    }
    /* ST_CALLSITE[005F41C4]: CALL 0x0040473c; direct=0040473C STBHEShellC::sub_005F3BF0 */
    iVar6 = sub_005F3BF0(this,param_1,param_2,param_3,'\x01');
    if (iVar6 != 0) {
      this->field_00C9 = 1;
      this->field_0104 = CASE_1;
      local_8 = 1;
    }
  }
  else if (param_4 == '\x01') {
    iVar4 = FUN_006aced8(this->field_0093,this->field_0097,param_1,param_2);
    this->field_00EF = iVar4;
    local_14_mg0 = (float)iVar4;
    if (iVar4 < 0x1f7) {
      this->field_00F7 = (this->field_00DF * this->field_00DF * 10000) / 0x1f6;
      iVar6 = this->field_009B;
      lVar9 = Library::MSVCRT::__ftol();
      uVar7 = (int)lVar9 + 1;
      fVar3 = (float)(int)local_14_mg0 / (float)(int)(uVar7 * 2);
      local_14_mg0 = (fVar3 * fVar3) / (float)(int)local_14_mg0;
      dVar1 = (double)(fVar3 / local_14_mg0 + _DAT_00790784);
      Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
      lVar9 = Library::MSVCRT::__ftol();
      local_10 = (int)lVar9;
      if (this->field_00EF != 0) {
        this->field_00D1 = (short)this->field_0093;
        this->field_00FF = uVar7;
        this->field_00D3 = (short)this->field_0097;
        this->field_00D5 = (short)this->field_009B;
        this->field_00E3 = this->field_00DF;
        lVar9 = Library::MSVCRT::__ftol();
        this->field_00CD = (int)lVar9;
        lVar9 = Library::MSVCRT::__ftol();
        local_18 = -this->field_00DF;
        iVar6 = thunk_FUN_005f3b30((float)local_10,(float)(int)this->field_00DF,
                                   (float)(0x4b0 - iVar6),(float)local_18,local_20);
        if (iVar6 != 0) {
          lVar10 = Library::MSVCRT::__ftol();
          this->field_00DF = (int)lVar10;
          lVar10 = Library::MSVCRT::__ftol();
          this->field_00EB = (int)lVar10;
          this->field_00D7 = ((param_1 - this->field_00D1) * (int)lVar9) / iVar4;
          this->field_00DB = ((param_2 - this->field_00D3) * (int)lVar9) / iVar4;
          uVar7 = g_playSystem_00802A38->field_00E4;
          this->field_00C9 = 1;
          this->field_00FB = uVar7;
          this->field_00E7 = local_10;
          this->field_00F3 = (AnonPointee_STBHEShellC_00F3 *)(iVar4 / 2);
          return 1;
        }
      }
    }
    else {
      iVar6 = this->field_00DF;
      iVar5 = (iVar6 * iVar6 * 10000) / iVar4;
      this->field_00F7 = iVar5;
      if (iVar6 * iVar6 != 0) {
        this->field_00E3 = iVar6;
        this->field_00D1 = (short)this->field_0093;
        this->field_00D3 = (short)this->field_0097;
        this->field_00D5 = (short)this->field_009B;
        uVar7 = (int)(0x1eab90 / (longlong)(iVar6 * 0x1b9f)) + 1;
        iVar5 = iVar5 * uVar7;
        this->field_00FF = uVar7;
        local_c = iVar6 * 0x1b9f;
        pAVar4 = (AnonPointee_STBHEShellC_00F3 *)((int)(local_c * uVar7) / 10000);
        local_10 = ((local_c / 100) * (local_c / 100)) / ((int)pAVar4 * 2);
        iVar8 = (int)((ulonglong)((longlong)iVar5 * -0x68db8bad) >> 0x20);
        local_18 = (iVar8 >> 0xc) - (iVar8 >> 0x1f);
        iVar6 = thunk_FUN_005f3b30((float)local_c / (float)local_10,(float)iVar6,
                                   (float)((int)pAVar4 +
                                          (-(int)(short)this->field_009B -
                                          (int)(iVar5 * uVar7) / 20000) + 0x44c),(float)local_18,
                                   local_20);
        if (iVar6 != 0) {
          lVar9 = Library::MSVCRT::__ftol();
          this->field_00DF = (int)lVar9;
          lVar9 = Library::MSVCRT::__ftol();
          this->field_00EB = (int)lVar9;
          this->field_00D7 = ((param_1 - this->field_00D1) * local_10) / (int)local_14_mg0;
          this->field_00DB = ((param_2 - this->field_00D3) * local_10) / (int)local_14_mg0;
          uVar7 = g_playSystem_00802A38->field_00E4;
          this->field_00C9 = 1;
          this->field_00FB = uVar7;
          this->field_00E7 = local_10;
          this->field_00F3 = pAVar4;
          return 1;
        }
      }
    }
  }
  else if ((param_4 == '\x02') && (iVar6 = this->field_00EF, iVar6 != 0)) {
    uVar7 = this->field_00FF;
    this->field_00C9 = 2;
    if (uVar7 < g_playSystem_00802A38->field_00E4) {
      this->field_00FB = g_playSystem_00802A38->field_00E4 - uVar7;
      if (0x1f6 < iVar6) {
        this->field_00D5 = 0x44c;
        iVar5 = this->field_00E3 * 0x1b9f;
        this->field_00DF = iVar5;
        this->field_00E3 = iVar5;
        this->field_00D7 = ((param_1 - this->field_00D1) * iVar5) / iVar6;
        this->field_00DB = ((param_2 - this->field_00D3) * iVar5) / iVar6;
        return 1;
      }
      this->field_00DF = this->field_00F7 * uVar7;
      iVar5 = this->field_00CD;
      this->field_00D5 = 0x4b0 - (short)((this->field_00F7 * uVar7 * uVar7) / 20000);
      this->field_00E3 = iVar5;
      this->field_00D7 = ((param_1 - this->field_00D1) * iVar5) / iVar6;
      this->field_00DB = ((param_2 - this->field_00D3) * iVar5) / iVar6;
      return 1;
    }
  }
  return local_8;
}

