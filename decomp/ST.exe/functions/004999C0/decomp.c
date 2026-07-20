
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePVecAndTgtListExt */

undefined4 __thiscall
STGroupBoatC::ReMakePVecAndTgtListExt(STGroupBoatC *this,char param_1,short param_2)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *groupContent;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_54;
  STGroupBoatC *local_10;
  undefined2 local_c;
  undefined2 local_a;
  char local_8 [2];
  short local_6;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar2 == 0) {
    if (local_10->field_0212 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x509);
    }
    if (this_00->field_020E == 0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x50b);
    }
    uVar5 = 0;
    iVar2 = *(int *)(this_00->field_020E + 0xc);
    if (0 < iVar2) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)this_00->field_020E,uVar5,(undefined4 *)local_8)
        ;
        if (((local_6 != -1) && (local_8[0] == param_1)) && (local_6 == param_2)) {
          groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
          local_c = 0xffff;
          local_a = (undefined2)uVar5;
          Library::DKW::TBL::FUN_006ae1c0(groupContent,(undefined4 *)&local_c);
          ReMakePVecAndTgtList(this_00,groupContent);
          FUN_006ae110((byte *)groupContent);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    if (iVar2 != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x51c,0,iVar2,&DAT_007a4ccc
                                 ,s_STGroupBoatC__ReMakePVecAndTgtLi_007abec8);
      if (iVar3 == 0) {
        RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x51d);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return this_00->field_0212;
}

