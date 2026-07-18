
int __thiscall AiTactClassTy::GetAiMess(AiTactClassTy *this,uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  AiTactClassTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  uint *puVar6;
  bool bVar7;
  undefined4 uStack_80;
  undefined4 auStack_7c [16];
  uint auStack_3c [3];
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  AiTactClassTy *pAStack_8;
  
  uStack_80 = DAT_00858df8;
  DAT_00858df8 = &uStack_80;
  pAStack_8 = this;
  iVar3 = __setjmp3(auStack_7c,0,unaff_EDI,unaff_ESI);
  this_00 = pAStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_80;
    iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x36a,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7d56e0,0x36b);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (99 < *param_1) {
    switch(*param_1) {
    case 0x6a:
      *(uint *)(pAStack_8 + 0x9d) = param_1[2];
      thunk_FUN_00690230(pAStack_8,param_1);
      DAT_00858df8 = (undefined4 *)uStack_80;
      return 0;
    case 0x6c:
      if ((char)param_1[2] == '\0') {
        puVar6 = auStack_3c;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        auStack_3c[0] = 0x6d;
        uStack_30 = 1;
        auStack_3c[1] = *(uint *)(pAStack_8 + 300);
        uStack_2f = *(undefined1 *)((int)param_1 + 9);
        uStack_2e = (undefined2)*(undefined4 *)((int)param_1 + 10);
        uStack_2c = (undefined2)((uint)*(undefined4 *)((int)param_1 + 10) >> 0x10);
        thunk_FUN_00690230(pAStack_8,auStack_3c);
        DAT_00858df8 = (undefined4 *)uStack_80;
        return 0;
      }
      break;
    case 0x6e:
    case 0x74:
      thunk_FUN_00690230(pAStack_8,param_1);
      DAT_00858df8 = (undefined4 *)uStack_80;
      return 0;
    case 0x6f:
      iVar3 = thunk_FUN_0068e850(pAStack_8,param_1[3]);
      param_1[2] = param_1[2] + iVar3;
      iVar3 = thunk_FUN_0068e610(this_00,param_1[3]);
      param_1[2] = param_1[2] + iVar3;
      DAT_00858df8 = (undefined4 *)uStack_80;
      return 0;
    case 0x70:
      uVar5 = 0;
      iVar3 = *(int *)(pAStack_8 + 0xa5);
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
            puVar6 = auStack_3c;
            for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            auStack_3c[1] = *(uint *)(this_00 + 300);
            auStack_3c[0] = 0x70;
            uVar1 = param_1[3];
            uStack_30 = (undefined1)uVar1;
            uStack_2f = (undefined1)(uVar1 >> 8);
            uStack_2e = (undefined2)(uVar1 >> 0x10);
            AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar3 + 4),auStack_3c);
            if (0 < (int)auStack_3c[2]) {
              param_1[2] = auStack_3c[2];
              DAT_00858df8 = (undefined4 *)uStack_80;
              return 0;
            }
          }
          iVar3 = *(int *)(this_00 + 0xa5);
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
          if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar5) {
            DAT_00858df8 = (undefined4 *)uStack_80;
            return 0;
          }
        } while( true );
      }
      break;
    case 0x71:
      uVar5 = *(int *)(*(int *)(pAStack_8 + 0xa5) + 0xc) - 1;
      if (-1 < (int)uVar5) {
        do {
          iVar3 = *(int *)(this_00 + 0xa5);
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(AiFltClassTy **)(iVar3 + 4) != (AiFltClassTy *)0x0)) {
            AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar3 + 4),param_1);
            thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(*(int *)(iVar3 + 4) + 8));
            FUN_006b0c70(*(int *)(this_00 + 0xa5),uVar5);
          }
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
        DAT_00858df8 = (undefined4 *)uStack_80;
        return 0;
      }
      break;
    case 0x72:
      uVar5 = param_1[2];
      if (uVar5 == 0) {
        GiveObjByClaim(pAStack_8,param_1[3]);
        DAT_00858df8 = (undefined4 *)uStack_80;
        return 0;
      }
      if (uVar5 == 1) {
        GiveObjByFltType(pAStack_8,param_1[3]);
        DAT_00858df8 = (undefined4 *)uStack_80;
        return 0;
      }
      if (uVar5 == 2) {
        GiveObjByGrpNum(pAStack_8,param_1[3]);
        DAT_00858df8 = (undefined4 *)uStack_80;
        return 0;
      }
      break;
    case 0x73:
      uVar5 = 0;
      iVar3 = *(int *)(pAStack_8 + 0xa5);
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if (((iVar3 != 0) && (*(AiFltClassTy **)(iVar3 + 4) != (AiFltClassTy *)0x0)) &&
             (AiFltClassTy::GetAiMess(*(AiFltClassTy **)(iVar3 + 4),param_1),
             '\0' < (char)param_1[2])) {
            DAT_00858df8 = (undefined4 *)uStack_80;
            return 0;
          }
          iVar3 = *(int *)(this_00 + 0xa5);
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_80;
  return 0;
}

