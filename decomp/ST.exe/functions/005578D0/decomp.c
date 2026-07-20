
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::InitData */

void __thiscall VisibleClassTy::InitData(VisibleClassTy *this)

{
  char cVar1;
  code *pcVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  InternalExceptionFrame local_50;
  VisibleClassTy *local_c;
  byte *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pVVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x77,0,iVar4,&DAT_007a4ccc,
                               s_VisibleClassTy__InitData_007c92f0);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_00558140((AnonShape_00558140_7CF35A3F *)local_c);
    RaiseInternalException(iVar4,0,s_E____titans_grig_visible_cpp_007c92cc,0x79);
    return;
  }
  local_c->field_0020 = (int)SHORT_007fb240;
  iVar4 = local_c->field_0020;
  iVar5 = (int)SHORT_007fb242;
  local_c->field_0024 = iVar5;
  local_c->field_0028 = (iVar4 + iVar5) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_002C = (local_c->field_0024 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0030 = (local_c->field_0024 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0034 = (local_c->field_0024 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    local_c->field_0114 = 0;
    local_c->field_00F8 = 0;
  }
  else {
    local_c->field_0114 = 1;
    puVar6 = Library::DKW::LIB::FUN_006aac10(local_c->field_0024 * iVar4 * 2);
    pVVar3->field_0038 = puVar6;
    puVar6 = Library::DKW::LIB::FUN_006aac10(pVVar3->field_0030 * pVVar3->field_0034);
    pVVar3->field_004C = puVar6;
    puVar6 = Library::DKW::LIB::FUN_006aac10(pVVar3->field_0030 * pVVar3->field_0034 * 2);
    pVVar3->field_0050 = puVar6;
    puVar6 = &pVVar3->field_003C;
    iVar4 = 4;
    do {
      puVar7 = Library::DKW::LIB::FUN_006aac10(pVVar3->field_0028 * pVVar3->field_002C);
      *puVar6 = puVar7;
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1c,10);
    pVVar3->field_00F4 = puVar8;
    puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    pVVar3->field_0110 = puVar8;
    pVVar3->field_00F8 = (uint)DAT_00808a95;
    *(undefined1 *)((int)&pVVar3->field_00FC + (uint)DAT_0080874d) = 1;
    if (DAT_00808a94 != '\0') {
      uVar11 = 0;
      local_8 = &DAT_008087e9;
      do {
        if ((PTR_00802a38 == (STPlaySystemC *)0x0) || (*local_8 < 8)) {
          uVar9 = (uint)DAT_0080874d;
          if (uVar11 != uVar9) {
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == (byte)uVar11) {
LAB_00557b2d:
                iVar4 = 0;
              }
              else {
                uVar10 = uVar11 & 0xff;
                cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10);
                if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0'))
                {
                  iVar4 = -2;
                }
                else if ((cVar1 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                  iVar4 = -1;
                }
                else if ((cVar1 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\x01')) {
                  iVar4 = 1;
                }
                else {
                  if ((cVar1 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) != '\x01'))
                  goto LAB_00557b2d;
                  iVar4 = 2;
                }
              }
              bVar12 = iVar4 < 0;
            }
            else {
              bVar12 = (&DAT_008087ea)[(uVar11 & 0xff) * 0x51] != (&DAT_008087ea)[uVar9 * 0x51];
            }
            if (bVar12) goto LAB_00557b44;
          }
          *(undefined1 *)((int)&pVVar3->field_00FC + uVar11) = 1;
        }
LAB_00557b44:
        local_8 = local_8 + 0x51;
        uVar11 = uVar11 + 1;
      } while ((int)local_8 < 0x808a71);
    }
  }
  pVVar3->field_001C = 0x5d4;
  g_currentExceptionFrame = local_50.previous;
  return;
}

