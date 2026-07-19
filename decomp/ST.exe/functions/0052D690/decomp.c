
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeNumStr */

void __thiscall PopUpTy::ChangeNumStr(PopUpTy *this)

{
  code *pcVar1;
  PopUpTy *this_00;
  byte bVar2;
  PopUpTy PVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  PopUpTy *pPVar11;
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
  iVar4 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x7e,0,iVar4,&DAT_007a4ccc,
                               s_PopUpTy__ChangeNumStr_007c6ff4);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x7e);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = *(int *)(local_18 + 0x90);
  uVar10 = *(uint *)(iVar4 + 0x14);
  if (uVar10 == 0) {
    uVar10 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar4 + 8);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar5 = 0x89898989;
    puVar5 = puVar5 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = 0x1e;
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar5 = 0x89;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  local_10 = -0x18 - (int)this_00;
  local_14 = 0;
  pPVar11 = this_00 + 0x18;
  do {
    iVar4 = local_14;
    if ((DAT_00807342 == 0) || ((byte)DAT_00807346 <= (byte)local_8._0_1_)) {
LAB_0052d7d4:
      *(uint *)(pPVar11 + 0x3c) = 0;
      FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar11,0,0x13);
      FUN_006b3af0(DAT_008075a8,*(uint *)pPVar11);
    }
    else {
      iVar7 = *(int *)(this_00 + 0x98);
      if (local_14 < *(int *)(iVar7 + 8)) {
        iVar9 = *(int *)(pPVar11 + *(int *)(iVar7 + 0x14) + local_10);
      }
      else {
        iVar9 = 0;
      }
      if (iVar9 == 0) goto LAB_0052d7d4;
      if (local_14 < *(int *)(iVar7 + 8)) {
        puVar6 = *(uint **)(pPVar11 + *(int *)(iVar7 + 0x14) + local_10);
      }
      else {
        puVar6 = (uint *)0x0;
      }
      uVar10 = FUN_00711110(*(void **)(this_00 + 0x94),puVar6);
      if ((int)*(uint *)(*(int *)(this_00 + 0x90) + 4) <= (int)uVar10) {
        uVar10 = *(uint *)(*(int *)(this_00 + 0x90) + 4);
      }
      *(uint *)(pPVar11 + 0x3c) = uVar10;
      FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar11,uVar10,0x13);
      FUN_006b3640(DAT_008075a8,*(uint *)pPVar11,0xffffffff,0xd,local_c);
      FUN_006b3430(DAT_008075a8,*(uint *)pPVar11);
    }
    bVar2 = (char)local_8._0_1_ + 1;
    local_14 = iVar4 + 1;
    pPVar11 = pPVar11 + 4;
    local_c = local_c + 0x13;
    local_8 = CONCAT31(local_8._1_3_,bVar2);
    if (0xe < bVar2) {
      PVar3 = DAT_00807346;
      if (*(int *)(*(int *)(this_00 + 0x98) + 8) < (int)(uint)(byte)DAT_00807346) {
        PVar3 = SUB41(*(int *)(*(int *)(this_00 + 0x98) + 8),0);
      }
      this_00[0x9c] = PVar3;
      local_8 = (uint)local_8._1_3_ << 8;
      if (DAT_00807346 != (PopUpTy)0x0) {
        do {
          if ((int)(local_8 & 0xff) < *(int *)(*(int *)(this_00 + 0x98) + 8)) {
            iVar4 = *(int *)(*(int *)(*(int *)(this_00 + 0x98) + 0x14) + (local_8 & 0xff) * 4);
          }
          else {
            iVar4 = 0;
          }
          if (iVar4 != 0) {
            OutStr(this_00,local_8);
          }
          PVar3 = (PopUpTy)((char)local_8._0_1_ + 1);
          local_8 = CONCAT31(local_8._1_3_,PVar3);
        } while ((byte)PVar3 < (byte)DAT_00807346);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

