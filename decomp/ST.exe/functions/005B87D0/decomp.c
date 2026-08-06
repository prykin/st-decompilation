#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetPanel */

undefined4 __thiscall
MMsgTy::SetPanel(MMsgTy *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  StartSystemTy *pSVar1;
  MMsgTy *this_00;
  byte bVar3;
  int iVar4;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  uint uVar11;
  UINT *pUVar12;
  UINT *pUVar13;
  int iVar15;
  int iVar16;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_478 [256];
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
      MMObjTy::CloseButtons((MMObjTy *)local_14);
      HidePanel(this_00,0,0,1);
      if (param_1 == 0) {
        this_00->field_1CD0 = 0;
      }
      else {
        this_00->field_1CD0 = param_1;
        if (param_3 == 0) {
          uVar23 = 0xffffffff;
          local_8 = this_00->field_1D88;
          uVar22 = 7;
          iVar19 = -1;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar17 = CASE_FFFFFFFE;
          iVar10 = 0x39;
          iVar8 = 0x158;
          puVar7 = (uint *)LoadResourceString(param_1,g_hINSTANCE_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar7,iVar8,iVar10,cVar17,uVar11,
                              iVar15,iVar16,iVar19);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(local_8 + 8))(puVar6,uVar22,uVar23);
          this_00->field_1D90 = 0;
        }
        else {
          pcVar4 = LoadResourceString(param_4,g_hINSTANCE_00807618);
          pcVar5 = LoadResourceString(param_1,g_hINSTANCE_00807618);
          wsprintfA((LPSTR)local_478,"%s\n(%s=%li)",pcVar5,pcVar4,param_3);
          iVar8 = this_00->field_1D88;
          uVar23 = 0xffffffff;
          uVar22 = 7;
          puVar6 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE,
                              0xffffffff,1,-1,-1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar8 + 8))(puVar6,uVar22,uVar23);
          this_00->field_1D90 = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          local_10 = (UINT *)(uVar11 * 0x27 + param_2);
          if (*local_10 == 0) {
            puVar6 = (undefined4 *)(&this_00->field_0xbc + uVar11 * 0x1fb);
            memset(puVar6, 0, 0x27); /* compiler bulk-zero initialization */
            puVar6 = (undefined4 *)((byte *)puVar6 + 0x24);
          }
          else {
            uVar23 = 0xffffffff;
            uVar22 = 7;
            iVar21 = -1;
            iVar20 = -1;
            iVar19 = 1;
            uVar18 = 0xffffffff;
            cVar17 = CASE_FFFFFFFE;
            iVar16 = 0x1e;
            iVar15 = 0x7d;
            iVar8 = *(int *)(&this_00->field_0x174 + uVar11 * 0x1fb);
            iVar10 = uVar11 * 0x1fb;
            puVar7 = (uint *)LoadResourceString(*local_10,g_hINSTANCE_00807618);
            puVar6 = ccFntTy::CreateTypeSSpr
                               (g_startSystem_0081176C->field_0030,puVar7,iVar15,iVar16,cVar17,
                                uVar18,iVar19,iVar20,iVar21);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(iVar8 + 8))(puVar6,uVar22,uVar23);
            if ((*local_10 == *(UINT *)(&this_00->field_0xbc + iVar10)) &&
               ((char)local_10[1] == '\0')) {
              *(int *)((int)&this_00->field_017C + iVar10) =
                   *(int *)(&this_00->field_0x180 + iVar10) + -3;
              pUVar12 = local_10;
              pUVar13 = (UINT *)(&this_00->field_0xbc + iVar10);
              memmove(pUVar13, pUVar12, 0x27); /* compiler REP MOVS byte copy */
              iVar8 = 0;
            }
            else {
              *(undefined4 *)((int)&this_00->field_017C + iVar10) = 0;
              pUVar12 = local_10;
              pUVar13 = (UINT *)(&this_00->field_0xbc + iVar10);
              memmove(pUVar13, pUVar12, 0x27); /* compiler REP MOVS byte copy */
            }
          }
          bVar3 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar11 = local_8 & 0xff;
          *(undefined4 *)((int)&this_00->field_0127 + uVar11 * 0x1fb) = this_00->field_0061;
          *(uint *)((int)&this_00->field_0123 + uVar11 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(&this_00->field_0xbc + uVar11 * 0x1fb) != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar3 = bVar3 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      this_00->field_1C9C = 0x1010101;
      this_00->field_1CA0 = 0x1010101;
      this_00->field_1CA4 = 0x1010101;
      this_00->field_1CA8 = 1;
      this_00->field_0065 = 3;
      thunk_FUN_005b6730(this_00,5,'\0',-1);
      iVar8 = this_00->field_1CAB;
      if (iVar8 != 0) {
        pSVar1 = this_00->field_000C;
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar8;
        (*pSVar1->vtable->vfunc_18)((short)local_34);
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

