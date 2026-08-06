#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintArsenal

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::PaintArsenal(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar3;
  BITMAPINFO *pBVar4;
  int iVar9;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar10;
  InternalExceptionFrame local_70;
  uint local_2c;
  CPanelTy *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  AnonShape_00505960_269BEFC9 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_28 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pCVar2 = local_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x184,0,iVar3,"%s"
                               ,"CPanelTy::PaintArsenal");
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x184);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_28->field_0194,0,0x49,0x50,0x6f,0x37,0x3d);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0,0x4a,0x51,0x29,0x34,0x3f);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0,0x4b,0x52,0x27,0x32,0x3a);
  if (pCVar2->field_09D4 == '\x01') {
    local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)(4));
    bVar6 = 3;
  }
  else {
    local_20 = (uint)STPiece<1,3>(local_20) << 8;
    bVar6 = 4;
  }
  local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar6));
  if (bVar6 != 0) {
    local_14 = 0;
    local_2c = local_20 & 0xff;
    local_1c = 0x54;
    local_18 = (AnonShape_00505960_269BEFC9 *)(&pCVar2->field_0C11 + local_2c * 6);
    local_24 = (uint)bVar6;
    do {
      if (*(CPanelTy_field_0C11State *)local_18 == CASE_0) {
        uVar3 = 0;
      }
      else {
        uVar3 = ((uint)local_18->field_0002 * 10) / (uint)local_18->field_0004;
      }
      pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,5);
      DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x74,local_1c,'\x01',(byte *)pBVar4
            );
      local_10 = local_10 & 0xffffff00;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,uVar8 * 4 + 0x76,local_1c + 2,
                 '\x01',(byte *)pBVar4);
          bVar6 = (byte)local_10 + 1;
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar6));
          uVar8 = (uint)bVar6;
        } while (uVar8 < uVar3);
      }
      if ((byte)local_10 < 10) {
        iVar10 = 10 - (local_10 & 0xff);
        iVar7 = (local_10 & 0xff) * 4 + 0x76;
        do {
          pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar7,local_1c + 2,'\x01',
                 (byte *)pBVar4);
          iVar7 = iVar7 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      wsprintfA(&pCVar2->field_01E1,"%3d",(uint)local_18->field_0002);
      uVar3 = local_1c;
      ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0xa2,local_1c,0x15,0xc);
      ccFntTy::WrStr(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,5);
      if ((char)local_20 == '\0') {
        if ((int)uVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)(&PTR_DAT_00505cec)[local_14])();
          return;
        }
      }
      else if ((int)uVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)(&PTR_DAT_00505cdc)[local_14])();
        return;
      }
      if (*(char *)local_18 == '\0') {
        pAVar5 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
      }
      else {
        pAVar5 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
      }
      pBVar4 = FUN_0070b3a0(pAVar5,(-(uint)(*(char *)local_18 != '\0') & 0x14) + 0xb + local_14 +
                                   local_2c);
      if (pBVar4 != nullptr) {
        DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_c,local_8,'\x06',
               (byte *)pBVar4);
      }
      local_14 = local_14 + 1;
      local_18 = (AnonShape_00505960_269BEFC9 *)&local_18->field_0x6;
      local_1c = uVar3 + 0xb;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

