
void __thiscall AiTactClassTy::ExecClaim(AiTactClassTy *this,int param_1)

{
  AiFltClassTy *this_00;
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  AiTactClassTy *pAVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar11;
  bool bVar12;
  undefined4 uStack_88;
  undefined4 auStack_84 [16];
  uint auStack_44 [2];
  char cStack_3c;
  char cStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  AiTactClassTy *pAStack_10;
  uint uStack_c;
  uint uStack_8;
  
  if ((*(int *)(this + 0x91) == 0) ||
     ((uint)(*(int *)(this + 0x95) + *(int *)(this + 0x91)) <= *(uint *)(this + 300))) {
    *(undefined4 *)(this + 0x95) = *(undefined4 *)(this + 300);
    uStack_88 = DAT_00858df8;
    DAT_00858df8 = &uStack_88;
    pAStack_10 = this;
    iVar8 = __setjmp3(auStack_84,0,unaff_EDI,unaff_ESI);
    pAVar6 = pAStack_10;
    if (iVar8 == 0) {
      uStack_8 = 0;
      iVar8 = *(int *)(pAStack_10 + 0xbd);
      if (0 < *(int *)(iVar8 + 0xc)) {
        bVar12 = *(int *)(iVar8 + 0xc) != 0;
        do {
          uVar4 = uStack_37;
          cVar7 = cStack_3b;
          if (bVar12) {
            iVar8 = *(int *)(iVar8 + 8) * uStack_8 + *(int *)(iVar8 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          cStack_3b = (char)iVar8;
          cVar3 = cStack_3b;
          uStack_37 = (undefined1)((uint)iVar8 >> 0x18);
          uVar5 = uStack_37;
          uStack_37 = uVar4;
          switch(*(undefined4 *)(iVar8 + 0x2c)) {
          case 0:
            if ((*(int *)(iVar8 + 0x12) == 0) ||
               ((uint)(*(int *)(iVar8 + 0x3a) + *(int *)(iVar8 + 0x12)) <= *(uint *)(pAVar6 + 300)))
            {
              iVar9 = *(int *)(pAVar6 + 0xa5);
              uStack_c = 0;
              if (0 < *(int *)(iVar9 + 0xc)) {
                bVar12 = *(int *)(iVar9 + 0xc) != 0;
                cStack_3b = cVar7;
                do {
                  if (bVar12) {
                    iVar9 = *(int *)(iVar9 + 8) * uStack_c + *(int *)(iVar9 + 0x1c);
                  }
                  else {
                    iVar9 = 0;
                  }
                  this_00 = *(AiFltClassTy **)(iVar9 + 4);
                  if (this_00 != (AiFltClassTy *)0x0) {
                    puVar11 = auStack_44;
                    for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *puVar11 = 0;
                      puVar11 = puVar11 + 1;
                    }
                    auStack_44[1] = *(uint *)(pAVar6 + 300);
                    auStack_44[0] = 0x68;
                    uStack_3a = (undefined2)iVar8;
                    uStack_38 = (undefined1)((uint)iVar8 >> 0x10);
                    cStack_3b = '\x01';
                    uStack_37 = uVar5;
                    AiFltClassTy::GetAiMess(this_00,auStack_44);
                    if ('\0' < cStack_3c) {
                      *(undefined4 *)(iVar8 + 0x2c) = 1;
                      *(uint *)(iVar8 + 0x34) = uStack_c;
                      *(undefined2 *)(iVar8 + 0x38) = uStack_36;
                      *(undefined4 *)(iVar8 + 0x3a) = *(undefined4 *)(pAVar6 + 300);
                      cVar7 = cStack_3b;
                      break;
                    }
                  }
                  iVar9 = *(int *)(pAVar6 + 0xa5);
                  uStack_c = uStack_c + 1;
                  bVar12 = uStack_c < *(uint *)(iVar9 + 0xc);
                  cVar7 = cStack_3b;
                } while ((int)uStack_c < (int)*(uint *)(iVar9 + 0xc));
              }
            }
            else {
              *(undefined4 *)(iVar8 + 0x2c) = 3;
            }
            break;
          case 1:
            if ((*(int *)(iVar8 + 0xe) == 0) ||
               ((uint)(*(int *)(iVar8 + 0x3a) + *(int *)(iVar8 + 0xe)) <= *(uint *)(pAVar6 + 300)))
            {
              iVar9 = *(int *)(pAVar6 + 0xa5);
              if (*(uint *)(iVar8 + 0x34) < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * *(uint *)(iVar8 + 0x34) + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
                puVar11 = auStack_44;
                for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar11 = 0;
                  puVar11 = puVar11 + 1;
                }
                auStack_44[1] = *(uint *)(pAVar6 + 300);
                auStack_44[0] = 0x69;
                uStack_3a = (undefined2)((uint)iVar8 >> 8);
                uStack_38 = uVar5;
                AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar9 + 4),auStack_44);
                if ('\0' < cStack_3c) {
                  *(undefined4 *)(iVar8 + 0x2c) = 2;
                }
                cVar7 = cStack_3b;
                if (cStack_3c < '\0') {
                  *(undefined4 *)(iVar8 + 0x2c) = 3;
                }
                break;
              }
            }
            *(undefined4 *)(iVar8 + 0x2c) = 3;
            break;
          case 2:
          case 3:
            uVar1 = *(uint *)(iVar8 + 0x30);
            cStack_3b = cVar7;
            if (-1 < (int)uVar1) {
              iVar9 = *(int *)(pAVar6 + 0xa5);
              if (uVar1 < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * uVar1 + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
                puVar11 = auStack_44;
                for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *puVar11 = 0;
                  puVar11 = puVar11 + 1;
                }
                auStack_44[1] = *(uint *)(pAVar6 + 300);
                auStack_44[0] = 0x6b;
                cStack_3b = (char)((uint)iVar8 >> 8);
                uStack_3a = (undefined2)((uint)iVar8 >> 0x10);
                cStack_3c = cVar3;
                AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar9 + 4),auStack_44);
              }
            }
            FUN_006b0c70(*(int *)(pAVar6 + 0xbd),uStack_8);
            uStack_8 = uStack_8 - 1;
            cVar7 = cStack_3b;
          }
          cStack_3b = cVar7;
          iVar8 = *(int *)(pAVar6 + 0xbd);
          uStack_8 = uStack_8 + 1;
          bVar12 = uStack_8 < *(uint *)(iVar8 + 0xc);
        } while ((int)uStack_8 < (int)*(uint *)(iVar8 + 0xc));
      }
      DAT_00858df8 = (undefined4 *)uStack_88;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_88;
    iVar9 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x1ff,0,iVar8,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar8,0,0x7d56e0,0x200);
  }
  return;
}

