#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004026EE|0061D190; family_names=STLightC::GetMessage; ret4=6;
   direct_offsets={10:1,14:1,18:3,1c:1} */

int __thiscall STLightC::GetMessage(STLightC *this,STMessage *message)

{
  uint uVar1;
  short sVar2;
  STMessageId SVar3;
  code *pcVar4;
  STLightC *this_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  STLightC *pSVar10;
  InternalExceptionFrame local_60;
  SoundPosition local_1c;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STLightC *local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_light.Cpp",0x7a,0,iVar5,"%s",
                               "STLightC::GetMessage");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_light.Cpp",0x7c);
    return 0xffff;
  }
  SVar3 = message->id;
  if (SVar3 < 4) {
    if (SVar3 == MESS_SHARED_0003) {
      sub_0061F530(local_8);
      sub_0061D650(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar3 == MESS_ID_NONE) {
      thunk_FUN_0061e7f0(local_8);
      if (this_00->field_004F == 5) {
        sVar2 = this_00->field_0030;
        if (sVar2 < 0) {
          local_1c.x = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.x = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                   (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        sVar2 = this_00->field_0032;
        if (sVar2 < 0) {
          local_1c.y = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.y = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                   (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        local_1c.unknown = this_00->field_0018;
        iVar5 = 0x476;
      }
      else {
        sVar2 = this_00->field_0030;
        if (sVar2 < 0) {
          local_1c.x = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.x = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                   (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        sVar2 = this_00->field_0032;
        if (sVar2 < 0) {
          local_1c.y = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                              (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_1c.y = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                   (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
        }
        local_1c.unknown = this_00->field_0018;
        iVar5 = 0x475;
      }
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_2,(char *)0x0,iVar5,&local_1c,0);
      iVar5 = this_00->field_004F + 1;
      this_00->field_004F = iVar5;
      if (this_00->field_005F * 4 <= iVar5) {
        sub_0061D6D0(this_00);
      }
      this_00->field_005B = this_00->field_005B + 0x8fc;
      sub_0061E4F0(this_00);
      if (this_00->field_00A7 == '\0') {
        uVar6 = thunk_FUN_0061e110(this_00);
        this_00->field_00A7 = (char)uVar6;
      }
      iVar5 = sub_0061F290(this_00,(uint)(byte)this_00->field_00A7);
      if (iVar5 == 0) goto LAB_0061d434;
    }
    else if (SVar3 == MESS_ID_CREATE) {
      puVar8 = (message->arg0).ptr;
      if (puVar8[3] == 2) {
        sub_0061D8F0(local_8,puVar8);
        pSVar10 = this_00 + 1;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          pSVar10->vtable = (STLightCVTable *)0x0;
          pSVar10 = (STLightC *)&pSVar10->field_0x4;
        }
        *(undefined1 *)&pSVar10->vtable = 0;
        this_00->field_00AC = this_00->field_00A8;
        thunk_FUN_0061dfe0(this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar9 = (undefined4 *)&local_8->field_0x1c;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
      iVar5 = DAT_00808754;
      local_8->field_00AC = DAT_00808754;
      uVar1 = iVar5 * 0x41c64e6d + 0x3039;
      local_8->field_00AC = uVar1;
      local_8->field_003C = uVar1 >> 0x10 & 3;
      uVar6 = thunk_FUN_0061e110(local_8);
      this_00->field_00A7 = (char)uVar6;
      iVar5 = LoadNextLight(this_00);
      if (iVar5 != 0) {
        thunk_FUN_0061dd40((AnonShape_0061DD40_21C2820F *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
LAB_0061d434:
      sub_0061D6D0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  else if (SVar3 == MESS_SHARED_010F) {
    local_10 = sub_0061D710(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
  }
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

