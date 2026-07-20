
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Init
   
   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/HoloTy_Init_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

uint __thiscall
HoloTy::Init(HoloTy *this,HoloTy_Init_param_1Enum param_1,int param_2,int param_3,int param_4,
            int param_5,uint param_6,char param_7,uint param_8)

{
  code *pcVar1;
  HoloTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_58;
  HoloTy *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,0x9a,0,iVar2,&DAT_007a4ccc,
                               s_HoloTy__Init_007cc6d0);
    if (iVar2 == 0) {
      this_00->field_0000 = (char)local_10;
      return local_10 & 0xff;
    }
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  local_14->field_0007 = param_4;
  if (param_4 != 0) {
    local_14->field_0023 = param_2;
    local_14->field_0027 = param_3;
    local_14->field_0001 = param_1;
    local_14->field_002B = *(undefined4 *)(param_4 + 4);
    iVar2 = *(int *)(param_4 + 8);
    local_14->field_002F = iVar2;
    switch(param_1) {
    case CASE_1:
      local_c = local_14->field_002B;
      local_8 = DAT_00806734 - param_3;
      break;
    case CASE_2:
      local_8 = g_nWidth_00806730 - param_2;
      local_c = iVar2;
      break;
    case CASE_3:
      local_8 = iVar2 + param_3;
      local_c = local_14->field_002B;
      break;
    case CASE_4:
      local_8 = local_14->field_002B + param_2;
      local_c = iVar2;
    }
    local_14->field_0013 = param_6 & 0xff;
    local_14->field_001F = local_8;
    puVar3 = CalcHologram(local_14,(uint *)&local_14->field_0xf,local_8,local_c,param_5,
                          param_6 & 0xff,param_8);
    this_00->field_000B = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = &this_00->field_0003;
      FUN_006b2330((uint)DAT_008075a8,puVar3,10,0x402842,0,0,(uint)this_00);
      uVar4 = *puVar3;
      if (-1 < (int)uVar4) {
        switch(this_00->field_0001) {
        case 1:
        case 3:
          FUN_006b2800((int)DAT_008075a8,uVar4,this_00->field_002B,DAT_00806734);
          uVar4 = this_00->field_0023;
          uVar5 = 0;
          break;
        case 2:
        case 4:
          FUN_006b2800((int)DAT_008075a8,uVar4,g_nWidth_00806730,this_00->field_002F);
          uVar5 = this_00->field_0027;
          uVar4 = 0;
          break;
        default:
          goto switchD_005aadcd_default;
        }
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar3,0xffffffff,uVar4,uVar5);
switchD_005aadcd_default:
        FUN_006b3af0(DAT_008075a8,*puVar3);
        this_00->field_0002 = param_7;
        if (param_7 == '\0') {
          this_00->field_0017 = 0xffffffff;
          g_currentExceptionFrame = local_58.previous;
          this_00->field_0000 = 1;
          return 1;
        }
        this_00->field_0017 = this_00->field_0013;
        g_currentExceptionFrame = local_58.previous;
        this_00->field_0000 = 1;
        return 1;
      }
    }
    Done(this_00);
  }
  g_currentExceptionFrame = local_58.previous;
  this_00->field_0000 = (char)local_10;
  return local_10 & 0xff;
}

