
void __fastcall thunk_FUN_0068ec70(int param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar10;
  bool bVar11;
  undefined4 uStack_88;
  undefined4 auStack_84 [16];
  uint auStack_44 [2];
  char cStack_3c;
  char cStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  if ((*(int *)(param_1 + 0x91) == 0) ||
     ((uint)(*(int *)(param_1 + 0x95) + *(int *)(param_1 + 0x91)) <= *(uint *)(param_1 + 300))) {
    *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)(param_1 + 300);
    uStack_88 = DAT_00858df8;
    DAT_00858df8 = &uStack_88;
    iStack_10 = param_1;
    iVar7 = __setjmp3(auStack_84,0,unaff_EDI,unaff_ESI);
    iVar8 = iStack_10;
    if (iVar7 == 0) {
      uStack_8 = 0;
      iVar7 = *(int *)(iStack_10 + 0xbd);
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar11 = *(int *)(iVar7 + 0xc) != 0;
        do {
          uVar4 = uStack_37;
          cVar6 = cStack_3b;
          if (bVar11) {
            iVar7 = *(int *)(iVar7 + 8) * uStack_8 + *(int *)(iVar7 + 0x1c);
          }
          else {
            iVar7 = 0;
          }
          cStack_3b = (char)iVar7;
          cVar3 = cStack_3b;
          uStack_37 = (undefined1)((uint)iVar7 >> 0x18);
          uVar5 = uStack_37;
          uStack_37 = uVar4;
          switch(*(undefined4 *)(iVar7 + 0x2c)) {
          case 0:
            if ((*(int *)(iVar7 + 0x12) == 0) ||
               ((uint)(*(int *)(iVar7 + 0x3a) + *(int *)(iVar7 + 0x12)) <= *(uint *)(iVar8 + 300)))
            {
              iVar9 = *(int *)(iVar8 + 0xa5);
              uStack_c = 0;
              if (0 < *(int *)(iVar9 + 0xc)) {
                bVar11 = *(int *)(iVar9 + 0xc) != 0;
                cStack_3b = cVar6;
                do {
                  if (bVar11) {
                    iVar9 = *(int *)(iVar9 + 8) * uStack_c + *(int *)(iVar9 + 0x1c);
                  }
                  else {
                    iVar9 = 0;
                  }
                  if (*(int *)(iVar9 + 4) != 0) {
                    puVar10 = auStack_44;
                    for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *puVar10 = 0;
                      puVar10 = puVar10 + 1;
                    }
                    auStack_44[1] = *(undefined4 *)(iVar8 + 300);
                    auStack_44[0] = 0x68;
                    uStack_3a = (undefined2)iVar7;
                    uStack_38 = (undefined1)((uint)iVar7 >> 0x10);
                    cStack_3b = '\x01';
                    uStack_37 = uVar5;
                    thunk_FUN_00662240(auStack_44);
                    if ('\0' < cStack_3c) {
                      *(undefined4 *)(iVar7 + 0x2c) = 1;
                      *(uint *)(iVar7 + 0x34) = uStack_c;
                      *(undefined2 *)(iVar7 + 0x38) = uStack_36;
                      *(undefined4 *)(iVar7 + 0x3a) = *(undefined4 *)(iVar8 + 300);
                      cVar6 = cStack_3b;
                      break;
                    }
                  }
                  iVar9 = *(int *)(iVar8 + 0xa5);
                  uStack_c = uStack_c + 1;
                  bVar11 = uStack_c < *(uint *)(iVar9 + 0xc);
                  cVar6 = cStack_3b;
                } while ((int)uStack_c < (int)*(uint *)(iVar9 + 0xc));
              }
            }
            else {
              *(undefined4 *)(iVar7 + 0x2c) = 3;
            }
            break;
          case 1:
            if ((*(int *)(iVar7 + 0xe) == 0) ||
               ((uint)(*(int *)(iVar7 + 0x3a) + *(int *)(iVar7 + 0xe)) <= *(uint *)(iVar8 + 300))) {
              iVar9 = *(int *)(iVar8 + 0xa5);
              if (*(uint *)(iVar7 + 0x34) < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * *(uint *)(iVar7 + 0x34) + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
                puVar10 = auStack_44;
                for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                auStack_44[1] = *(undefined4 *)(iVar8 + 300);
                auStack_44[0] = 0x69;
                uStack_3a = (undefined2)((uint)iVar7 >> 8);
                uStack_38 = uVar5;
                thunk_FUN_00662240(auStack_44);
                if ('\0' < cStack_3c) {
                  *(undefined4 *)(iVar7 + 0x2c) = 2;
                }
                cVar6 = cStack_3b;
                if (cStack_3c < '\0') {
                  *(undefined4 *)(iVar7 + 0x2c) = 3;
                }
                break;
              }
            }
            *(undefined4 *)(iVar7 + 0x2c) = 3;
            break;
          case 2:
          case 3:
            uVar1 = *(uint *)(iVar7 + 0x30);
            cStack_3b = cVar6;
            if (-1 < (int)uVar1) {
              iVar9 = *(int *)(iVar8 + 0xa5);
              if (uVar1 < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * uVar1 + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
                puVar10 = auStack_44;
                for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                auStack_44[1] = *(undefined4 *)(iVar8 + 300);
                auStack_44[0] = 0x6b;
                cStack_3b = (char)((uint)iVar7 >> 8);
                uStack_3a = (undefined2)((uint)iVar7 >> 0x10);
                cStack_3c = cVar3;
                thunk_FUN_00662240(auStack_44);
              }
            }
            FUN_006b0c70(*(int *)(iVar8 + 0xbd),uStack_8);
            uStack_8 = uStack_8 - 1;
            cVar6 = cStack_3b;
          }
          cStack_3b = cVar6;
          iVar7 = *(int *)(iVar8 + 0xbd);
          uStack_8 = uStack_8 + 1;
          bVar11 = uStack_8 < *(uint *)(iVar7 + 0xc);
        } while ((int)uStack_8 < (int)*(uint *)(iVar7 + 0xc));
      }
      DAT_00858df8 = (undefined4 *)uStack_88;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_88;
    iVar8 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x1ff,0,iVar7,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7d56e0,0x200);
  }
  return;
}

