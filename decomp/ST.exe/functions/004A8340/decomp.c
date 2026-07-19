
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetDepotForAttack */

void __thiscall
STGroupBoatC::GetDepotForAttack
          (STGroupBoatC *this,uint param_1,undefined1 *param_2,short *param_3,short *param_4,
          short *param_5,short *param_6)

{
  code *pcVar1;
  int iVar2;
  int extraout_EAX;
  void *this_00;
  int *this_01;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  STGroupBoatC *pSVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  undefined1 local_24;
  char cStack_23;
  short sStack_22;
  undefined2 uStack_20;
  int local_1c;
  int local_18;
  STGroupBoatC *local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_18 = 1000000;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_14;
  if (iVar2 == 0) {
    *param_3 = -1;
    if ((local_14->field_01E6 != 2) || (iVar2 = *(int *)&local_14->field_0x20e, iVar2 == 0)) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1708);
      iVar2 = extraout_EAX;
    }
    this_00 = (void *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,CONCAT31((int3)((uint)iVar2 >> 8),pSVar5->field_0024),
                                 param_1,CASE_1);
    thunk_FUN_004162b0(this_00,&local_10,&local_e,&local_c);
    uVar4 = 0;
    local_1c = *(int *)(*(int *)&pSVar5->field_0x20e + 0xc);
    iVar2 = local_18;
    if (0 < local_1c) {
      do {
        FUN_006acc70(*(int *)&pSVar5->field_0x20e,uVar4,(undefined4 *)&local_24);
        if (sStack_22 != -1) {
          this_01 = (int *)STAllPlayersC::GetObjPtr
                                     (DAT_007fa174,CONCAT22(sStack_22,CONCAT11(cStack_23,local_24)),
                                      CONCAT22(uStack_20,sStack_22),(int)cStack_23);
          iVar3 = (**(code **)(*this_01 + 0x2c))();
          if ((iVar3 == 0x3b) ||
             (iVar3 = (**(code **)(*this_01 + 0x2c))(), pSVar5 = local_14, iVar3 == 0x60)) {
            thunk_FUN_004162b0(this_01,&local_8,&local_6,&local_a);
            iVar3 = FUN_006aadd0((int)local_10,(int)local_e,(int)local_c,(int)local_8,(int)local_6,
                                 (int)local_a);
            pSVar5 = local_14;
            if (iVar3 < iVar2) {
              *param_2 = local_24;
              *param_3 = sStack_22;
              *param_4 = local_8;
              *param_5 = local_6;
              *param_6 = local_a;
              iVar2 = iVar3;
              local_18 = iVar3;
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < local_1c);
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  if (iVar2 != -0x5001fff7) {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x171b,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__GetDepotForAttack_007ac4e4);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x171c);
  }
  return;
}

