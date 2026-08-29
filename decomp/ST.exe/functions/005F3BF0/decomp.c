#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=3; incoming_this_accesses=12;
   incoming_edx_uses=2; incoming_stack_parameter_uses=32; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F27C0 @ 005F2904 -> killed on
   every CFG path | 005F27C0 @ 005F2AB0 -> read as EAX on every CFG path | 005F27C0 @ 005F2BB0 ->
   read as EAX on every CFG path | 005F3BF0 @ 005F41C4 -> read as EAX on every CFG path */

int __thiscall
STBHEShellC::sub_005F3BF0(STBHEShellC *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
  double dVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  AnonPointee_STBHEShellC_00F3 *pAVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float local_20 [2];
  int local_18;
  float local_14_mg0;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == '\0') {
    this->field_00D1 = (short)this->field_0093;
    sVar2 = (short)this->field_009B;
    this->field_00D3 = (short)this->field_0097;
    this->field_00D5 = sVar2;
    iVar7 = 900 - sVar2;
    this->field_00DF = 0x14;
    this->field_00E7 = 1;
    this->field_00EF = iVar7;
    this->field_00FB = g_playSystem_00802A38->field_00E4;
    if (0 < iVar7) {
      this->field_00C9 = 0;
      return 1;
    }
    /* ST_CALLSITE[005F41C4]: CALL 0x0040473c; direct=0040473C STBHEShellC::sub_005F3BF0 */
    iVar7 = sub_005F3BF0(this,param_1,param_2,param_3,'\x01');
    if (iVar7 != 0) {
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
      iVar7 = this->field_009B;
      lVar10 = Library::MSVCRT::__ftol();
      iVar6 = (int)lVar10 + 1;
      fVar4 = (float)(int)local_14_mg0 / (float)(iVar6 * 2);
      local_14_mg0 = (fVar4 * fVar4) / (float)(int)local_14_mg0;
      dVar1 = (double)(fVar4 / local_14_mg0 + _DAT_00790784);
      Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
      lVar10 = Library::MSVCRT::__ftol();
      local_10 = (int)lVar10;
      if (this->field_00EF != 0) {
        this->field_00D1 = (short)this->field_0093;
        this->field_00FF = iVar6;
        this->field_00D3 = (short)this->field_0097;
        this->field_00D5 = (short)this->field_009B;
        this->field_00E3 = this->field_00DF;
        lVar10 = Library::MSVCRT::__ftol();
        this->field_00CD = (int)lVar10;
        lVar10 = Library::MSVCRT::__ftol();
        local_18 = -this->field_00DF;

        iVar7 = thunk_FUN_005f3b30((float)local_10,(float)(int)this->field_00DF,
                                   (float)(0x4b0 - iVar7),(float)local_18,local_20);
        if (iVar7 != 0) {
          lVar11 = Library::MSVCRT::__ftol();
          this->field_00DF = (int)lVar11;
          lVar11 = Library::MSVCRT::__ftol();
          this->field_00EB = (int)lVar11;
          this->field_00D7 = ((param_1 - this->field_00D1) * (int)lVar10) / iVar4;
          this->field_00DB = ((param_2 - this->field_00D3) * (int)lVar10) / iVar4;
          uVar3 = g_playSystem_00802A38->field_00E4;
          this->field_00C9 = 1;
          this->field_00FB = uVar3;
          this->field_00E7 = local_10;
          this->field_00F3 = (AnonPointee_STBHEShellC_00F3 *)(iVar4 / 2);
          return 1;
        }
      }
    }
    else {
      iVar7 = this->field_00DF;
      iVar6 = (iVar7 * iVar7 * 10000) / iVar4;
      this->field_00F7 = iVar6;
      if (iVar7 * iVar7 != 0) {
        this->field_00E3 = iVar7;
        this->field_00D1 = (short)this->field_0093;
        this->field_00D3 = (short)this->field_0097;
        this->field_00D5 = (short)this->field_009B;
        iVar8 = (int)(0x1eab90 / (longlong)(iVar7 * 0x1b9f)) + 1;
        iVar6 = iVar6 * iVar8;
        this->field_00FF = iVar8;
        local_c = iVar7 * 0x1b9f;
        pAVar5 = (AnonPointee_STBHEShellC_00F3 *)((local_c * iVar8) / 10000);
        local_10 = ((local_c / 100) * (local_c / 100)) / ((int)pAVar5 * 2);
        iVar9 = (int)((ulonglong)((longlong)iVar6 * -0x68db8bad) >> 0x20);
        local_18 = (iVar9 >> 0xc) - (iVar9 >> 0x1f);

        iVar7 = thunk_FUN_005f3b30((float)local_c / (float)local_10,(float)iVar7,
                                   (float)((int)pAVar5 +
                                          (-(short)this->field_009B - (iVar6 * iVar8) / 20000)
                                          + 0x44c),(float)local_18,local_20);
        if (iVar7 != 0) {
          lVar10 = Library::MSVCRT::__ftol();
          this->field_00DF = (int)lVar10;
          lVar10 = Library::MSVCRT::__ftol();
          this->field_00EB = (int)lVar10;
          this->field_00D7 = ((param_1 - this->field_00D1) * local_10) / (int)local_14_mg0;
          this->field_00DB = ((param_2 - this->field_00D3) * local_10) / (int)local_14_mg0;
          uVar3 = g_playSystem_00802A38->field_00E4;
          this->field_00C9 = 1;
          this->field_00FB = uVar3;
          this->field_00E7 = local_10;
          this->field_00F3 = pAVar5;
          return 1;
        }
      }
    }
  }
  else if ((param_4 == '\x02') && (iVar7 = this->field_00EF, iVar7 != 0)) {
    uVar3 = this->field_00FF;
    this->field_00C9 = 2;
    if (uVar3 < g_playSystem_00802A38->field_00E4) {
      this->field_00FB = g_playSystem_00802A38->field_00E4 - uVar3;
      if (0x1f6 < iVar7) {
        this->field_00D5 = 0x44c;
        iVar6 = this->field_00E3 * 0x1b9f;
        this->field_00DF = iVar6;
        this->field_00E3 = iVar6;
        this->field_00D7 = ((param_1 - this->field_00D1) * iVar6) / iVar7;
        this->field_00DB = ((param_2 - this->field_00D3) * iVar6) / iVar7;
        return 1;
      }
      this->field_00DF = this->field_00F7 * uVar3;
      iVar6 = this->field_00CD;
      this->field_00D5 = 0x4b0 - (short)((this->field_00F7 * uVar3 * uVar3) / 20000);
      this->field_00E3 = iVar6;
      this->field_00D7 = ((param_1 - this->field_00D1) * iVar6) / iVar7;
      this->field_00DB = ((param_2 - this->field_00D3) * iVar6) / iVar7;
      return 1;
    }
  }
  return local_8;
}

