
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::GetMessage */

undefined4 __thiscall STLightC::GetMessage(STLightC *this,AnonShape_0061D190_F4B28A60 *param_1)

{
  short sVar1;
  code *pcVar2;
  STJellyGunC *this_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  AnonNested_0061D190_0014_96ED958D *pAVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_60;
  SoundPosition local_1c;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STJellyGunC *local_8;
  
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = (STJellyGunC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_light_Cpp_007d01b0,0x7a,0,iVar3,&DAT_007a4ccc,
                               s_STLightC__GetMessage_007d01d4);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_light_Cpp_007d01b0,0x7c);
    return 0xffff;
  }
  uVar4 = param_1->field_0010;
  if (uVar4 < 4) {
    if (uVar4 == 3) {
      thunk_FUN_0061f530((AnonShape_0061F530_4582158C *)local_8);
      thunk_FUN_0061d650((AnonShape_0061D650_84237B09 *)this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar4 == 0) {
      thunk_FUN_0061e7f0((AnonShape_0061E7F0_1BC555A1 *)local_8);
      if (*(int *)((int)&this_00->field_004E + 1) == 5) {
        sVar1 = *(short *)&this_00->field_0x30;
        if (sVar1 < 0) {
          local_1c.x = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.x = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        sVar1 = *(short *)&this_00->field_0x32;
        if (sVar1 < 0) {
          local_1c.y = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.y = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        local_1c.unknown = this_00->field_0018;
        iVar3 = 0x476;
      }
      else {
        sVar1 = *(short *)&this_00->field_0x30;
        if (sVar1 < 0) {
          local_1c.x = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.x = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        sVar1 = *(short *)&this_00->field_0x32;
        if (sVar1 < 0) {
          local_1c.y = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                              (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.y = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
        }
        local_1c.unknown = this_00->field_0018;
        iVar3 = 0x475;
      }
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_2,(char *)0x0,iVar3,&local_1c,0);
      iVar3 = *(int *)&this_00->field_005F;
      iVar6 = *(int *)((int)&this_00->field_004E + 1) + 1;
      *(int *)((int)&this_00->field_004E + 1) = iVar6;
      if (iVar3 * 4 <= iVar6) {
        thunk_FUN_0061d6d0(this_00);
      }
      *(int *)&this_00->field_005B = *(int *)&this_00->field_005B + 0x8fc;
      thunk_FUN_0061e4f0((AnonShape_0061E4F0_131B61D9 *)this_00);
      if (this_00->field_0xa7 == '\0') {
        uVar5 = thunk_FUN_0061e110((AnonShape_0061E110_A0361859 *)this_00);
        this_00->field_0xa7 = (char)uVar5;
      }
      iVar3 = thunk_FUN_0061f290(this_00,(uint)(byte)this_00->field_0xa7);
      if (iVar3 == 0) goto LAB_0061d434;
    }
    else if (uVar4 == 2) {
      pAVar7 = param_1->field_0014;
      if (pAVar7->field_000C == 2) {
        thunk_FUN_0061d8f0(local_8,&pAVar7->field_0000);
        puVar8 = (undefined4 *)&this_00->field_0xb0;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined1 *)puVar8 = 0;
        *(undefined4 *)&this_00->field_0xac = *(undefined4 *)&this_00->field_0xa8;
        thunk_FUN_0061dfe0((int)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar8 = (undefined4 *)&local_8->field_0x1c;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = pAVar7->field_0000;
        pAVar7 = (AnonNested_0061D190_0014_96ED958D *)&pAVar7->field_0x4;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = *(undefined2 *)&pAVar7->field_0000;
      iVar3 = DAT_00808754;
      *(int *)&local_8->field_0xac = DAT_00808754;
      uVar4 = iVar3 * 0x41c64e6d + 0x3039;
      *(uint *)&local_8->field_0xac = uVar4;
      uVar4 = uVar4 >> 0x10 & 3;
      local_8->field_003C = (short)uVar4;
      local_8->field_003E = (short)(uVar4 >> 0x10);
      uVar5 = thunk_FUN_0061e110((AnonShape_0061E110_A0361859 *)local_8);
      this_00->field_0xa7 = (char)uVar5;
      iVar3 = LoadNextLight((STLightC *)this_00);
      if (iVar3 != 0) {
        thunk_FUN_0061dd40((AnonShape_0061DD40_21C2820F *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
LAB_0061d434:
      thunk_FUN_0061d6d0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  else if (uVar4 == 0x10f) {
    local_10 = thunk_FUN_0061d710(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
  }
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

