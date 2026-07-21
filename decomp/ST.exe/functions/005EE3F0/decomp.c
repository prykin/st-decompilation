
/* WARNING: Removing unreachable block (ram,0x005ee599) */

undefined4 __thiscall
FUN_005ee3f0(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float local_10;
  uint local_c;
  float local_8;

  iVar4 = (int)param_1 + -1;
  if ((-1 < iVar4) && (iVar4 < 5)) {
    *param_2 = *(short *)((int)this + iVar4 * 6 + 0x2ea);
    *param_3 = *(short *)((int)this + iVar4 * 6 + 0x2ec);
    *param_4 = *(short *)((int)this + (iVar4 * 3 + 0x177) * 2);
    FUN_006dd530(*(void **)((int)this + 0x211),&param_1,&local_8,&local_10);
    lVar14 = Library::MSVCRT::__ftol();
    uVar5 = (uint)(short)lVar14;
    lVar14 = Library::MSVCRT::__ftol();
    uVar6 = (uint)(short)lVar14;
    local_8 = (float)((int)uVar6 >> 0x1f);
    local_c = uVar6;
    lVar14 = Library::MSVCRT::__ftol();
    uVar7 = (uint)(short)lVar14;
    uVar1 = *(uint *)((int)this + 0x27f);
    uVar2 = *(uint *)((int)this + 0x27b);
    iVar4 = (((int)uVar1 >> 0x1f) - ((int)uVar7 >> 0x1f)) - (uint)(uVar1 < uVar7);
    uVar3 = *(uint *)((int)this + 0x277);
    iVar12 = (((int)uVar2 >> 0x1f) - (int)local_8) - (uint)(uVar2 < uVar6);
    iVar10 = (((int)uVar3 >> 0x1f) - ((int)uVar5 >> 0x1f)) - (uint)(uVar3 < uVar5);
    uVar8 = (uint)*param_2;
    local_10 = (float)((((int)uVar8 >> 0x1f) - ((int)uVar5 >> 0x1f)) - (uint)(uVar8 < uVar5));
    uVar9 = (uint)*param_3;
    uVar13 = uVar9 - local_c;
    local_8 = (float)((((int)uVar9 >> 0x1f) - (int)local_8) - (uint)(uVar9 < local_c));
    uVar9 = (uint)*param_4;
    iVar11 = (((int)uVar9 >> 0x1f) - ((int)uVar7 >> 0x1f)) - (uint)(uVar9 < uVar7);
    lVar15 = Library::MSVCRT::__allmul(uVar9 - uVar7,iVar11,uVar9 - uVar7,iVar11);
    lVar16 = Library::MSVCRT::__allmul(uVar13,(int)local_8,uVar13,(int)local_8);
    lVar14 = Library::MSVCRT::__allmul(uVar8 - uVar5,(int)local_10,uVar8 - uVar5,(int)local_10);
    lVar14 = lVar14 + lVar16 + lVar15;
    param_2 = (short *)lVar14;
    lVar15 = Library::MSVCRT::__allmul(uVar3 - uVar5,iVar10,uVar3 - uVar5,iVar10);
    lVar16 = Library::MSVCRT::__allmul(uVar2 - uVar6,iVar12,uVar2 - uVar6,iVar12);
    lVar17 = Library::MSVCRT::__allmul(uVar1 - uVar7,iVar4,uVar1 - uVar7,iVar4);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if (lVar16 + lVar15 + lVar17 <= CONCAT44((int)((ulonglong)lVar14 >> 0x20),param_2)) {
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

