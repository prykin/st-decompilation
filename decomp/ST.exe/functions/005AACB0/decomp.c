
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Init */

uint __thiscall
HoloTy::Init(HoloTy *this,HoloTy param_1,int param_2,int param_3,int param_4,int param_5,
            uint param_6,char param_7,uint param_8)

{
  HoloTy *pHVar1;
  code *pcVar2;
  HoloTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  InternalExceptionFrame local_58;
  HoloTy *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,0x9a,0,iVar3,&DAT_007a4ccc,
                               s_HoloTy__Init_007cc6d0);
    if (iVar3 == 0) {
      *this_00 = SUB41(local_10,0);
      return local_10 & 0xff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  *(int *)(local_14 + 7) = param_4;
  if (param_4 != 0) {
    *(int *)(local_14 + 0x23) = param_2;
    *(int *)(local_14 + 0x27) = param_3;
    local_14[1] = param_1;
    *(undefined4 *)(local_14 + 0x2b) = *(undefined4 *)(param_4 + 4);
    iVar3 = *(int *)(param_4 + 8);
    *(int *)(local_14 + 0x2f) = iVar3;
    switch(param_1) {
    case (HoloTy)0x1:
      local_c = *(int *)(local_14 + 0x2b);
      local_8 = DAT_00806734 - param_3;
      break;
    case (HoloTy)0x2:
      local_8 = DAT_00806730 - param_2;
      local_c = iVar3;
      break;
    case (HoloTy)0x3:
      local_8 = iVar3 + param_3;
      local_c = *(int *)(local_14 + 0x2b);
      break;
    case (HoloTy)0x4:
      local_8 = *(int *)(local_14 + 0x2b) + param_2;
      local_c = iVar3;
    }
    *(uint *)(local_14 + 0x13) = param_6 & 0xff;
    *(uint *)(local_14 + 0x1f) = local_8;
    puVar4 = CalcHologram(local_14,(uint *)(local_14 + 0xf),local_8,local_c,param_5,param_6 & 0xff,
                          param_8);
    *(undefined4 **)(this_00 + 0xb) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      pHVar1 = this_00 + 3;
      FUN_006b2330((uint)DAT_008075a8,(uint *)pHVar1,10,0x402842,0,0,(uint)this_00);
      uVar5 = *(uint *)pHVar1;
      if (-1 < (int)uVar5) {
        switch(this_00[1]) {
        case (HoloTy)0x1:
        case (HoloTy)0x3:
          FUN_006b2800((int)DAT_008075a8,uVar5,*(uint *)(this_00 + 0x2b),DAT_00806734);
          uVar5 = *(uint *)(this_00 + 0x23);
          uVar6 = 0;
          break;
        case (HoloTy)0x2:
        case (HoloTy)0x4:
          FUN_006b2800((int)DAT_008075a8,uVar5,DAT_00806730,*(uint *)(this_00 + 0x2f));
          uVar6 = *(uint *)(this_00 + 0x27);
          uVar5 = 0;
          break;
        default:
          goto switchD_005aadcd_default;
        }
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pHVar1,0xffffffff,uVar5,uVar6);
switchD_005aadcd_default:
        FUN_006b3af0(DAT_008075a8,*(uint *)pHVar1);
        this_00[2] = (HoloTy)param_7;
        if (param_7 == '\0') {
          *(undefined4 *)(this_00 + 0x17) = 0xffffffff;
          g_currentExceptionFrame = local_58.previous;
          *this_00 = (HoloTy)0x1;
          return 1;
        }
        *(undefined4 *)(this_00 + 0x17) = *(undefined4 *)(this_00 + 0x13);
        g_currentExceptionFrame = local_58.previous;
        *this_00 = (HoloTy)0x1;
        return 1;
      }
    }
    Done(this_00);
  }
  g_currentExceptionFrame = local_58.previous;
  *this_00 = SUB41(local_10,0);
  return local_10 & 0xff;
}

