#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x005ee599) */

undefined4 __thiscall
FUN_005ee3f0(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong local_EDXEAX_112;
  longlong local_EDXEAX_136;
  longlong local_EDXEAX_162;
  longlong lVar15;
  longlong lVar16;
  longlong lVar14;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float local_10;
  uint local_c;
  float local_8;

  iVar5 = (int)param_1 + -1;
  if ((-1 < iVar5) && (iVar5 < 5)) {
    *param_2 = *(short *)((int)this + iVar5 * 6 + 0x2ea);
    *param_3 = *(short *)((int)this + iVar5 * 6 + 0x2ec);
    *param_4 = *(short *)((int)this + (iVar5 * 3 + 0x177) * 2);
    ST3DSMAPContext::sub_006DD530
              (STField<ST3DSMAPContext *>(this,0x211),&param_1,&local_8,&local_10);
    local_EDXEAX_112 = Library::MSVCRT::__ftol();
    uVar6 = (uint)(short)local_EDXEAX_112;
    local_EDXEAX_136 = Library::MSVCRT::__ftol();
    uVar7 = (uint)(short)local_EDXEAX_136;
    local_8 = (float)((int)uVar7 >> 0x1f);
    local_c = uVar7;
    local_EDXEAX_162 = Library::MSVCRT::__ftol();
    uVar8 = (uint)(short)local_EDXEAX_162;
    uVar1 = STField<uint>(this,0x27f);
    uVar2 = STField<uint>(this,0x27b);
    iVar5 = (((int)uVar1 >> 0x1f) - ((int)uVar8 >> 0x1f)) - (uint)(uVar1 < uVar8);
    uVar3 = STField<uint>(this,0x277);
    iVar13 = (((int)uVar2 >> 0x1f) - (int)local_8) - (uint)(uVar2 < uVar7);
    iVar11 = (((int)uVar3 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar3 < uVar6);
    uVar9 = (uint)*param_2;
    local_10 = (float)((((int)uVar9 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar9 < uVar6));
    uVar10 = (uint)*param_3;
    uVar14 = uVar10 - local_c;
    local_8 = (float)((((int)uVar10 >> 0x1f) - (int)local_8) - (uint)(uVar10 < local_c));
    uVar10 = (uint)*param_4;
    iVar12 = (((int)uVar10 >> 0x1f) - ((int)uVar8 >> 0x1f)) - (uint)(uVar10 < uVar8);
    lVar15 = Library::MSVCRT::__allmul(uVar10 - uVar8,iVar12,uVar10 - uVar8,iVar12);
    lVar16 = Library::MSVCRT::__allmul(uVar14,(int)local_8,uVar14,(int)local_8);
    lVar14 = Library::MSVCRT::__allmul(uVar9 - uVar6,(int)local_10,uVar9 - uVar6,(int)local_10);
    lVar4 = lVar14 + lVar16 + lVar15;
    param_2 = (short *)lVar4;
    lVar17 = Library::MSVCRT::__allmul(uVar3 - uVar6,iVar11,uVar3 - uVar6,iVar11);
    lVar18 = Library::MSVCRT::__allmul(uVar2 - uVar7,iVar13,uVar2 - uVar7,iVar13);
    lVar19 = Library::MSVCRT::__allmul(uVar1 - uVar8,iVar5,uVar1 - uVar8,iVar5);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if (lVar18 + lVar17 + lVar19 <= CONCAT44((int)((ulonglong)lVar4 >> 0x20),param_2)) {
      *param_5 = 1;
      return 0;
    }
    *param_5 = 0;
    return 0;
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  return 0xffffffff;
}

