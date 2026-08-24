#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x006611f2) */
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=26;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall AiFltClassTy::sub_00660F70(AiFltClassTy *this,uint *param_1,undefined2 param_2)

{
  Global_sub_004E80F0_param_2Enum GVar1;
  ushort *puVar2;
  bool bVar3;
  STAllPlayersC *pSVar4;
  uint uVar5;
  Global_sub_004E80F0_param_2Enum *pGVar6;
  STAllPlayersC *pSVar7;
  int iVar9;
  DArrayTy *array;
  STGameObjC *pSVar10;
  int iVar8;
  int local_EAX_1023;
  short sVar11;
  uint uVar12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  AnonShape_0068EB30_4F4B480A *pAVar13;
  AnonShape_0068EB30_4F4B480A local_6c;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  STGameObjC *local_10;
  int local_c;
  Global_sub_004E80F0_param_2Enum *local_8;

  if (((this->field_0284 != nullptr) && (this->field_020B != nullptr)) &&
     (g_allPlayers_007FA174 != nullptr)) {
    local_20 = thunk_FUN_004357f0(*(char *)&this->field_0024);
    sVar11 = this->field_007B;
    local_c = 0;
    if ((-(uint)(sVar11 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      pSVar7 = g_allPlayers_007FA174;
      do {
        GVar1 = *local_8;
        if ((GVar1 == 0) || (((GVar1 == 0 || (0x28 < GVar1)) && (sVar11 != 1))))
        goto cf_continue_loop_0066137E;
        if ((((int)GVar1 < 1) || (0x28 < (int)GVar1)) || (pSVar7 == nullptr)) {
          if ((((int)GVar1 < 0x32) || (0x73 < (int)GVar1)) || (pSVar7 == nullptr)) {
            if ((((GVar1 == CASE_A3) || (GVar1 == CASE_A8)) ||
                ((GVar1 == CASE_B2 || (GVar1 == CASE_BE)))) && (pSVar7 != nullptr)) {
              pSVar7 = (STAllPlayersC *)thunk_FUN_004e80f0(this->field_0024,GVar1);
              pSVar4 = g_allPlayers_007FA174;
            }
            else {
              pSVar4 = pSVar7;
              if (((GVar1 != 0xdd) && (GVar1 != 0xde)) && ((GVar1 != 0xe2 && (GVar1 != 0xdc))))
              goto cf_continue_loop_0066137E;
            }
          }
          else {
            pSVar7 = (STAllPlayersC *)thunk_FUN_004e6c20(this->field_0024,GVar1);
            pSVar4 = g_allPlayers_007FA174;
          }
        }
        else {
          pSVar7 = (STAllPlayersC *)thunk_FUN_004e6a80((byte *)this->field_0024,GVar1);
          pSVar4 = g_allPlayers_007FA174;
        }
        bVar3 = pSVar7 == nullptr;
        pSVar7 = pSVar4;
        if (bVar3) goto cf_continue_loop_0066137E;
        if (this->field_00FF == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar9 = *(int *)(this->field_0284 + 0x9c);
          if (this->field_0039 != 3) {
            if (iVar9 != 0) goto switchD_0066104e_caseD_9;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar9 = *(int *)(this->field_0284 + 0x9a);
          }
          if (iVar9 == 0) goto cf_continue_loop_0066137E;
        default:
          goto switchD_0066104e_caseD_9;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x39:
        case 0x5e:
          iVar9 = *(int *)(this->field_0284 + 0x9c);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x3a:
          iVar9 = *(int *)(this->field_0284 + 0x9e);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x4f:
        case 0x61:
          iVar9 = *(int *)(this->field_0284 + 0x9a);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 100:
          iVar9 = *(int *)(this->field_0284 + 0xa0);
        }
        if (iVar9 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            sVar11 = STField<short>(param_1,0xe);
            uVar12 = STReplaceLowWord((uint32_t)(local_8), (uint16_t)(sVar11));
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            if ((sVar11 < 0) ||
               ((((short)param_1[4] < 0 || (STField<short>(param_1,0x12) < 0)) ||
                (iVar9 = thunk_FUN_004ae0b0(sVar11,(int)(short)param_1[4],
                                            (int)STField<short>(param_1,0x12),*local_8,
                                            this->field_0024,nullptr,nullptr,nullptr
                                            ,0,nullptr), uVar12 = extraout_EDX, iVar9 == 0)))) {
              local_10 = nullptr;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 /* ST_CALLSITE[006611D9]: CALL 0x004059b6; direct=004059B6 AiFltClassTy::sub_0065E360 */
                 (array = (DArrayTy *)sub_0065E360(this,uVar12,0x53), array != nullptr)) {
                if (((array->count != 0) && (g_allPlayers_007FA174 != nullptr)) &&
                   /* ST_CALLSITE[00661208]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   (pSVar10 = STAllPlayersC::GetObjPtr
                                        (g_allPlayers_007FA174,*(char *)&this->field_0024,
                                         *(ushort *)array->data,CASE_1),
                   pSVar10 != nullptr)) {
                  local_10 = pSVar10;
                }
                DArrayDestroy(array);
              }
              local_14 = (int)STField<short>(param_1,0xe);
              puVar2 = this->field_0284;
              local_18 = (int)(short)param_1[4];
              local_1c = (int)STField<short>(param_1,0x12);
              iVar9 = thunk_FUN_004b0d10(this->field_0024,*local_8,&local_14,&local_18,&local_1c,
                                         (int)(short)puVar2[0x41],(int)(short)puVar2[0x42],
                                         (int)(short)puVar2[0x43],(int)local_10);
              if (iVar9 == 0) {
                return;
              }
              STField<undefined2>(param_1,0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              STField<undefined2>(param_1,0x12) = (undefined2)local_1c;
            }
            /* ST_CALLSITE[006612A9]: CALL 0x00403445; direct=00403445 _GetEmbrGrpTobjGrpExch */
            iVar8 = _GetEmbrGrpTobjGrpExch(this->field_0024,*local_8,(uint)(ushort)this->field_007D);
            if (0 < iVar8) {
              return;
            }
          }
          pGVar6 = local_8;
          pAVar13 = &local_6c;
          for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)pAVar13 = 0;
            pAVar13 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar13->field_0003 + 1);
          }
          uVar5 = param_1[3];
          *(undefined2 *)pAVar13 = 0;
          STPiece<0,4>(local_6c) = *pGVar6;
          STPiece<4,2>(local_6c) = param_2;
          if (local_20 == nullptr) {
            STPiece<8,4>(local_6c) = 0;
          }
          else {
            STPiece<8,4>(local_6c) = local_20->field_065C;
            local_20->field_065C = STPiece<8,4>(local_6c) + 1;
          }
          STPiece<12,2>(local_6c) = this->field_007D;
          STPiece<22,2>(local_6c) = STField<undefined2>(param_1,0xe);
          STPiece<24,2>(local_6c) = *(undefined2 *)(param_1 + 4);
          STPiece<26,2>(local_6c) = STField<undefined2>(param_1,0x12);
          STPiece<28,1>(local_6c) = SUB41(param_1[5],0);
          STPiece<14,4>(local_6c) = 0;
          if ((((char)STPiece<28,1>(local_6c) < '\0') || ('\a' < (char)STPiece<28,1>(local_6c))) &&
             ((STPiece<28,1>(local_6c) = this->field_0081, (char)STPiece<28,1>(local_6c) < '\0' ||
              ('\a' < (char)STPiece<28,1>(local_6c))))) {
            STPiece<28,1>(local_6c) = *(undefined1 *)&this->field_0024;
          }
          local_6c.field_0006 = (short)uVar5;
          Library::MSVCRT::_strncpy(&local_6c.field_0x1d,(char *)((int)param_1 + 0x15),0xe);
          /* ST_CALLSITE[0066136F]: CALL 0x004056be; direct=004056BE AiTactClassTy::PrepareToSave */
          local_EAX_1023 =
               AiTactClassTy::PrepareToSave
                         ((AiTactClassTy *)this->field_0284,&local_6c,this->field_007F);
          pSVar7 = g_allPlayers_007FA174;
          if (local_EAX_1023 == 0) {
            param_1[9] = STPiece<8,4>(local_6c);
            return;
          }
        }
cf_continue_loop_0066137E:
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        sVar11 = this->field_007B;
        if ((int)((-(uint)(sVar11 != 1) & 2) + 1) <= local_c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

