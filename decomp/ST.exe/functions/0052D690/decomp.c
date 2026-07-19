
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeNumStr */

void __thiscall PopUpTy::ChangeNumStr(PopUpTy *this)

{
  code *pcVar1;
  PopUpTy *this_00;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  uint *puVar10;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x7e,0,iVar3,&DAT_007a4ccc,
                               s_PopUpTy__ChangeNumStr_007c6ff4);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x7e);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = local_18->field_0090;
  uVar9 = *(uint *)(iVar3 + 0x14);
  if (uVar9 == 0) {
    uVar9 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar3 + 8);
  }
  puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar4 = 0x89898989;
    puVar4 = puVar4 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = 0x1e;
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar4 = 0x89;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  local_10 = -0x18 - (int)this_00;
  local_14 = 0;
  puVar10 = &this_00->field_0018;
  do {
    iVar3 = local_14;
    if ((DAT_00807342 == 0) || (DAT_00807346 <= (byte)local_8)) {
LAB_0052d7d4:
      puVar10[0xf] = 0;
      FUN_006b2800((int)DAT_008075a8,*puVar10,0,0x13);
      FUN_006b3af0(DAT_008075a8,*puVar10);
    }
    else {
      iVar6 = this_00->field_0098;
      if (local_14 < *(int *)(iVar6 + 8)) {
        iVar8 = *(int *)(*(int *)(iVar6 + 0x14) + local_10 + (int)puVar10);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 == 0) goto LAB_0052d7d4;
      if (local_14 < *(int *)(iVar6 + 8)) {
        puVar5 = *(uint **)(*(int *)(iVar6 + 0x14) + local_10 + (int)puVar10);
      }
      else {
        puVar5 = (uint *)0x0;
      }
      uVar7 = FUN_00711110(this_00->field_0094,puVar5);
      uVar9 = *(uint *)(this_00->field_0090 + 4);
      if ((int)uVar9 <= (int)uVar7) {
        uVar7 = uVar9;
      }
      puVar10[0xf] = uVar7;
      FUN_006b2800((int)DAT_008075a8,*puVar10,uVar7,0x13);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar10,0xffffffff,0xd,local_c);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar10);
    }
    bVar2 = (byte)local_8 + 1;
    local_14 = iVar3 + 1;
    puVar10 = puVar10 + 1;
    local_c = local_c + 0x13;
    local_8 = CONCAT31(local_8._1_3_,bVar2);
    if (0xe < bVar2) {
      iVar3 = *(int *)(this_00->field_0098 + 8);
      bVar2 = DAT_00807346;
      if (iVar3 < (int)(uint)DAT_00807346) {
        bVar2 = (byte)iVar3;
      }
      this_00->field_009C = bVar2;
      local_8 = (uint)local_8._1_3_ << 8;
      if (DAT_00807346 != 0) {
        do {
          if ((int)(local_8 & 0xff) < *(int *)(this_00->field_0098 + 8)) {
            iVar3 = *(int *)(*(int *)(this_00->field_0098 + 0x14) + (local_8 & 0xff) * 4);
          }
          else {
            iVar3 = 0;
          }
          if (iVar3 != 0) {
            OutStr(this_00,local_8);
          }
          bVar2 = (byte)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < DAT_00807346);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

