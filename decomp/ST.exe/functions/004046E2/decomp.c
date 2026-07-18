
void __thiscall AiTactClassTy::HelpOrganize(AiTactClassTy *this,int param_1)

{
  AiTactClassTy AVar1;
  AiTactClassTy AVar2;
  char cVar3;
  AiFltClassTy *this_00;
  code *pcVar4;
  uint uVar5;
  AiTactClassTy *this_01;
  short sVar6;
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  int iVar10;
  void *unaff_EDI;
  uint *puVar11;
  bool bVar12;
  undefined4 uStack_98;
  undefined4 auStack_94 [16];
  uint auStack_54 [2];
  char cStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  AiTactClassTy AStack_14;
  undefined3 uStack_13;
  uint uStack_10;
  AiTactClassTy *pAStack_c;
  uint uStack_8;
  
  uStack_10 = CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_1 + 0x16));
  uStack_20 = CONCAT22((short)((uint)unaff_EDI >> 0x10),*(short *)(param_1 + 0x1a));
  AVar1 = *(AiTactClassTy *)(param_1 + 0x18);
  _AStack_14 = CONCAT31(uStack_13,AVar1);
  if (7 < (byte)AVar1) {
    return;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[(char)AVar1 * 0x51])) {
    return;
  }
  if ((int)(char)AVar1 == *(int *)(this + 0x24)) {
    return;
  }
  AVar2 = this[0x24];
  uStack_8 = CONCAT31(uStack_8._1_3_,AVar2);
  if (DAT_00808a8f != '\0') {
    bVar12 = (&DAT_008087ea)[(uint)(byte)AVar2 * 0x51] != (&DAT_008087ea)[(uint)(byte)AVar1 * 0x51];
    goto LAB_00690763;
  }
  if (AVar1 == AVar2) {
LAB_00690758:
    iVar7 = 0;
  }
  else {
    uVar8 = (uint)(byte)AVar1;
    uVar5 = (uint)(byte)AVar2;
    cVar3 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar5);
    if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\0')) {
      iVar7 = -2;
    }
    else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\0')) {
      iVar7 = -1;
    }
    else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\x01')) {
      iVar7 = 1;
    }
    else {
      if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) != '\x01'))
      goto LAB_00690758;
      iVar7 = 2;
    }
  }
  bVar12 = iVar7 < 0;
LAB_00690763:
  if ((bVar12) && (*(short *)(param_1 + 0x1a) != -1)) {
    uStack_98 = DAT_00858df8;
    DAT_00858df8 = &uStack_98;
    pAStack_c = this;
    iVar7 = __setjmp3(auStack_94,0,unaff_EDI,unaff_ESI);
    this_01 = pAStack_c;
    if (iVar7 == 0) {
      if (DAT_007fa174 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = thunk_FUN_0042b620((uint)(byte)pAStack_c[0x24],uStack_10,1);
      }
      if ((uVar8 != 0) && (iVar7 = thunk_FUN_0068e290(this_01,*(short *)(uVar8 + 0x30)), iVar7 != 0)
         ) {
        if (*(short *)(iVar7 + 0x7b) == 1) {
          sVar6 = (short)uStack_10;
        }
        else {
          sVar6 = -1;
        }
        uVar8 = thunk_FUN_00690550(this_01,*(short *)(iVar7 + 0x7d),sVar6);
        if ((int)uVar8 < 0) {
          iVar10 = *(int *)(this_01 + 0xa5);
          uStack_8 = 0;
          if (0 < *(int *)(iVar10 + 0xc)) {
            bVar12 = *(int *)(iVar10 + 0xc) != 0;
            do {
              if (bVar12) {
                iVar10 = *(int *)(iVar10 + 8) * uStack_8 + *(int *)(iVar10 + 0x1c);
              }
              else {
                iVar10 = 0;
              }
              if ((iVar10 != 0) &&
                 (this_00 = *(AiFltClassTy **)(iVar10 + 4), this_00 != (AiFltClassTy *)0x0)) {
                puVar11 = auStack_54;
                for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar11 = 0;
                  puVar11 = puVar11 + 1;
                }
                auStack_54[0] = 100;
                uStack_4b = 1;
                auStack_54[1] = *(uint *)(pAStack_c + 300);
                uStack_48 = *(undefined2 *)(iVar7 + 0x7d);
                uStack_4a = (undefined2)uStack_10;
                uStack_46 = *(undefined2 *)(iVar7 + 0x7b);
                uStack_44 = (undefined2)uStack_20;
                uStack_42 = AStack_14;
                AiFltClassTy::GetAiMess(this_00,auStack_54);
                if ('\0' < cStack_4c) {
                  _uStack_1c = CONCAT22(*(undefined2 *)(iVar7 + 0x7d),
                                        *(undefined2 *)(*(int *)(iVar10 + 4) + 0x7d));
                  uStack_18 = CONCAT22(*(undefined2 *)(iVar7 + 0x7b),(short)uStack_10);
                  FUN_006ae1c0(*(uint **)(pAStack_c + 0xc9),(undefined4 *)&uStack_1c);
                  DAT_00858df8 = (undefined4 *)uStack_98;
                  return;
                }
              }
              uStack_8 = uStack_8 + 1;
              iVar10 = *(int *)(pAStack_c + 0xa5);
              bVar12 = uStack_8 < *(uint *)(iVar10 + 0xc);
              if ((int)*(uint *)(iVar10 + 0xc) <= (int)uStack_8) {
                DAT_00858df8 = (undefined4 *)uStack_98;
                return;
              }
            } while( true );
          }
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_98;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_98;
    iVar10 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x433,0,iVar7,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7d56e0,0x434);
  }
  return;
}

