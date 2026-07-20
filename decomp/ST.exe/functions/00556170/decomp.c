
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::PrepareAfterSave
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005564C0 -> 00556170 @ 00556566 */

void __thiscall TraksClassTy::PrepareAfterSave(TraksClassTy *this,ushort *param_1)

{
  code *pcVar1;
  TraksClassTy *pTVar2;
  int iVar3;
  char *text;
  ushort *puVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  short *psVar6;
  void *unaff_EDI;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_54;
  int local_10;
  TraksClassTy *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = local_c;
  if (iVar3 == 0) {
    local_c->field_001C = *(undefined4 *)(param_1 + 0xc);
    if ((char)param_1[0xe] == '\0') {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,0x3c,0x32);
      pTVar2->field_0024 = puVar5;
    }
    else {
      iVar3 = FUN_006b0060((uint *)0x0,(uint *)(param_1 + 0x2e));
      pTVar2->field_0024 = iVar3;
      *(undefined4 *)(iVar3 + 4) = 0;
      while( true ) {
        iVar3 = pTVar2->field_0024;
        uVar8 = *(uint *)(iVar3 + 4);
        if (uVar8 < *(uint *)(iVar3 + 0xc)) {
          psVar6 = (short *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
          *(uint *)(iVar3 + 4) = uVar8 + 1;
        }
        else {
          psVar6 = (short *)0x0;
        }
        if (psVar6 == (short *)0x0) break;
        piVar7 = DAT_00806764;
        if (*(int *)(&DAT_007c900c + *psVar6 * 0x18) != 1) {
          piVar7 = DAT_00806774;
        }
        puVar11 = (undefined4 *)0x0;
        iVar10 = 0;
        iVar3 = 1;
        bVar9 = 0;
        uVar8 = 0xffffffff;
        text = thunk_FUN_00555840((int)*psVar6);
        puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                           (piVar7,CASE_1D,text,uVar8,bVar9,iVar3,iVar10,puVar11);
        psVar6[0x1b] = *puVar4;
        iVar3 = *psVar6 * 0x18;
        FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)(&DAT_007c9000 + iVar3),
                     *(uint *)(&DAT_007c9004 + iVar3),*(uint *)(&DAT_007c8ff8 + iVar3),
                     *(uint *)(&DAT_007c8ffc + iVar3),0);
        *(uint *)(psVar6 + 0x19) = local_8;
        FUN_006e98e0(PTR_00807598,local_8,0,(int)psVar6[0x1b],*(int *)((int)puVar4 + 0x21),1);
        FUN_006ea270(PTR_00807598,*(uint *)(psVar6 + 0x19),0,(int)psVar6[0x11]);
        iVar3 = *(int *)(psVar6 + 0xb);
        if (-1 < iVar3) {
          if (psVar6[0xd] == -1) {
            FUN_006ea3e0(PTR_00807598,*(uint *)(psVar6 + 0x19),iVar3);
          }
          else if (psVar6[0xd] == 1) {
            FUN_006ea460(PTR_00807598,*(uint *)(psVar6 + 0x19),iVar3);
          }
        }
        FUN_006ea4e0(PTR_00807598,*(uint *)(psVar6 + 0x19),1,
                     *(int *)(&DAT_007c9000 + *psVar6 * 0x18) / 2,
                     *(int *)(&DAT_007c9004 + *psVar6 * 0x18) / 2);
        local_10 = (int)psVar6[1];
        FUN_006ea960(PTR_00807598,*(uint *)(psVar6 + 0x19),
                     (float)local_10 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)psVar6[2] * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)psVar6[3] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
        FUN_006eaaa0(PTR_00807598,*(uint *)(psVar6 + 0x19),0);
        *(undefined4 *)(psVar6 + 0x12) = pTVar2->field_0020;
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar10 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x11b,0,iVar3,&DAT_007a4ccc,
                              s_TraksClassTy__PrepareAfterSave_e_007c91d0);
  if (iVar10 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_grig_traks_cpp_007c9104,0x11c);
  return;
}

