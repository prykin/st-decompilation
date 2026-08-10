#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0048268f) */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetExplosionInfo */

undefined4 __thiscall
STBoatC::GetExplosionInfo
          (STBoatC *this,uint param_1,short *param_2,short *param_3,short *param_4,uint *param_5)

{
  longlong lVar2;
  STBoatC *pSVar3;
  int local_EAX_54;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong local_EDXEAX_291;
  longlong lVar11;
  longlong local_EDXEAX_341;
  longlong local_EDXEAX_464;
  longlong local_EDXEAX_484;
  longlong local_EDXEAX_525;
  longlong lVar12;
  InternalExceptionFrame local_80;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  ushort local_30;
  uint local_2c;
  uint local_28;
  STBoatC *local_24;
  longlong local_20;
  uint local_18;
  float local_14 [2];
  float local_c;
  float local_8;

  local_28 = param_1 >> 0x10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT44(param_1,(undefined4)local_20) & 0xffffffffffff;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_24 = this;
  local_EAX_54 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  pSVar3 = local_24;
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3d5f,0,local_EAX_54,
                               "%s","STBoatC::GetExplosionInfo");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_54,0,"E:\\__titans\\wlad\\To_boat.cpp",0x3d60);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar10 = STPiece<4,4>(local_20);
  if ((local_20 < 0) || ((int)((byte)local_24->field_0281 - 1) < STPiece<4,4>(local_20))) {
    RaiseInternalException
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d4f);
  }
  iVar3 = DArrayGetElement((DArrayTy *)(&pSVar3->field_0282)[iVar10],local_28,&local_34);
  if (iVar3 == -4) {
    RaiseInternalException
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d50);
  }
  puVar4 = thunk_FUN_0041dc40(&local_3c,(short)local_34,local_30,pSVar3->field_006C);
  uVar9 = *puVar4;
  local_30 = *(ushort *)(puVar4 + 1);
  *param_2 = pSVar3->field_0041 + (short)uVar9;
  STPiece<2,2>(local_34) = (short)((uint)uVar9 >> 0x10);
  *param_3 = pSVar3->field_0043 - STPiece<2,2>(local_34);
  *param_4 = pSVar3->field_0045 + local_30;
  local_34 = uVar9;
  ST3DSMAPContext::sub_006DD530(pSVar3->field_0211,local_14,&local_c,&local_8);
  local_EDXEAX_291 = Library::MSVCRT::__ftol();
  local_3c = (uint)(short)local_EDXEAX_291;
  local_38 = (int)local_3c >> 0x1f;
  lVar11 = Library::MSVCRT::__ftol();
  uVar5 = (uint)(short)lVar11;
  local_28 = (int)uVar5 >> 0x1f;
  local_2c = uVar5;
  local_EDXEAX_341 = Library::MSVCRT::__ftol();
  uVar6 = (uint)(short)local_EDXEAX_341;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT44((int)uVar6 >> 0x1f,(undefined4)local_20);
  uVar7 = (uint)pSVar3->field_0043;
  iVar11 = (((int)uVar7 >> 0x1f) - local_28) - (uint)(uVar7 < uVar5);
  uVar8 = (uint)pSVar3->field_0041;
  local_18 = uVar8 - local_3c;
  local_14[0] = (float)((((int)uVar8 >> 0x1f) - local_38) - (uint)(uVar8 < local_3c));
  uVar8 = (uint)*param_4;
  iVar10 = (((int)uVar8 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar8 < uVar6);
  local_20 = Library::MSVCRT::__allmul(uVar8 - uVar6,iVar10,uVar8 - uVar6,iVar10);
  uVar6 = (uint)*param_2;
  uVar8 = uVar6 - local_3c;
  local_38 = (((int)uVar6 >> 0x1f) - local_38) - (uint)(uVar6 < local_3c);
  uVar6 = (uint)*param_3;
  iVar10 = (((int)uVar6 >> 0x1f) - local_28) - (uint)(uVar6 < local_2c);
  local_EDXEAX_464 = Library::MSVCRT::__allmul(uVar6 - local_2c,iVar10,uVar6 - local_2c,iVar10);
  local_c = (float)((ulonglong)local_EDXEAX_464 >> 0x20);
  local_28 = (uint)local_EDXEAX_464;
  local_EDXEAX_484 = Library::MSVCRT::__allmul(uVar8,local_38,uVar8,local_38);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  lVar2 = local_EDXEAX_484 + CONCAT44(local_c,local_28) + local_20;
  local_28 = (uint)lVar2;
  local_c = (float)((ulonglong)lVar2 >> 0x20);
  local_EDXEAX_525 = Library::MSVCRT::__allmul(local_18,(int)local_14[0],local_18,(int)local_14[0]);
  local_3c = (uint)local_EDXEAX_525;
  lVar12 = Library::MSVCRT::__allmul(uVar7 - uVar5,iVar11,uVar7 - uVar5,iVar11);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (lVar12 + CONCAT44((int)((ulonglong)local_EDXEAX_525 >> 0x20),local_3c) + local_20 <=
      CONCAT44(local_c,local_28)) {
    *param_5 = (uint)((short)local_30 + 0x46 < 0x15);
    *param_5 = 1;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  *param_5 = 0;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

