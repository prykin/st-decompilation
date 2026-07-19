
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TraksClassTy::PrepareAfterSave(TraksClassTy *this,int param_1)

{
  code *pcVar1;
  TraksClassTy *pTVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  short *psVar7;
  void *unaff_EDI;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  undefined4 *puVar12;
  InternalExceptionFrame IStack_54;
  int iStack_10;
  TraksClassTy *pTStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pTStack_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = pTStack_c;
  if (iVar3 == 0) {
    *(undefined4 *)(pTStack_c + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\0') {
      puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,0x3c,0x32);
      *(uint **)(pTVar2 + 0x24) = puVar6;
    }
    else {
      iVar3 = FUN_006b0060((uint *)0x0,(uint *)(param_1 + 0x5c));
      *(int *)(pTVar2 + 0x24) = iVar3;
      *(undefined4 *)(iVar3 + 4) = 0;
      while( true ) {
        iVar3 = *(int *)(pTVar2 + 0x24);
        uVar9 = *(uint *)(iVar3 + 4);
        if (uVar9 < *(uint *)(iVar3 + 0xc)) {
          psVar7 = (short *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
          *(uint *)(iVar3 + 4) = uVar9 + 1;
        }
        else {
          psVar7 = (short *)0x0;
        }
        if (psVar7 == (short *)0x0) break;
        piVar8 = DAT_00806764;
        if (*(int *)(&DAT_007c900c + *psVar7 * 0x18) != 1) {
          piVar8 = DAT_00806774;
        }
        puVar12 = (undefined4 *)0x0;
        iVar11 = 0;
        iVar3 = 1;
        bVar10 = 0;
        uVar9 = 0xffffffff;
        pbVar4 = thunk_FUN_00555840((int)*psVar7);
        puVar5 = FUN_00709af0(piVar8,0x1d,pbVar4,uVar9,bVar10,iVar3,iVar11,puVar12);
        psVar7[0x1b] = *puVar5;
        iVar3 = *psVar7 * 0x18;
        FUN_006e8660(DAT_00807598,(int *)&uStack_8,1,0,*(uint *)(&DAT_007c9000 + iVar3),
                     *(uint *)(&DAT_007c9004 + iVar3),*(uint *)(&DAT_007c8ff8 + iVar3),
                     *(uint *)(&DAT_007c8ffc + iVar3),0);
        *(uint *)(psVar7 + 0x19) = uStack_8;
        FUN_006e98e0(DAT_00807598,uStack_8,0,(int)psVar7[0x1b],*(int *)((int)puVar5 + 0x21),1);
        FUN_006ea270(DAT_00807598,*(uint *)(psVar7 + 0x19),0,(int)psVar7[0x11]);
        iVar3 = *(int *)(psVar7 + 0xb);
        if (-1 < iVar3) {
          if (psVar7[0xd] == -1) {
            FUN_006ea3e0(DAT_00807598,*(uint *)(psVar7 + 0x19),iVar3);
          }
          else if (psVar7[0xd] == 1) {
            FUN_006ea460(DAT_00807598,*(uint *)(psVar7 + 0x19),iVar3);
          }
        }
        FUN_006ea4e0(DAT_00807598,*(uint *)(psVar7 + 0x19),1,
                     *(int *)(&DAT_007c9000 + *psVar7 * 0x18) / 2,
                     *(int *)(&DAT_007c9004 + *psVar7 * 0x18) / 2);
        iStack_10 = (int)psVar7[1];
        FUN_006ea960(DAT_00807598,*(uint *)(psVar7 + 0x19),
                     (float)iStack_10 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)psVar7[2] * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)psVar7[3] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
        FUN_006eaaa0(DAT_00807598,*(uint *)(psVar7 + 0x19),0);
        *(undefined4 *)(psVar7 + 0x12) = *(undefined4 *)(pTVar2 + 0x20);
      }
    }
    g_currentExceptionFrame = IStack_54.previous;
    return;
  }
  g_currentExceptionFrame = IStack_54.previous;
  iVar11 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x11b,0,iVar3,&DAT_007a4ccc,
                              s_TraksClassTy__PrepareAfterSave_e_007c91d0);
  if (iVar11 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_grig_traks_cpp_007c9104,0x11c);
  return;
}

