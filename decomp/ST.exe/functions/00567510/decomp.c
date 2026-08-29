#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00567510.
   Evidence: incoming_receiver_captures=3; receiver_accesses=34; incoming_edx_uses=0; calls=16;
   ecx_pointer_setup=16; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STSwitchEnumApplier] Switch target field_10E5 uses
   /SubmarineTitans/Recovered/Enums/RecoveredReceiver_00567510_field_10E5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::FUN_00567510
          (RecoveredReceiver_00567510 *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  float fVar2;
  RecoveredReceiver_00567510 *pRVar3;
  int local_EAX_135;
  int iVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  InternalExceptionFrame local_b0;
  InternalExceptionFrame local_6c;
  uint local_28;
  int local_24;
  RecoveredReceiver_00567510 *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  if (this->field_0F8B == 0) {
    return;
  }
  local_20 = this;
  if (DAT_00807363 == '\0') {
    if ((((this->field_10D9 == param_1) && (this->field_10DD == param_2)) &&
        (this->field_10E5 == param_3)) && (this->field_10E1 == param_4)) {
      return;
    }
    this->field_10D9 = param_1;
    this->field_10DD = param_2;
    this->field_10E5 = param_3;
    this->field_10E1 = param_4;
    if ((param_3 == 0) || (param_3 == 2)) {
      iVar13 = 1;
    }
    else {
      iVar13 = -1;
    }
    this->field_10E9 = iVar13;
    this->field_10ED = param_2 - iVar13 * param_1;
    local_b0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_b0;
    iVar4 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
    pRVar3 = local_20;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
    local_8 = 2;
    local_10 = &local_20->field_0E23;
    do {
      iVar13 = local_8;
      FUN_006c1f00(local_8,&local_18,nullptr);
      iVar5 = local_8;
      if ((local_18 == 1) &&
         ((((3 < iVar13 && (iVar13 < 0xb)) || ((0x11 < iVar13 && (iVar13 < 0x15)))) ||
          ((10 < iVar13 && (iVar13 < 0x12)))))) {
        iVar9 = pRVar3->field_10E1 * 0x10;
        local_14 = (*(int *)(&DAT_007c9794 + iVar9) * (DAT_0080730e + 4000)) / 100 + -4000;
        local_1c = local_10[1];
        local_24 = *local_10;
        uVar6 = pRVar3->field_10D9 - local_24;
        uVar10 = (int)uVar6 >> 0x1f;
        uVar7 = pRVar3->field_10DD - local_1c;
        iVar14 = (uVar6 ^ uVar10) - uVar10;
        uVar6 = (int)uVar7 >> 0x1f;
        iVar13 = (uVar7 ^ uVar6) - uVar6;
        iVar11 = iVar14;
        if (iVar14 <= iVar13) {
          iVar11 = iVar13;
        }
        iVar11 = iVar11 + 1;
        pRVar3->field_10F1 = iVar11;
        if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
          iVar11 = *(int *)(&DAT_007c9788 + iVar9);
        }
        iVar8 = local_14;
        if (*(int *)(&DAT_007c9790 + iVar9) < iVar11) {
          iVar11 = iVar14;
          if (iVar14 <= iVar13) {
            iVar11 = iVar13;
          }
          iVar11 = iVar11 + 1;
          pRVar3->field_10F1 = iVar11;
          if (*(int *)(&DAT_007c9788 + iVar9) < iVar11) {
            iVar11 = *(int *)(&DAT_007c9788 + iVar9);
          }
          if (*(int *)(&DAT_007c978c + iVar9) < iVar11) {
            uVar6 = local_14 * 2 - 8000;
            uVar7 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f);
            uVar6 = uVar6 >> 0x1f;
          }
          else {
            if (iVar13 < iVar14) {
              iVar13 = iVar14;
            }
            iVar13 = iVar13 + 1;
            pRVar3->field_10F1 = iVar13;
            local_c = *(int *)(&DAT_007c9788 + iVar9);
            if (iVar13 <= *(int *)(&DAT_007c9788 + iVar9)) {
              local_c = iVar13;
            }
            iVar13 = (4000U - local_14) * 2;
            local_28 = (4000U - local_14 & 0x7fffffff) >> 0x1e;
            uVar6 = local_14 * 2 - 8000;
            uVar7 = uVar6 >> 0x1f;
            uVar6 = (int)uVar6 / 3 + ((int)uVar6 >> 0x1f) +
                    (int)((iVar13 / 3 + (iVar13 >> 0x1f) + local_28 + local_14) *
                         (*(int *)(&DAT_007c978c + iVar9) - local_c)) /
                    (*(int *)(&DAT_007c978c + iVar9) - *(int *)(&DAT_007c9790 + iVar9));
          }
          iVar8 = uVar7 + uVar6;
        }
        Library::DKW::SND::FUN_006c1ce0(local_8,iVar8);
        iVar13 = pRVar3->field_10E9 * local_24 + pRVar3->field_10ED;
        uVar6 = iVar13 - local_1c >> 0x1f;
        iVar11 = (int)(((iVar13 - local_1c ^ uVar6) - uVar6) * 7) / 10;
        iVar14 = pRVar3->field_10E1 * 0x10;
        pRVar3->field_10F1 = iVar11;
        iVar9 = *(int *)(&DAT_007c9788 + iVar14);
        if (iVar11 <= *(int *)(&DAT_007c9788 + iVar14)) {
          iVar9 = iVar11;
        }
        if (iVar9 < *(int *)(&DAT_007c9790 + iVar14)) {
          pRVar3->field_10F1 = iVar11;
          local_c = *(int *)(&DAT_007c9788 + iVar14);
          if (iVar11 <= *(int *)(&DAT_007c9788 + iVar14)) {
            local_c = iVar11;
          }
          iVar11 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar14)) * local_c;
        }
        else {
          iVar11 = 1000;
        }
        pRVar3->field_10F1 = iVar13;
        if (iVar13 == local_1c) {
          iVar13 = 0;
        }
        else {
          if ((pRVar3->field_10E5 == CASE_0) || (pRVar3->field_10E5 == CASE_3)) {
            bVar1 = iVar13 <= local_1c;
          }
          else {
            bVar1 = local_1c <= iVar13;
          }
          iVar13 = (bVar1 - 1 & 2) - 1;
        }
        Library::DKW::SND::FUN_006c1d80(iVar5,iVar13 * iVar11);
        iVar13 = iVar5;
      }
      local_8 = iVar13 + 1;
      local_10 = local_10 + 3;
    } while (local_8 < 0x20);
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  if ((((this->field_10D9 == param_1) && (this->field_10DD == param_2)) &&
      (this->field_10E5 == param_3)) && (this->field_10E1 == param_4)) {
    return;
  }
  this->field_10E5 = param_3;
  this->field_10D9 = param_1;
  this->field_10DD = param_2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_EAX_135 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pRVar3 = local_20;
  if (local_EAX_135 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    return;
  }
  switch(local_20->field_10E5) {
  case CASE_0:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0xbf350481;
    uVar15 = 0xbf350481;
    break;
  case CASE_1:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0xbf350481;
    uVar15 = 0x3f350481;
    break;
  case CASE_2:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0x3f350481;
    uVar15 = 0x3f350481;
    break;
  case CASE_3:
    local_8 = param_4 * 5 + 5;
    fVar2 = (float)local_8;
    uVar16 = 0x3f350481;
    uVar15 = 0xbf350481;
    break;
  default:
    goto switchD_005675bc_default;
  }
  Library::DKW::SND::FUN_006c2160
            ((float)local_20->field_10D9,(float)local_20->field_10DD,fVar2,uVar15,uVar16,0,0,0,
             0x3f800000);
switchD_005675bc_default:
  if (pRVar3->field_10E1 != param_4) {
    pRVar3->field_10E1 = param_4;
    iVar13 = 2;
    piVar12 = &pRVar3->field_0E23;
    do {
      FUN_006c1f00(iVar13,&local_18,nullptr);
      if (local_18 == 1) {
        if (((3 < iVar13) && (iVar13 < 0xb)) || ((0x11 < iVar13 && (iVar13 < 0x15)))) {
          iVar5 = pRVar3->field_10E1 * 0x10;
          Library::DKW::SND::FUN_006c2220
                    (iVar13,(float)*piVar12,(float)piVar12[1],0,
                     (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c9788 + iVar5));
        }
        if ((10 < iVar13) && (iVar13 < 0x12)) {
          iVar5 = pRVar3->field_10E1 * 0x10;
          Library::DKW::SND::FUN_006c2220
                    (iVar13,(float)*piVar12,(float)piVar12[1],0,
                     (float)*(int *)(&DAT_007c9790 + iVar5),(float)*(int *)(&DAT_007c978c + iVar5));
        }
      }
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 3;
    } while (iVar13 < 0x20);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

