#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_009B uses
   /SubmarineTitans/Recovered/Enums/AiFltClassTy_field_009BState. Cases:
   CASE_0=0;CASE_A=10;CASE_14=20;CASE_19=25;CASE_23=35;CASE_28=40;CASE_2A=42;CASE_32=50;CASE_33=51;CASE_34=52;CASE_3C=60;CASE_41=65;CASE_64=100;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_78=120;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_8C=140;CASE_1F5=501;CASE_1F6=502;CASE_1F7=503;CASE_1F8=504;CASE_201=513;CASE_246=582;CASE_24E=590
    */

void __thiscall AiFltClassTy::sub_00664760(AiFltClassTy *this)

{
  short *psVar1;
  ushort *puVar2;
  short *psVar3;
  AnonPointee_AiFltClassTy_0223 *pAVar4;
  AnonPointee_AiFltClassTy_022F *pAVar5;
  uint uVar6;
  bool bVar7;
  short local_10;
  short local_e [5];

  uVar6 = 0;
  pAVar5 = this->field_022F;
  this->field_009B = CASE_0;
  this->field_009F = 0;
  this->field_00A3 = 0;
  this->field_00A7 = 0;
  bVar7 = *(int *)&pAVar5->field_0xc != 0;
  if (0 < *(int *)&pAVar5->field_0xc) {
    do {
      if (bVar7) {
        psVar3 = (short *)(pAVar5->field_0008 * uVar6 + pAVar5->field_001C);
      }
      else {
        psVar3 = nullptr;
      }
      thunk_FUN_006756d0(psVar3,psVar3 + 1,psVar3 + 3,psVar3 + 4);
      pAVar5 = this->field_022F;
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)&pAVar5->field_0xc;
    } while ((int)uVar6 < (int)*(uint *)&pAVar5->field_0xc);
  }
  pAVar4 = this->field_0223;
  uVar6 = 0;
  if (0 < *(int *)&pAVar4->field_0xc) {
    bVar7 = *(int *)&pAVar4->field_0xc != 0;
    do {
      if (bVar7) {
        psVar3 = (short *)(pAVar4->field_0008 * uVar6 + pAVar4->field_001C);
      }
      else {
        psVar3 = nullptr;
      }
      psVar1 = psVar3 + 1;
      thunk_FUN_00675950(STReplaceLowWord((uint32_t)(psVar3), (uint16_t)(*psVar3)),
                         STReplaceLowWord((uint32_t)(psVar1), (uint16_t)(*psVar1)),psVar3[2],psVar3,psVar1,
                         psVar3 + 2,0);
      pAVar4 = this->field_0223;
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)&pAVar4->field_0xc;
    } while ((int)uVar6 < (int)*(uint *)&pAVar4->field_0xc);
  }
  if (((this->field_0163 == '\x01') && (*(int *)&this->field_022F->field_0xc == 0)) &&
     (puVar2 = this->field_0284, puVar2 != nullptr)) {
    local_10 = puVar2[0x41] - 4;
    local_e[0] = puVar2[0x42] - 4;
    local_e[2] = 9;
    local_e[3] = 9;
    local_e[1] = 0;
    local_e[4] = 5;
    thunk_FUN_006756d0(&local_10,local_e,local_e + 2,local_e + 3);
    /* ST_CALLSITE[00664889]: CALL 0x00402a27; direct=00402A27 AiFltClassTy::AppendZone */
    AppendZone(this,&local_10);
  }
  if ((this->field_0122 == '\x01') && (*(int *)&this->field_0223->field_0xc == 0)) {
    pAVar5 = this->field_022F;
    uVar6 = 0;
    if (0 < *(int *)&pAVar5->field_0xc) {
      bVar7 = *(int *)&pAVar5->field_0xc != 0;
      do {
        if (bVar7) {
          psVar3 = (short *)(pAVar5->field_0008 * uVar6 + pAVar5->field_001C);
        }
        else {
          psVar3 = nullptr;
        }
        /* ST_CALLSITE[006648CB]: CALL 0x00403f7b; direct=00403F7B AiFltClassTy::AppendPoint */
        AppendPoint(this,psVar3,5);
        pAVar5 = this->field_022F;
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < *(uint *)&pAVar5->field_0xc;
      } while ((int)uVar6 < (int)*(uint *)&pAVar5->field_0xc);
    }
  }
  return;
}

