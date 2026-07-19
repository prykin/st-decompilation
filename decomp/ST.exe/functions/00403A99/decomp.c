
/* WARNING: Removing unreachable block (ram,0x00483caa) */

undefined4 __thiscall thunk_FUN_004838e0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lStack_60;
  undefined8 uStack_48;
  
  sVar1 = *(short *)(param_1 + 0x3a);
  uVar16 = (uint)*(short *)(param_1 + 0x34);
  uVar4 = (int)sVar1 - uVar16;
  uVar17 = (int)uVar4 >> 0x1f;
  sVar2 = *(short *)(param_1 + 0x3c);
  uVar18 = (uint)*(short *)(param_1 + 0x36);
  uVar5 = (int)sVar2 - uVar18;
  uVar19 = (int)uVar5 >> 0x1f;
  sVar3 = *(short *)(param_1 + 0x3e);
  uVar20 = (uint)*(short *)(param_1 + 0x38);
  uVar6 = (int)sVar3 - uVar20;
  uVar21 = (int)uVar6 >> 0x1f;
  uVar7 = (uint)*(short *)((int)this + 0x45);
  uVar8 = (uint)*(short *)((int)this + 0x43);
  uVar9 = (uint)*(short *)((int)this + 0x41);
  lVar22 = Library::MSVCRT::__allmul(uVar9,(int)uVar9 >> 0x1f,uVar4,uVar17);
  lVar23 = Library::MSVCRT::__allmul(uVar8,(int)uVar8 >> 0x1f,uVar5,uVar19);
  lVar24 = Library::MSVCRT::__allmul(uVar7,(int)uVar7 >> 0x1f,uVar6,uVar21);
  lVar24 = lVar24 + lVar23 + lVar22;
  iVar10 = (int)lVar24;
  uVar11 = -iVar10;
  uVar15 = -((int)((ulonglong)lVar24 >> 0x20) + (uint)(iVar10 != 0));
  iVar10 = (int)uVar16 >> 0x1f;
  if (uVar4 == 0) {
    uVar20 = uVar16;
    iVar14 = iVar10;
    if (uVar5 == 0) {
      uStack_48 = (longlong)(int)uVar18;
      if (uVar6 == 0) {
        return 0;
      }
      uVar25 = Library::MSVCRT::__alldiv(uVar11,uVar15,uVar6,uVar21);
      uVar25 = CONCAT44(-((int)((ulonglong)uVar25 >> 0x20) + (uint)((int)uVar25 != 0)),-(int)uVar25)
      ;
    }
    else {
      lStack_60 = (longlong)(int)uVar18;
      lVar24 = Library::MSVCRT::__allmul(uVar18,(int)uVar18 >> 0x1f,uVar6,uVar21);
      lVar24 = Library::MSVCRT::__allmul((uint)lVar24,(int)((ulonglong)lVar24 >> 0x20),uVar6,uVar21)
      ;
      lVar22 = Library::MSVCRT::__allmul(uVar11,uVar15,uVar5,uVar19);
      lVar23 = Library::MSVCRT::__allmul(uVar6,uVar21,uVar6,uVar21);
      lVar26 = Library::MSVCRT::__allmul(uVar5,uVar19,uVar5,uVar19);
      uStack_48 = Library::MSVCRT::__alldiv
                            ((uint)(lVar24 - lVar22),(uint)((ulonglong)(lVar24 - lVar22) >> 0x20),
                             (uint)(lVar23 + lVar26),(uint)((ulonglong)(lVar23 + lVar26) >> 0x20));
      lVar24 = Library::MSVCRT::__allmul
                         ((uint)(uStack_48 - lStack_60),
                          (int)((ulonglong)(uStack_48 - lStack_60) >> 0x20),uVar6,uVar21);
      uVar25 = Library::MSVCRT::__alldiv
                         ((uint)lVar24,(uint)((ulonglong)lVar24 >> 0x20),uVar5,uVar19);
    }
  }
  else {
    lVar23 = Library::MSVCRT::__allmul(uVar20,(int)uVar20 >> 0x1f,uVar4,uVar17);
    lVar26 = Library::MSVCRT::__allmul(uVar18,(int)uVar18 >> 0x1f,uVar4,uVar17);
    lVar24 = Library::MSVCRT::__allmul(uVar16,iVar10,uVar5,uVar19);
    lVar24 = Library::MSVCRT::__allmul
                       ((uint)(lVar24 - lVar26),(int)((ulonglong)(lVar24 - lVar26) >> 0x20),uVar5,
                        uVar19);
    lVar27 = Library::MSVCRT::__allmul(uVar11,uVar15,uVar4,uVar17);
    lVar22 = Library::MSVCRT::__allmul(uVar16,iVar10,uVar6,uVar21);
    lVar22 = Library::MSVCRT::__allmul
                       ((uint)(lVar22 - lVar23),(int)((ulonglong)(lVar22 - lVar23) >> 0x20),uVar6,
                        uVar21);
    lVar22 = (lVar27 - lVar24) - lVar22;
    lVar27 = Library::MSVCRT::__allmul(uVar6,uVar21,uVar6,uVar21);
    lVar28 = Library::MSVCRT::__allmul(uVar5,uVar19,uVar5,uVar19);
    lVar24 = Library::MSVCRT::__allmul(uVar4,uVar17,uVar4,uVar17);
    lVar24 = lVar27 + lVar28 + lVar24;
    uVar25 = Library::MSVCRT::__alldiv
                       ((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),(uint)lVar24,
                        (uint)((ulonglong)lVar24 >> 0x20));
    uVar20 = -(int)uVar25;
    iVar14 = -((int)((ulonglong)uVar25 >> 0x20) + (uint)((int)uVar25 != 0));
    iVar10 = (iVar14 - iVar10) - (uint)(uVar20 < uVar16);
    lVar24 = Library::MSVCRT::__allmul(uVar20 - uVar16,iVar10,uVar5,uVar19);
    uStack_48 = Library::MSVCRT::__alldiv
                          ((uint)(lVar24 + lVar26),(uint)((ulonglong)(lVar24 + lVar26) >> 0x20),
                           uVar4,uVar17);
    lVar24 = Library::MSVCRT::__allmul(uVar20 - uVar16,iVar10,uVar6,uVar21);
    uVar25 = Library::MSVCRT::__alldiv
                       ((uint)(lVar24 + lVar23),(uint)((ulonglong)(lVar24 + lVar23) >> 0x20),uVar4,
                        uVar17);
  }
  uVar4 = uVar7 - (uint)uVar25;
  iVar12 = (((int)uVar7 >> 0x1f) - (int)((ulonglong)uVar25 >> 0x20)) - (uint)(uVar7 < (uint)uVar25);
  iVar13 = (((int)uVar8 >> 0x1f) - uStack_48._4_4_) - (uint)(uVar8 < (uint)uStack_48);
  iVar14 = (((int)uVar9 >> 0x1f) - iVar14) - (uint)(uVar9 < uVar20);
  iVar10 = ((int)*(short *)((int)this + 0x237) << 2) / 5;
  lVar24 = Library::MSVCRT::__allmul(uVar9 - uVar20,iVar14,uVar9 - uVar20,iVar14);
  lVar22 = Library::MSVCRT::__allmul(uVar8 - (uint)uStack_48,iVar13,uVar8 - (uint)uStack_48,iVar13);
  lVar23 = Library::MSVCRT::__allmul(uVar4,iVar12,uVar4,iVar12);
  if ((lVar22 + lVar24 + lVar23 <= (longlong)(iVar10 * iVar10)) &&
     (lVar22 = (longlong)(int)(uVar8 - (int)*(short *)(param_1 + 0x43)) *
               (longlong)((int)sVar2 - (int)*(short *)(param_1 + 0x43)) +
               (longlong)(int)(uVar9 - (int)*(short *)(param_1 + 0x41)) *
               (longlong)((int)sVar1 - (int)*(short *)(param_1 + 0x41)),
     lVar24 = (longlong)(int)(uVar7 - (int)*(short *)(param_1 + 0x45)) *
              (longlong)((int)sVar3 - (int)*(short *)(param_1 + 0x45)),
     -1 < (int)((int)((ulonglong)lVar22 >> 0x20) + (int)((ulonglong)lVar24 >> 0x20) +
               (uint)CARRY4((uint)lVar22,(uint)lVar24)))) {
    return 1;
  }
  return 0;
}

