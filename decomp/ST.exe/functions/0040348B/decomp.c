
undefined4 __thiscall
STGroupBoatC::ReMakePVecAndTgtListExt(STGroupBoatC *this,char param_1,short param_2)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  InternalExceptionFrame IStack_54;
  STGroupBoatC *pSStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  char acStack_8 [2];
  short sStack_6;
  
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pSStack_10 = this;
  iVar2 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_10;
  if (iVar2 == 0) {
    if (*(int *)(pSStack_10 + 0x212) == 0) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x509)
      ;
    }
    if (*(int *)(this_00 + 0x20e) == 0) {
      RaiseInternalException(-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x50b)
      ;
    }
    uVar6 = 0;
    iVar2 = *(int *)(*(int *)(this_00 + 0x20e) + 0xc);
    if (0 < iVar2) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x20e),uVar6,(undefined4 *)acStack_8);
        if (((sStack_6 != -1) && (acStack_8[0] == param_1)) && (sStack_6 == param_2)) {
          puVar3 = FUN_006ae290((uint *)0x0,1,4,1);
          uStack_c = 0xffff;
          uStack_a = (undefined2)uVar6;
          FUN_006ae1c0(puVar3,(undefined4 *)&uStack_c);
          ReMakePVecAndTgtList(this_00,(int)puVar3);
          FUN_006ae110((byte *)puVar3);
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar2);
    }
    g_currentExceptionFrame = IStack_54.previous;
  }
  else {
    g_currentExceptionFrame = IStack_54.previous;
    if (iVar2 != -0x5001fff7) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x51c,0,iVar2,&DAT_007a4ccc
                                 ,s_STGroupBoatC__ReMakePVecAndTgtLi_007abec8);
      if (iVar4 == 0) {
        RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x51d);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  return *(undefined4 *)(this_00 + 0x212);
}

