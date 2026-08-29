#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetPanel */

undefined4 __thiscall
MMsgTy::SetPanel(MMsgTy *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  SpriteClassTyVTable *pSVar1;
  StartSystemTy *pSVar2;
  MMsgTy *this_00;
  byte bVar4;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  short *arg_1;
  int iVar9;
  uint uVar8;
  UINT *pUVar9;
  MMsgTy_Record_00BC_01FB *pMVar10;
  int iVar12;
  int iVar13;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  SpriteClassTy_SetImagesPtr_param_2Enum arg_2;
  uint uVar19;
  uint uVar20;
  uint arg_3;
  CHAR local_478 [1024];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMsgTy *local_14;
  UINT *local_10;
  uint local_c;
  uint local_8;

  local_c = local_c & 0xffffff00;
  if ((this->field_0065 == '\x02') && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = this;

    iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
    this_00 = local_14;
    if (iVar4 == 0) {
      /* ST_CALLSITE[005B882A]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
      MMObjTy::CloseButtons((MMObjTy *)local_14);
      /* ST_CALLSITE[005B8835]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      HidePanel(this_00,0,0,1);
      if (param_1 == 0) {
        this_00->field_1CD0 = 0;
      }
      else {
        this_00->field_1CD0 = param_1;
        if (param_3 == 0) {
          uVar20 = 0xffffffff;
          local_8 = this_00->field_1D88;
          uVar19 = 7;
          iVar18 = -1;
          iVar17 = -1;
          iVar16 = 1;
          uVar8 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x39;
          iVar12 = 0x158;
          /* ST_CALLSITE[005B88F9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar5 = LoadResourceString(param_1,g_hINSTANCE_00807618);

          puVar7 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar5,iVar12,iVar13,
                              cVar14,uVar8,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B8913]: CALL dword ptr [EDX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(local_8 + 8))(puVar7,uVar19,uVar20);
          this_00->field_1D90 = 0;
        }
        else {
          pcVar5 = LoadResourceString(param_4,g_hINSTANCE_00807618);
          pcVar6 = LoadResourceString(param_1,g_hINSTANCE_00807618);
          /* ST_CALLSITE[005B887D]: CALL dword ptr [0x0085bde8] */
          wsprintfA(local_478,"%s\n(%s=%li)",pcVar6,pcVar5,param_3);
          iVar12 = this_00->field_1D88;
          uVar20 = 0xffffffff;
          uVar19 = 7;

          puVar7 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)g_startSystem_0081176C->field_0030,local_478,0x158,0x39,
                              CASE_FFFFFFFE,0xffffffff,1,-1,-1);
          /* ST_CALLSITE[005B88BF]: CALL dword ptr [EDI + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(iVar12 + 8))(puVar7,uVar19,uVar20);
          this_00->field_1D90 = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar8 = local_8 & 0xff;
          local_10 = (UINT *)(uVar8 * 0x27 + param_2);
          if (*local_10 == 0) {
            pMVar10 = this_00->array_00BC + uVar8;
            for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
              pMVar10->field_0000 = 0;
              pMVar10 = (MMsgTy_Record_00BC_01FB *)&pMVar10->field_0x4;
            }
            *(undefined2 *)&pMVar10->field_0000 = 0;
            STField<undefined1>(pMVar10,0x2) = 0;
          }
          else {
            arg_3 = 0xffffffff;
            arg_2 = CASE_7;
            iVar18 = -1;
            iVar17 = -1;
            iVar16 = 1;
            uVar15 = 0xffffffff;
            cVar14 = CASE_FFFFFFFE;
            iVar13 = 0x1e;
            iVar12 = 0x7d;
            pSVar1 = this_00->array_00BC[uVar8].field_00B8.vtable;
            /* ST_CALLSITE[005B8997]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
            pcVar5 = LoadResourceString(*local_10,g_hINSTANCE_00807618);

            arg_1 = STPointerBoundaryCast<short *>(ccFntTy::CreateTypeSSpr
                                       ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar5,iVar12,
                                        iVar13,cVar14,uVar15,iVar16,iVar17,iVar18));
            /* ST_CALLSITE[005B89B1]: CALL dword ptr [ESI + 0x8] */
            (*pSVar1->SetImagesPtr)(&this_00->array_00BC[uVar8].field_00B8,arg_1,arg_2,arg_3);
            if ((*local_10 == this_00->array_00BC[uVar8].field_0000) && ((char)local_10[1] == '\0'))
            {
              this_00->array_00BC[uVar8].field_00B8.field_0008 =
                   this_00->array_00BC[uVar8].field_00B8.field_000C + -3;
              pUVar9 = local_10;
              pMVar10 = this_00->array_00BC + uVar8;
              memmove(pMVar10, pUVar9, 0x24); /* compiler REP MOVS byte copy */
              pMVar10 = (MMsgTy_Record_00BC_01FB *)((byte *)pMVar10 + 0x24);
              pUVar9 = pUVar9 + 0x9;
              iVar12 = 0;
              *(short *)&pMVar10->field_0000 = (short)*pUVar9;
              STField<undefined1>(pMVar10,0x2) = STField<undefined1>(pUVar9,2);
            }
            else {
              this_00->array_00BC[uVar8].field_00B8.field_0008 = 0;
              pUVar9 = local_10;
              pMVar10 = this_00->array_00BC + uVar8;
              memmove(pMVar10, pUVar9, 0x24); /* compiler REP MOVS byte copy */
              pMVar10 = (MMsgTy_Record_00BC_01FB *)((byte *)pMVar10 + 0x24);
              pUVar9 = pUVar9 + 0x9;
              *(short *)&pMVar10->field_0000 = (short)*pUVar9;
              STField<undefined1>(pMVar10,0x2) = STField<undefined1>(pUVar9,2);
            }
          }
          bVar4 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < this_00->field_009A);
      }
      bVar4 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar8 = local_8 & 0xff;
          this_00->array_00BC[uVar8].field_0027.field_0044 = this_00->field_0061;
          this_00->array_00BC[uVar8].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
          if (this_00->array_00BC[uVar8].field_0000 != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar4 = bVar4 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < this_00->field_009A);
      }
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      this_00->field_1C9C = 0x1010101;
      this_00->field_1CA0 = 0x1010101;
      this_00->field_1CA4 = 0x1010101;
      this_00->field_1CA8 = 1;
      this_00->field_0065 = 3;
      thunk_FUN_005b6730(this_00,5,'\0',-1);
      iVar12 = this_00->field_1CAB;
      if (iVar12 != 0) {
        pSVar2 = this_00->field_000C;
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar12;
        /* ST_CALLSITE[005B8B12]: CALL dword ptr [EAX + 0x18] */
        (*pSVar2->vtable->vfunc_18)((short)local_34);
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x181,0,iVar4,"%s"
                               ,"MMsgTy::SetPanel");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x181);
  }
  return 0;
}

