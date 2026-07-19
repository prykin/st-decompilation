
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepare */

undefined4 __thiscall STGroupBoatC::GrpRepare(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  void *this_01;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar9;
  uint uVar10;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      if (*(byte **)(local_14 + 0x160) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_14 + 0x160));
        *(undefined4 *)(this_00 + 0x160) = 0;
      }
      if (*(byte **)(this_00 + 0x29f) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this_00 + 0x29f));
        *(undefined4 *)(this_00 + 0x29f) = 0;
      }
      return 0;
    }
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x9ea,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpRepare_007ac018);
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x9eb);
      return local_10;
    }
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    pSVar9 = local_14 + 0x89;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pSVar9 = 0;
      pSVar9 = pSVar9 + 4;
    }
    *(undefined4 *)(local_14 + 0x65) = 0;
    if (*(byte **)(local_14 + 0x29f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_14 + 0x29f));
    }
    *(int *)(this_00 + 0x29b) = *(int *)(this_00 + 0x15c);
    *(undefined4 *)(this_00 + 0x29f) = *(undefined4 *)(this_00 + 0x160);
    *(undefined4 *)(this_00 + 0x29f) = 0;
    if (*(int *)(this_00 + 0x29b) == 0) {
      if ((*(int *)(this_00 + 0x160) == 0) ||
         (uVar8 = *(int *)(*(int *)(this_00 + 0x160) + 0xc), local_c = uVar8, uVar8 == 0)) {
        uVar8 = local_c;
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x9b7);
      }
      puVar3 = FUN_006ae290((uint *)0x0,0,2,1);
      uVar10 = 0;
      *(uint **)(this_00 + 0x29f) = puVar3;
      if (0 < (int)uVar8) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x160),uVar10,&local_8);
          if ((((short)local_8 != -1) &&
              (piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                           this_00[0x24]),local_8,1),
              piVar4 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar4 + 0x2c))(), iVar2 == 0x33)) {
            FUN_006ae1c0(*(uint **)(this_00 + 0x29f),&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
      FUN_006ae110(*(byte **)(this_00 + 0x160));
      *(undefined4 *)(this_00 + 0x160) = 0;
      if (*(int *)(*(int *)(this_00 + 0x29f) + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x9c8);
      }
    }
    if (*(int *)(this_00 + 0x29b) == 1) {
      puVar3 = STAllPlayersC::GetTOBJList(DAT_007fa174,(char)this_00[0x24],0x33,0,-1);
      *(uint **)(this_00 + 0x29f) = puVar3;
      if (puVar3[3] == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x9cd);
      }
    }
    DistributeDock(this_00,1,*(int *)(this_00 + 0x29f),*(int *)(this_00 + 0x29));
  }
  uVar8 = 0;
  local_10 = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 0) {
    if ((*(int *)(this_00 + 0x29f) == 0) || (*(short *)(this_00 + 0x27) == 0)) {
      local_10 = 0;
    }
    else {
      uVar10 = *(uint *)(*(int *)(this_00 + 0x29) + 0xc);
      local_c = uVar10;
      if (0 < (int)uVar10) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x29),uVar8,&local_8);
          if ((short)local_8 != -1) {
            this_01 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                          this_00[0x24]),local_8,1);
            iVar2 = thunk_FUN_0045ff10((int)this_01);
            uVar10 = local_c;
            if ((iVar2 == 4) ||
               (uVar5 = thunk_FUN_0045f400(this_01,4), uVar10 = local_c, uVar5 == 1)) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar10);
      }
      if (uVar8 == uVar10) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

