#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintNewDeep */

void __thiscall CPanelTy::PaintNewDeep(CPanelTy *this)

{
  byte *pbVar1;
  ushort *puVar2;
  code *pcVar3;
  CPanelTy *pCVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  AnonShape_006B5B10_E0D06CF1 *pAVar11;
  InternalExceptionFrame local_60;
  byte *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  CPanelTy *local_10;
  uint local_c;
  uint local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_10 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pCVar4 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x226,0,iVar6,"%s"
                               ,"CPanelTy::PaintNewDeep");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x226);
    return;
  }
  local_c = local_c & 0xffffff00;
  do {
    uVar7 = local_c & 0xff;
    pbVar1 = (byte *)((int)pCVar4->field_0308 + (uVar7 - 0x60));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(char *)((int)pCVar4->field_0308 + (uVar7 - 0x60)) != -1) &&
       (199 < (uint)(pCVar4->field_0038 - *(int *)((int)pCVar4->field_0308 + uVar7 * 4 + -0x5e)))) {
      *(undefined4 *)((int)pCVar4->field_0308 + uVar7 * 4 + -0x5e) = pCVar4->field_0038;
      local_1c = (byte *)((int)pCVar4->field_0308 + (uVar7 - 0x62));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar10 = *(char *)((int)pCVar4->field_0308 + (uVar7 - 0x62)) + 1;
      *local_1c = bVar10;
      switch(bVar10) {
      case 1:
      case 3:
      case 5:
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(pCVar4->field_02A8));
          }
          else {
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(*pbVar1 + 0x19));
          }
        }
        else {
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
        }
        break;
      case 2:
      case 4:
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
LAB_00500d33:
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(pCVar4->field_02A8 + '\x05'));
          }
          else {
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(*pbVar1 + 0x14));
          }
        }
        else {
LAB_00500d40:
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(2));
        }
        break;
      default:
        if ((char)local_c == '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          cVar5 = *(char *)((int)pCVar4->field_0B1F + (byte)pCVar4->field_02A8 + 0x6e);
        }
        else {
          cVar5 = (&pCVar4->field_0xc7b)[*pbVar1];
        }
        if (cVar5 == '\0') {
          if (DAT_0080874e != '\x03') goto LAB_00500d40;
          if ((char)local_c == '\0') goto LAB_00500d33;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(*pbVar1 + 0x14));
        }
        else if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(pCVar4->field_02A8));
          }
          else {
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(*pbVar1 + 0x19));
          }
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = (uint)local_8._1_3_ << 8;
        }
      }
      if (bVar10 < 7) {
        if (DAT_0080874e == '\x03') {
          if ((char)local_c == '\0') {
            uVar7 = (uint)(byte)pCVar4->field_02A8;
            pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar4->field_02A2,
                                          local_8 & 0xff);
            pAVar11 = pCVar4->field_018C;
            iVar6 = (5 - uVar7) * 0xb;
          }
          else {
            uVar7 = (uint)*pbVar1;
            pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar4->field_02A2,
                                          local_8 & 0xff);
            pAVar11 = (AnonShape_006B5B10_E0D06CF1 *)pCVar4->field_0194;
            iVar6 = uVar7 * 0xb + 0x87;
          }
          DibPut(pAVar11,iVar6,uVar7 * 0xb + 0xb,'\x06',pbVar8);
          bVar10 = (-((char)local_c != '\0') & 2U) + 3;
          local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar10));
          if (bVar10 < 0xb) {
            uVar7 = (uint)bVar10;
            puVar2 = pCVar4->field_0148[uVar7];
joined_r0x00500e7c:
            if (-1 < (int)puVar2) {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,(uint)puVar2,0xffffffff,
                         (&pCVar4->field_003C)[uVar7],(&pCVar4->field_0094)[uVar7]);
            }
          }
        }
        else {
          if ((char)local_c == '\0') {
            pAVar11 = (AnonShape_006B5B10_E0D06CF1 *)pCVar4->field_0188;
          }
          else {
            pAVar11 = (AnonShape_006B5B10_E0D06CF1 *)pCVar4->field_0198;
          }
          pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar4->field_02A2,
                                        local_8 & 0xff);
          DibPut(pAVar11,7,(uint)*pbVar1 * 0x1d + 6,'\x01',pbVar8);
          bVar10 = (-((char)local_c != '\0') & 4U) + 2;
          local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar10));
          if (bVar10 < 0xb) {
            uVar7 = (uint)bVar10;
            puVar2 = pCVar4->field_0148[uVar7];
            goto joined_r0x00500e7c;
          }
        }
      }
      if (5 < *local_1c) {
        *pbVar1 = 0xff;
      }
    }
    bVar10 = (char)local_c + 1;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar10));
    if (1 < bVar10) {
      g_currentExceptionFrame = local_60.previous;
      return;
    }
  } while( true );
}

