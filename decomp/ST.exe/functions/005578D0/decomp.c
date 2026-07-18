
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
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  VisibleClassTy *pVVar11;
  bool bVar12;
  undefined4 local_50;
  undefined4 local_4c [16];
  VisibleClassTy *local_c;
  byte *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_c = this;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pVVar3 = local_c;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x77,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_00558140((int)local_c);
    FUN_006a5e40(iVar4,0,0x7c92cc,0x79);
    return;
  }
  *(int *)(local_c + 0x20) = (int)DAT_007fb240;
  iVar4 = *(int *)(local_c + 0x20);
  iVar5 = (int)DAT_007fb242;
  *(int *)(local_c + 0x24) = iVar5;
  *(int *)(local_c + 0x28) = (iVar4 + iVar5) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(local_c + 0x2c) = (*(int *)(local_c + 0x24) + iVar4) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(local_c + 0x30) = (*(int *)(local_c + 0x24) + iVar4) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(local_c + 0x34) = (*(int *)(local_c + 0x24) + iVar4) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    *(undefined4 *)(local_c + 0x114) = 0;
    *(undefined4 *)(local_c + 0xf8) = 0;
  }
  else {
    *(undefined4 *)(local_c + 0x114) = 1;
    puVar6 = FUN_006aac10(*(int *)(local_c + 0x24) * iVar4 * 2);
    *(undefined4 **)(pVVar3 + 0x38) = puVar6;
    puVar6 = FUN_006aac10(*(int *)(pVVar3 + 0x30) * *(int *)(pVVar3 + 0x34));
    *(undefined4 **)(pVVar3 + 0x4c) = puVar6;
    puVar6 = FUN_006aac10(*(int *)(pVVar3 + 0x30) * *(int *)(pVVar3 + 0x34) * 2);
    *(undefined4 **)(pVVar3 + 0x50) = puVar6;
    pVVar11 = pVVar3 + 0x3c;
    iVar4 = 4;
    do {
      puVar6 = FUN_006aac10(*(int *)(pVVar3 + 0x28) * *(int *)(pVVar3 + 0x2c));
      *(undefined4 **)pVVar11 = puVar6;
      pVVar11 = pVVar11 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar7 = FUN_006ae290((uint *)0x0,10,0x1c,10);
    *(uint **)(pVVar3 + 0xf4) = puVar7;
    puVar7 = FUN_006ae290((uint *)0x0,10,0xc,10);
    *(uint **)(pVVar3 + 0x110) = puVar7;
    *(uint *)(pVVar3 + 0xf8) = (uint)DAT_00808a95;
    pVVar3[DAT_0080874d + 0xfc] = (VisibleClassTy)0x1;
    if (DAT_00808a94 != '\0') {
      uVar10 = 0;
      local_8 = &DAT_008087e9;
      do {
        if ((DAT_00802a38 == 0) || (*local_8 < 8)) {
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
        local_8 = local_8 + 0x51;
        uVar10 = uVar10 + 1;
      } while ((int)local_8 < 0x808a71);
    }
  }
  *(undefined4 *)(pVVar3 + 0x1c) = 0x5d4;
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

