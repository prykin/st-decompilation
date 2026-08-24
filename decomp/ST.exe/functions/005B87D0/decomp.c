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
  short *psVar8;
  int iVar9;
  uint uVar9;
  UINT *pUVar10;
  MMsgTy_Record_00BC_01FB *pMVar11;
  int iVar13;
  int iVar14;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
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
          uVar22 = 0xffffffff;
          local_8 = this_00->field_1D88;
          uVar21 = 7;
          iVar19 = -1;
          iVar18 = -1;
          iVar17 = 1;
          uVar9 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar14 = 0x39;
          iVar13 = 0x158;
          pcVar5 = LoadResourceString(param_1,g_hINSTANCE_00807618);
          puVar7 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar5,iVar13,iVar14,
                              cVar15,uVar9,iVar17,iVar18,iVar19);
          /* ST_CALLSITE[005B8913]: CALL dword ptr [EDX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(local_8 + 8))(puVar7,uVar21,uVar22);
          this_00->field_1D90 = 0;
        }
        else {
          pcVar5 = LoadResourceString(param_4,g_hINSTANCE_00807618);
          pcVar6 = LoadResourceString(param_1,g_hINSTANCE_00807618);
          /* ST_CALLSITE[005B887D]: CALL dword ptr [0x0085bde8] */
          wsprintfA(local_478,"%s\n(%s=%li)",pcVar6,pcVar5,param_3);
          iVar13 = this_00->field_1D88;
          uVar22 = 0xffffffff;
          uVar21 = 7;
          puVar7 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)g_startSystem_0081176C->field_0030,local_478,0x158,0x39,
                              CASE_FFFFFFFE,0xffffffff,1,-1,-1);
          /* ST_CALLSITE[005B88BF]: CALL dword ptr [EDI + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(iVar13 + 8))(puVar7,uVar21,uVar22);
          this_00->field_1D90 = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar9 = local_8 & 0xff;
          local_10 = (UINT *)(uVar9 * 0x27 + param_2);
          if (*local_10 == 0) {
            pMVar11 = this_00->array_00BC + uVar9;
            for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
              pMVar11->field_0000 = 0;
              pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
            }
            *(undefined2 *)&pMVar11->field_0000 = 0;
            *(undefined1 *)((int)&pMVar11->field_0000 + 2) = 0;
          }
          else {
            uVar23 = 0xffffffff;
            uVar20 = 7;
            iVar19 = -1;
            iVar18 = -1;
            iVar17 = 1;
            uVar16 = 0xffffffff;
            cVar15 = CASE_FFFFFFFE;
            iVar14 = 0x1e;
            iVar13 = 0x7d;
            pSVar1 = this_00->array_00BC[uVar9].field_00B8.vtable;
            pcVar5 = LoadResourceString(*local_10,g_hINSTANCE_00807618);
            psVar8 = (short *)ccFntTy::CreateTypeSSpr
                                        ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar5,iVar13
                                         ,iVar14,cVar15,uVar16,iVar17,iVar18,iVar19);
            /* ST_CALLSITE[005B89B1]: CALL dword ptr [ESI + 0x8] */
            (*pSVar1->SetImagesPtr)(&this_00->array_00BC[uVar9].field_00B8,psVar8,uVar20,uVar23);
            if ((*local_10 == this_00->array_00BC[uVar9].field_0000) && ((char)local_10[1] == '\0'))
            {
              this_00->array_00BC[uVar9].field_00B8.field_0008 =
                   this_00->array_00BC[uVar9].field_00B8.field_000C + -3;
              pUVar10 = local_10;
              pMVar11 = this_00->array_00BC + uVar9;
              for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
                pMVar11->field_0000 = *pUVar10;
                pUVar10 = pUVar10 + 1;
                pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
              }
              *(short *)&pMVar11->field_0000 = (short)*pUVar10;
              *(undefined1 *)((int)&pMVar11->field_0000 + 2) = STField<undefined1>(pUVar10,2);
            }
            else {
              this_00->array_00BC[uVar9].field_00B8.field_0008 = 0;
              pUVar10 = local_10;
              pMVar11 = this_00->array_00BC + uVar9;
              for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
                pMVar11->field_0000 = *pUVar10;
                pUVar10 = pUVar10 + 1;
                pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
              }
              *(short *)&pMVar11->field_0000 = (short)*pUVar10;
              *(undefined1 *)((int)&pMVar11->field_0000 + 2) = STField<undefined1>(pUVar10,2);
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
          uVar9 = local_8 & 0xff;
          this_00->array_00BC[uVar9].field_0027.field_0044 = this_00->field_0061;
          this_00->array_00BC[uVar9].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
          if (this_00->array_00BC[uVar9].field_0000 != 0) {
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
      iVar13 = this_00->field_1CAB;
      if (iVar13 != 0) {
        pSVar2 = this_00->field_000C;
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar13;
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

