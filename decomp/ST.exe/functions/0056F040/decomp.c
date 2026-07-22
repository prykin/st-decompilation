#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8 */

void __thiscall STAppC::sub_0056F040(STAppC *this)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar8;
  int local_c;

  iVar5 = 8;
  pcVar2 = &this->field_11A7;
  do {
    if (((pcVar2[0x22] != this->field_112D) || (pcVar2[0x21] != this->field_112E)) &&
       (*pcVar2 == '\0')) {
      *pcVar2 = '\x01';
    }
    pcVar2 = pcVar2 + 0x51;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  switch(this->field_1180) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_6:
  case CASE_8:
    pcVar2 = &this->field_11C9;
    this->field_148F = 0;
    local_c = 8;
    do {
      if (*pcVar2 != -1) {
        memset((void *)(&this->field_0x1490 + (uint)(byte)this->field_148F * 0x9c), 0, 0x9c); /* compiler bulk-zero initialization */
        if (*pcVar2 == this->field_112D) {
          uVar3 = 0xffffffff;
          pcVar6 = &this->field_0x7bd;
          do {
            pcVar8 = pcVar6;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar8 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar8;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar6 = pcVar8 + -uVar3;
          pcVar8 = &this->field_0x1490 + (uint)(byte)this->field_148F * 0x9c;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar8 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          }
        }
        (&this->field_0x14d4)[(uint)(byte)this->field_148F * 0x9c] = *pcVar2;
        (&this->field_0x14d5)[(uint)(byte)this->field_148F * 0x9c] = 1;
        (&this->field_0x14d6)[(uint)(byte)this->field_148F * 0x9c] = pcVar2[-0x22] == '\0';
        (&this->field_0x14d7)[(uint)(byte)this->field_148F * 0x9c] = 1;
        this->field_148F = this->field_148F + '\x01';
      }
      pcVar2 = pcVar2 + 0x51;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

