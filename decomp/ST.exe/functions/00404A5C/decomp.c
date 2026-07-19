
void __thiscall VisibleClassTy::InitData(VisibleClassTy *this)

{
  char cVar1;
  code *pcVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  VisibleClassTy *pVVar11;
  bool bVar12;
  InternalExceptionFrame IStack_50;
  VisibleClassTy *pVStack_c;
  byte *pbStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pVStack_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pVVar3 = pVStack_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x77,0,iVar4,&DAT_007a4ccc,
                               s_VisibleClassTy__InitData_007c92f0);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_00558140((int)pVStack_c);
    RaiseInternalException(iVar4,0,s_E____titans_grig_visible_cpp_007c92cc,0x79);
    return;
  }
  *(int *)(pVStack_c + 0x20) = (int)DAT_007fb240;
  iVar4 = *(int *)(pVStack_c + 0x20);
  iVar5 = (int)DAT_007fb242;
  *(int *)(pVStack_c + 0x24) = iVar5;
  *(int *)(pVStack_c + 0x28) = (iVar4 + iVar5) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(pVStack_c + 0x2c) = (*(int *)(pVStack_c + 0x24) + iVar4) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(pVStack_c + 0x30) = (*(int *)(pVStack_c + 0x24) + iVar4) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(pVStack_c + 0x34) = (*(int *)(pVStack_c + 0x24) + iVar4) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    *(undefined4 *)(pVStack_c + 0x114) = 0;
    *(undefined4 *)(pVStack_c + 0xf8) = 0;
  }
  else {
    *(undefined4 *)(pVStack_c + 0x114) = 1;
    puVar6 = Library::DKW::LIB::FUN_006aac10(*(int *)(pVStack_c + 0x24) * iVar4 * 2);
    *(undefined4 **)(pVVar3 + 0x38) = puVar6;
    puVar6 = Library::DKW::LIB::FUN_006aac10(*(int *)(pVVar3 + 0x30) * *(int *)(pVVar3 + 0x34));
    *(undefined4 **)(pVVar3 + 0x4c) = puVar6;
    puVar6 = Library::DKW::LIB::FUN_006aac10(*(int *)(pVVar3 + 0x30) * *(int *)(pVVar3 + 0x34) * 2);
    *(undefined4 **)(pVVar3 + 0x50) = puVar6;
    pVVar11 = pVVar3 + 0x3c;
    iVar4 = 4;
    do {
      puVar6 = Library::DKW::LIB::FUN_006aac10(*(int *)(pVVar3 + 0x28) * *(int *)(pVVar3 + 0x2c));
      *(undefined4 **)pVVar11 = puVar6;
      pVVar11 = pVVar11 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1c,10);
    *(uint **)(pVVar3 + 0xf4) = puVar7;
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    *(uint **)(pVVar3 + 0x110) = puVar7;
    *(uint *)(pVVar3 + 0xf8) = (uint)DAT_00808a95;
    pVVar3[DAT_0080874d + 0xfc] = (VisibleClassTy)0x1;
    if (DAT_00808a94 != '\0') {
      uVar10 = 0;
      pbStack_8 = &DAT_008087e9;
      do {
        if ((DAT_00802a38 == 0) || (*pbStack_8 < 8)) {
          uVar8 = (uint)DAT_0080874d;
          if (uVar10 != uVar8) {
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == (byte)uVar10) {
LAB_00557b2d:
                iVar4 = 0;
              }
              else {
                uVar9 = uVar10 & 0xff;
                cVar1 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9);
                if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0'))
                {
                  iVar4 = -2;
                }
                else if ((cVar1 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0')) {
                  iVar4 = -1;
                }
                else if ((cVar1 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\x01')) {
                  iVar4 = 1;
                }
                else {
                  if ((cVar1 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) != '\x01'))
                  goto LAB_00557b2d;
                  iVar4 = 2;
                }
              }
              bVar12 = iVar4 < 0;
            }
            else {
              bVar12 = (&DAT_008087ea)[(uVar10 & 0xff) * 0x51] != (&DAT_008087ea)[uVar8 * 0x51];
            }
            if (bVar12) goto LAB_00557b44;
          }
          pVVar3[uVar10 + 0xfc] = (VisibleClassTy)0x1;
        }
LAB_00557b44:
        pbStack_8 = pbStack_8 + 0x51;
        uVar10 = uVar10 + 1;
      } while ((int)pbStack_8 < 0x808a71);
    }
  }
  *(undefined4 *)(pVVar3 + 0x1c) = 0x5d4;
  g_currentExceptionFrame = IStack_50.previous;
  return;
}

