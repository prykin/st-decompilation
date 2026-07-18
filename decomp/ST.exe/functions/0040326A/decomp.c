
void __thiscall CPanelTy::PaintNewDeep(CPanelTy *this)

{
  CPanelTy *pCVar1;
  code *pcVar2;
  uint uVar3;
  CPanelTy *pCVar4;
  CPanelTy CVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  CPanelTy CVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar12;
  undefined4 uStack_60;
  undefined4 auStack_5c [16];
  CPanelTy *pCStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  CPanelTy *pCStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_60 = DAT_00858df8;
  DAT_00858df8 = &uStack_60;
  pCStack_10 = this;
  iVar7 = __setjmp3(auStack_5c,0,unaff_EDI,unaff_ESI);
  pCVar4 = pCStack_10;
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_60;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x226,0,iVar7,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7c23cc,0x226);
    return;
  }
  uStack_c = uStack_c & 0xffffff00;
  do {
    uVar8 = uStack_c & 0xff;
    pCVar1 = pCVar4 + uVar8 + 0x2a8;
    if ((pCVar4[uVar8 + 0x2a8] != (CPanelTy)0xff) &&
       (199 < (uint)(*(int *)(pCVar4 + 0x38) - *(int *)(pCVar4 + uVar8 * 4 + 0x2aa)))) {
      *(int *)(pCVar4 + uVar8 * 4 + 0x2aa) = *(int *)(pCVar4 + 0x38);
      pCStack_1c = pCVar4 + uVar8 + 0x2a6;
      CVar11 = (CPanelTy)((char)pCVar4[uVar8 + 0x2a6] + 1);
      *pCStack_1c = CVar11;
      switch(CVar11) {
      case (CPanelTy)0x1:
      case (CPanelTy)0x3:
      case (CPanelTy)0x5:
        if (DAT_0080874e == '\x03') {
          if ((char)uStack_c == '\0') {
            uStack_8 = CONCAT31(uStack_8._1_3_,pCVar4[0x2a8]);
          }
          else {
            uStack_8 = CONCAT31(uStack_8._1_3_,(char)*pCVar1 + 0x19);
          }
        }
        else {
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
        }
        break;
      case (CPanelTy)0x2:
      case (CPanelTy)0x4:
        if (DAT_0080874e == '\x03') {
          if ((char)uStack_c == '\0') {
LAB_00500d33:
            uStack_8 = CONCAT31(uStack_8._1_3_,(char)pCVar4[0x2a8] + '\x05');
          }
          else {
            uStack_8 = CONCAT31(uStack_8._1_3_,(char)*pCVar1 + 0x14);
          }
        }
        else {
LAB_00500d40:
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
        }
        break;
      default:
        if ((char)uStack_c == '\0') {
          CVar5 = pCVar4[(byte)pCVar4[0x2a8] + 0xb8d];
        }
        else {
          CVar5 = pCVar4[(byte)*pCVar1 + 0xc7b];
        }
        if (CVar5 == (CPanelTy)0x0) {
          if (DAT_0080874e != '\x03') goto LAB_00500d40;
          if ((char)uStack_c == '\0') goto LAB_00500d33;
          uStack_8 = CONCAT31(uStack_8._1_3_,(char)*pCVar1 + 0x14);
        }
        else if (DAT_0080874e == '\x03') {
          if ((char)uStack_c == '\0') {
            uStack_8 = CONCAT31(uStack_8._1_3_,pCVar4[0x2a8]);
          }
          else {
            uStack_8 = CONCAT31(uStack_8._1_3_,(char)*pCVar1 + 0x19);
          }
        }
        else {
          uStack_8 = (uint)uStack_8._1_3_ << 8;
        }
      }
      if ((byte)CVar11 < 7) {
        if (DAT_0080874e == '\x03') {
          if ((char)uStack_c == '\0') {
            uVar8 = (uint)(byte)pCVar4[0x2a8];
            pbVar9 = (byte *)FUN_0070b3a0(*(int *)(pCVar4 + 0x2a2),uStack_8 & 0xff);
            puVar12 = *(undefined4 **)(pCVar4 + 0x18c);
            iVar7 = (5 - uVar8) * 0xb;
          }
          else {
            uVar8 = (uint)(byte)*pCVar1;
            pbVar9 = (byte *)FUN_0070b3a0(*(int *)(pCVar4 + 0x2a2),uStack_8 & 0xff);
            puVar12 = *(undefined4 **)(pCVar4 + 0x194);
            iVar7 = uVar8 * 0xb + 0x87;
          }
          thunk_FUN_00540760(puVar12,iVar7,uVar8 * 0xb + 0xb,'\x06',pbVar9);
          bVar6 = (-((char)uStack_c != '\0') & 2U) + 3;
          uStack_14 = CONCAT31(uStack_14._1_3_,bVar6);
          if (bVar6 < 0xb) {
            uVar3 = (uint)bVar6;
            uVar8 = *(uint *)(pCVar4 + uVar3 * 4 + 0x148);
joined_r0x00500e7c:
            if (-1 < (int)uVar8) {
              FUN_006b3640(DAT_008075a8,uVar8,0xffffffff,*(uint *)(pCVar4 + uVar3 * 4 + 0x3c),
                           *(uint *)(pCVar4 + uVar3 * 4 + 0x94));
            }
          }
        }
        else {
          if ((char)uStack_c == '\0') {
            puVar12 = *(undefined4 **)(pCVar4 + 0x188);
          }
          else {
            puVar12 = *(undefined4 **)(pCVar4 + 0x198);
          }
          pbVar9 = (byte *)FUN_0070b3a0(*(int *)(pCVar4 + 0x2a2),uStack_8 & 0xff);
          thunk_FUN_00540760(puVar12,7,(uint)(byte)*pCVar1 * 0x1d + 6,'\x01',pbVar9);
          bVar6 = (-((char)uStack_c != '\0') & 4U) + 2;
          uStack_18 = CONCAT31(uStack_18._1_3_,bVar6);
          if (bVar6 < 0xb) {
            uVar3 = (uint)bVar6;
            uVar8 = *(uint *)(pCVar4 + uVar3 * 4 + 0x148);
            goto joined_r0x00500e7c;
          }
        }
      }
      if (5 < (byte)*pCStack_1c) {
        *pCVar1 = (CPanelTy)0xff;
      }
    }
    bVar6 = (char)uStack_c + 1;
    uStack_c = CONCAT31(uStack_c._1_3_,bVar6);
    if (1 < bVar6) {
      DAT_00858df8 = (undefined4 *)uStack_60;
      return;
    }
  } while( true );
}

