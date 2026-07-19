
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePVecAndTgtList */

undefined4 __thiscall STGroupBoatC::ReMakePVecAndTgtList(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  InternalExceptionFrame local_58;
  int local_14;
  STGroupBoatC *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_10;
  if (iVar3 == 0) {
    if (local_10->field_0212 == 0) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x4d7)
      ;
    }
    uVar7 = 0;
    local_14 = *(int *)(param_1 + 0xc);
    if (0 < local_14) {
      do {
        FUN_006acc70(param_1,uVar7,&local_c);
        FUN_006acc70(pSVar2->field_020E,(int)local_c._2_2_,&local_8);
        if (local_8._2_2_ != -1) {
          local_8._2_2_ = -1;
          Library::DKW::TBL::FUN_006ae140((uint *)pSVar2->field_020E,(int)local_c._2_2_,&local_8);
          pSVar2->field_0212 = pSVar2->field_0212 + -1;
          *(undefined4 *)(pSVar2->field_021E + local_c._2_2_ * 8) = 0xffffffff;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < local_14);
    }
    if (pSVar2->field_0212 == 0) {
      FUN_006ae110((byte *)pSVar2->field_020E);
      pSVar2->field_020E = 0;
      FUN_006ab060(&pSVar2->field_021E);
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x4e5)
      ;
    }
    iVar6 = -1;
    iVar3 = 0;
    if (0 < (int)pSVar2->field_021A) {
      iVar4 = pSVar2->field_021E;
      do {
        if (*(int *)(iVar4 + iVar3 * 8) != -1) {
          if (iVar6 == -1) {
            *(undefined4 *)(iVar4 + iVar3 * 8) = 0;
            iVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = *(undefined4 *)(iVar4 + 4 + iVar3 * 8);
            iVar6 = 0;
          }
          else {
            *(undefined4 *)(iVar4 + iVar3 * 8) = pSVar2->field_0216;
            iVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = pSVar2->field_0216 + *(int *)(iVar4 + 4 + iVar3 * 8);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)pSVar2->field_021A);
    }
    g_currentExceptionFrame = local_58.previous;
  }
  else {
    g_currentExceptionFrame = local_58.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x4f3,0,iVar3,&DAT_007a4ccc
                                 ,s_STGroupBoatC__ReMakePVecAndTgtLi_007abe9c);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x4f4);
      return 0xffffffff;
    }
  }
  return pSVar2->field_0212;
}

