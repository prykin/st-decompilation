
void FUN_005578d0(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar11;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  byte *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x77,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_00558140(local_c);
    FUN_006a5e40(iVar3,0,0x7c92cc,0x79);
    return;
  }
  *(int *)(local_c + 0x20) = (int)DAT_007fb240;
  iVar3 = *(int *)(local_c + 0x20);
  iVar4 = (int)DAT_007fb242;
  *(int *)(local_c + 0x24) = iVar4;
  *(int *)(local_c + 0x28) = (iVar3 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(local_c + 0x2c) = (*(int *)(local_c + 0x24) + iVar3) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(local_c + 0x30) = (*(int *)(local_c + 0x24) + iVar3) * 0xb505 + 0x117878 >> 0x10;
  *(int *)(local_c + 0x34) = (*(int *)(local_c + 0x24) + iVar3) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    *(undefined4 *)(local_c + 0x114) = 0;
    *(undefined4 *)(local_c + 0xf8) = 0;
  }
  else {
    *(undefined4 *)(local_c + 0x114) = 1;
    puVar5 = FUN_006aac10(*(int *)(local_c + 0x24) * iVar3 * 2);
    *(undefined4 **)(local_c + 0x38) = puVar5;
    puVar5 = FUN_006aac10(*(int *)(local_c + 0x30) * *(int *)(local_c + 0x34));
    *(undefined4 **)(local_c + 0x4c) = puVar5;
    puVar5 = FUN_006aac10(*(int *)(local_c + 0x30) * *(int *)(local_c + 0x34) * 2);
    *(undefined4 **)(local_c + 0x50) = puVar5;
    puVar5 = (undefined4 *)(local_c + 0x3c);
    iVar3 = 4;
    do {
      puVar6 = FUN_006aac10(*(int *)(local_c + 0x28) * *(int *)(local_c + 0x2c));
      *puVar5 = puVar6;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar7 = FUN_006ae290((uint *)0x0,10,0x1c,10);
    *(uint **)(local_c + 0xf4) = puVar7;
    puVar7 = FUN_006ae290((uint *)0x0,10,0xc,10);
    *(uint **)(local_c + 0x110) = puVar7;
    *(uint *)(local_c + 0xf8) = (uint)DAT_00808a95;
    *(undefined1 *)(DAT_0080874d + 0xfc + local_c) = 1;
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
                iVar3 = 0;
              }
              else {
                uVar9 = uVar10 & 0xff;
                cVar1 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9);
                if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0'))
                {
                  iVar3 = -2;
                }
                else if ((cVar1 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0')) {
                  iVar3 = -1;
                }
                else if ((cVar1 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\x01')) {
                  iVar3 = 1;
                }
                else {
                  if ((cVar1 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) != '\x01'))
                  goto LAB_00557b2d;
                  iVar3 = 2;
                }
              }
              bVar11 = iVar3 < 0;
            }
            else {
              bVar11 = (&DAT_008087ea)[(uVar10 & 0xff) * 0x51] != (&DAT_008087ea)[uVar8 * 0x51];
            }
            if (bVar11) goto LAB_00557b44;
          }
          *(undefined1 *)(uVar10 + 0xfc + local_c) = 1;
        }
LAB_00557b44:
        local_8 = local_8 + 0x51;
        uVar10 = uVar10 + 1;
      } while ((int)local_8 < 0x808a71);
    }
  }
  *(undefined4 *)(local_c + 0x1c) = 0x5d4;
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

