#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_light.cpp

// 0061D190 STLightC::GetMessage
#line 4 "decomp/ST.exe/functions/0061D190/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004026EE|0061D190; family_names=STLightC::GetMessage; ret4=6;
   direct_offsets={10:1,14:1,18:3,1c:1} */

int __thiscall st::fn_0061D190(STLightC *this,STMessage *message)

{
  uint uVar1;
  short sVar2;
  STMessageId SVar3;
  STLightC *this_00;
  int iVar5;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  STLightC *pSVar10;
  InternalExceptionFrame local_60;
  SoundPosition local_1c;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STLightC *local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\nick\\to_light.Cpp",0x7a,0,iVar5,"%s",
                               "STLightC::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\nick\\to_light.Cpp",0x7c);
    return 0xffff;
  }
  SVar3 = message->id;
  if (SVar3 < 4) {
    if (SVar3 == MESS_SHARED_0003) {
      st::fn_00402C9D(local_8);
      st::fn_004058C6(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (SVar3 == MESS_ID_NONE) {
      st::fn_00402072(local_8);
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
        local_1c.unknown = (int)this_00->field_0018;
        iVar7 = 0x476;
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
        local_1c.unknown = (int)this_00->field_0018;
        iVar7 = 0x475;
      }
      st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,iVar7,&local_1c,0);
      iVar7 = this_00->field_004F + 1;
      this_00->field_004F = iVar7;
      if (this_00->field_005F * 4 <= iVar7) {
        st::fn_00401046(this_00);
      }
      this_00->field_005B = this_00->field_005B + 0x8fc;
      st::fn_004033E1(this_00);
      if (this_00->field_00A7 == '\0') {
        uVar5 = st::fn_00403CF1(this_00);
        this_00->field_00A7 = (char)uVar5;
      }
      iVar7 = st::fn_00401CE9(this_00,(uint)(byte)this_00->field_00A7);
      if (iVar7 == 0) goto LAB_0061d434;
    }
    else if (SVar3 == MESS_ID_CREATE) {
      puVar8 = (byte *)((message->arg0).ptr);
      if (puVar8[3] == 2) {
        st::fn_00403305(local_8,puVar8);
        pSVar10 = this_00 + 1;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          pSVar10->vtable = nullptr;
          pSVar10 = (STLightC *)&pSVar10->field_0x4;
        }
        *(undefined1 *)&pSVar10->vtable = 0;
        this_00->field_00AC = this_00->field_00A8;
        st::fn_00401424(this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar9 = (byte *)&local_8->field_0x1c;
      memmove(puVar9, puVar8, 0x2a); /* compiler REP MOVS byte copy */
      iVar7 = DAT_00808754;
      local_8->field_00AC = DAT_00808754;
      uVar1 = iVar7 * 0x41c64e6d + 0x3039;
      local_8->field_00AC = uVar1;
      local_8->field_003C = uVar1 >> 0x10 & 3;
      uVar5 = st::fn_00403CF1(local_8);
      this_00->field_00A7 = (char)uVar5;
      iVar7 = st::fn_00405D6C(this_00);
      if (iVar7 != 0) {
        st::fn_00402BAD((RecoveredRecord_STLightC_0061DD40 *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
LAB_0061d434:
      st::fn_00401046(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  else if (SVar3 == MESS_SHARED_010F) {
    local_10 = st::fn_0040187A(local_8,(int *)&local_c);
    st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    st::fn_006AB060(&local_10);
  }
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

// 0061DB80 STLightC::LoadNextLight
#line 4 "decomp/ST.exe/functions/0061DB80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_light.Cpp
   STLightC::LoadNextLight */

undefined4 __thiscall st::fn_0061DB80(STLightC *this)

{
  int iVar1;
  STLightC *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  STLightC_field_00A3DArray *pSVar5;
  int iVar6;
  undefined4 uVar6;
  int iVar7;
  InternalExceptionFrame local_50;
  STLightC *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 == 0) {
    puVar3 = st::fn_00709AF0
                       (PTR_00806774,CASE_0,(&PTR_s_light01_007d0164)[local_c->field_003C],
                        0xffffffff,0,1,0,nullptr);
    st::fn_004050D3(this_00,puVar3,(int *)&local_8,0);
    puVar4 = st::fn_006AAC70(this_00->field_0093 << 4);
    this_00->field_0057 = puVar4;
    for (iVar7 = (this_00->field_0093 & 0xfffffffU) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar7 = 0;
    if (0 < this_00->field_0093) {
      do {
        *(undefined4 *)((int)this_00->field_0057 + iVar7 * 4) = 0xffffffff;
        iVar1 = iVar7 + this_00->field_0093 * 3;
        iVar7 = iVar7 + 1;
        *(undefined4 *)((int)this_00->field_0057 + iVar1 * 4) = 0xffffffff;
      } while (iVar7 < this_00->field_0093);
    }
    *(undefined4 *)this_00->field_0057 = 0;
    *(undefined4 *)((int)this_00->field_0057 + this_00->field_0093 * 0xc) = 0;
    pSVar5 = (STLightC_field_00A3DArray *)
             st::fn_006AE290(nullptr,local_8,0x30,10);
    this_00->field_00A3 = pSVar5;
    g_currentExceptionFrame = local_50.previous;
    return 1;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\nick\\to_light.Cpp",0x13b,0,iVar2,"%s",
                             "STLightC::LoadNextLight");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\nick\\to_light.Cpp",0x13d);
  return 0xffff;
}

