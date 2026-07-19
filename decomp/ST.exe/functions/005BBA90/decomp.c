
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::CreateCtrls */

void __thiscall PrividerTy::CreateCtrls(PrividerTy *this,char param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  PrividerTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 local_dd0 [19];
  undefined4 local_d84;
  undefined4 local_d80;
  undefined4 local_d7c;
  uint local_544 [7];
  undefined4 local_528;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_74;
  InternalExceptionFrame local_70;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  PrividerTy *local_10;
  uint local_c;
  char local_5;
  
  puVar5 = local_544;
  local_10 = this;
  for (iVar4 = 0x135; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar6 = local_dd0;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x24d,0,iVar4,&DAT_007a4ccc
                               ,s_PrividerTy__CreateCtrls_007cce6c);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x24d);
    return;
  }
  local_5 = local_10->field_1A5F;
  if (local_5 == '\0') {
    if (*(int *)(DAT_0081176c + 0x68a) != 0) {
      local_c = *(uint *)(*(int *)(DAT_0081176c + 0x68a) + 4);
      goto LAB_005bbb22;
    }
  }
  else if (*(int *)(DAT_0081176c + 0x68e) != 0) {
    local_c = *(uint *)(*(int *)(DAT_0081176c + 0x68e) + 4);
    goto LAB_005bbb22;
  }
  local_c = 0;
LAB_005bbb22:
  local_544[6] = ((int)local_c < 0) - 1 & local_c;
  if (param_1 == '\0') {
    if (local_5 == '\0') {
      local_d84 = local_10->field_0008;
      local_dd0[0] = 0;
      local_dd0[1] = 9;
      local_dd0[2] = *(undefined4 *)(DAT_0081176c + 0x30);
      local_dd0[8] = local_10->field_1C92;
      local_dd0[3] = 0x7d;
      local_dd0[4] = 0x1af;
      local_dd0[5] = 0x226;
      local_dd0[6] = 0x14;
      local_dd0[7] = 0x104;
      local_d80 = 2;
      local_d7c = 0x631f;
      (**(code **)(*(int *)local_10->field_000C + 8))(6,&local_10->field_1C86,0,local_dd0,0);
      this_00->field_002D = 0x20;
      this_00->field_0031 = 1;
      FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)&this_00->field_0x1d);
    }
    if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
      puVar6 = &local_2c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      local_2c._2_2_ = (-(ushort)(local_544[6] != 0) & 2) - 1;
      local_1e = 1;
      local_20 = 1;
      local_22 = 1;
      local_28 = 1;
      local_2c._0_2_ = 1;
      MMsgTy::StatePanel(this_00->field_1A5B->field_02E6,(int)&local_2c);
    }
  }
  else {
    local_51c = local_10->field_0008;
    local_544[0] = 0;
    local_544[2] = 0x7a;
    local_544[3] = 0x67;
    local_544[4] = 0x208;
    local_544[5] = 0x143;
    local_528 = 0;
    local_518 = 2;
    local_514 = 0x8160;
    local_4f8 = 2;
    local_4f4 = 0x8161;
    local_4d8 = 2;
    local_4d4 = 0x8162;
    local_4b8 = 2;
    local_4b4 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_74 = 1;
    }
    local_408 = local_10->field_1A97;
    local_40c = local_10->field_1A93;
    local_400 = local_10->field_1A9F;
    local_28c = local_10->field_1B24;
    local_288 = local_10->field_1B28;
    local_284 = local_10->field_1B2C;
    local_404 = local_10->field_1A9B;
    local_280 = local_10->field_1B30;
    local_100 = local_10->field_1BBD;
    local_300 = 0x32;
    local_180 = 0x32;
    local_108 = local_10->field_1BB5;
    local_418 = 2;
    local_414 = 0;
    local_410 = 2;
    local_304 = 500;
    local_3b0 = 2;
    local_3ac = 0x8164;
    local_298 = 2;
    local_294 = 0;
    local_290 = 2;
    local_184 = 500;
    local_230 = 2;
    local_22c = 0x8165;
    local_118 = 3;
    local_114 = 1;
    local_10c = 0;
    local_104 = 0x8a;
    local_fc = 0xe6;
    local_f8 = 0xe;
    local_c0 = 2;
    local_bc = 0x8166;
    local_4fc = local_51c;
    local_4dc = local_51c;
    local_4bc = local_51c;
    local_3b4 = local_51c;
    local_234 = local_51c;
    local_c4 = local_51c;
    (**(code **)(*(int *)local_10->field_000C + 8))(7,&local_10->field_1A73,0,local_544,0);
  }
  this_00->field_0031 = 0;
  puVar1 = &this_00->field_0x1d;
  this_00->field_002D = 0x20;
  FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
  this_00->field_0031 = ((int)local_c < 1) - 1 & local_c;
  this_00->field_002D = 0x28;
  FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
  if (0 < (int)local_c) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

