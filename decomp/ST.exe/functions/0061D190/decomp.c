
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::GetMessage */

undefined4 __thiscall STLightC::GetMessage(STLightC *this,int param_1)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  STLightC *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  STLightC *pSVar9;
  InternalExceptionFrame local_60;
  SoundPosition local_1c;
  byte *local_10;
  uint local_c;
  STLightC *local_8;
  
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_light_Cpp_007d01b0,0x7a,0,iVar4,&DAT_007a4ccc,
                               s_STLightC__GetMessage_007d01d4);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    RaiseInternalException(iVar4,0,s_E____titans_nick_to_light_Cpp_007d01b0,0x7c);
    return 0xffff;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 3) {
      thunk_FUN_0061f530((int)local_8);
      thunk_FUN_0061d650((int)this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar2 == 0) {
      thunk_FUN_0061e7f0((int)local_8);
      if (this_00->field_004F == 5) {
        sVar1 = this_00->field_0030;
        if (sVar1 < 0) {
          local_1c.x = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.x = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        sVar1 = this_00->field_0032;
        if (sVar1 < 0) {
          local_1c.y = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.y = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        local_1c.unknown = this_00->field_0018;
        iVar4 = 0x476;
      }
      else {
        sVar1 = this_00->field_0030;
        if (sVar1 < 0) {
          local_1c.x = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.x = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        sVar1 = this_00->field_0032;
        if (sVar1 < 0) {
          local_1c.y = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.y = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        local_1c.unknown = this_00->field_0018;
        iVar4 = 0x475;
      }
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_2,(char *)0x0,iVar4,&local_1c,0);
      iVar4 = this_00->field_004F + 1;
      this_00->field_004F = iVar4;
      if (this_00->field_005F * 4 <= iVar4) {
        thunk_FUN_0061d6d0(this_00);
      }
      this_00->field_005B = this_00->field_005B + 0x8fc;
      thunk_FUN_0061e4f0((int)this_00);
      if (this_00->field_00A7 == '\0') {
        uVar5 = thunk_FUN_0061e110((int)this_00);
        this_00->field_00A7 = (char)uVar5;
      }
      iVar4 = thunk_FUN_0061f290(this_00,(uint)(byte)this_00->field_00A7);
      if (iVar4 == 0) goto LAB_0061d434;
    }
    else if (uVar2 == 2) {
      puVar7 = *(undefined4 **)(param_1 + 0x14);
      if (puVar7[3] == 2) {
        thunk_FUN_0061d8f0(local_8,puVar7);
        pSVar9 = this_00 + 1;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pSVar9 = 0;
          pSVar9 = (STLightC *)&pSVar9->field_0x4;
        }
        *(undefined1 *)pSVar9 = 0;
        this_00->field_00AC = this_00->field_00A8;
        thunk_FUN_0061dfe0((int)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar8 = (undefined4 *)&local_8->field_0x1c;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
      iVar4 = DAT_00808754;
      local_8->field_00AC = DAT_00808754;
      uVar2 = iVar4 * 0x41c64e6d + 0x3039;
      local_8->field_00AC = uVar2;
      local_8->field_003C = uVar2 >> 0x10 & 3;
      uVar5 = thunk_FUN_0061e110((int)local_8);
      this_00->field_00A7 = (char)uVar5;
      iVar4 = LoadNextLight(this_00);
      if (iVar4 != 0) {
        thunk_FUN_0061dd40((int)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
LAB_0061d434:
      thunk_FUN_0061d6d0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  else if (uVar2 == 0x10f) {
    local_10 = (byte *)thunk_FUN_0061d710(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_10,local_c);
    FUN_006ab060(&local_10);
  }
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

