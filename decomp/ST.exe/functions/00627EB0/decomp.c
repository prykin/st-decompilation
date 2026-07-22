#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::GetMessage

   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405C9A|00627EB0; family_names=STParticleC::GetMessage; ret4=14;
   direct_offsets={10:1,14:4,18:0,1c:0} */

int __thiscall STParticleC::GetMessage(STParticleC *this,STMessage *message)

{
  int *piVar1;
  char cVar2;
  STMessageId SVar3;
  uint uVar4;
  uint *puVar5;
  code *pcVar6;
  short sVar7;
  float fVar8;
  AnonShape_00629F90_C3CBACCB *this_00;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  AnonShape_00629F90_C3CBACCB *pAVar13;
  VisibleClassTy *pVVar14;
  bool bVar15;
  InternalExceptionFrame local_7c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  void *local_14;
  AnonShape_00629F90_C3CBACCB *local_10;
  float local_c;
  float local_8;

  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_10 = (AnonShape_00629F90_C3CBACCB *)this;
  iVar9 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\nick\\to_Part.Cpp",0x218,0,iVar9,"%s",
                                "STParticleC::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar9,0,"E:\\__titans\\nick\\to_Part.Cpp",0x21a);
    return 0xffff;
  }
  SVar3 = message->id;
  if (MESS_SHARED_010F < SVar3) {
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_010F) {
    local_14 = (void *)thunk_FUN_0062af40(local_10,&local_18);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if (SVar3 != MESS_ID_NONE) {
    if (SVar3 != MESS_ID_CREATE) {
      if (SVar3 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      uVar10 = *(uint *)((int)&local_10[2].field_0034 + 2);
      if ((int)uVar10 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006e8ba0(PTR_00807598,uVar10);
      *(undefined4 *)((int)&this_00[2].field_0034 + 2) = 0xffffffff;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    puVar12 = (message->arg0).ptr;
    if (puVar12[3] != 2) {
      pAVar13 = local_10;
      for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pAVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        pAVar13 = (AnonShape_00629F90_C3CBACCB *)&pAVar13->field_0x4;
      }
      *(undefined2 *)pAVar13 = *(undefined2 *)puVar12;
      sub_00629F90((STParticleC *)local_10,(STParticleC *)local_10,g_playSystem_00802A38->field_00E4
                  );
      InitVisibelFlight((STParticleC *)this_00,(uint)(byte)this_00[2].field_0x46);
      iVar9 = *(int *)&this_00->field_0x3c;
      if (iVar9 != 0) {
        *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 1;
        this_00[3].field_002C = iVar9;
        uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
        if ((int)uVar10 < 0) {
          g_currentExceptionFrame = local_7c.previous;
          return 0;
        }
        FUN_006eab60(PTR_00807598,uVar10);
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 2;
      if ((int)uVar10 < 0) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      FUN_006eaaa0(PTR_00807598,uVar10,0);
      *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    sub_0062AEF0((STParticleC *)local_10,puVar12);
    memset(&this_00[2].field_0x47, 0, 0x2d); /* compiler bulk-zero initialization */
    iVar9 = *(int *)((int)&this_00[2].field_0030 + 2);
    if (iVar9 == 3) {
      sub_0062A860((STParticleC *)this_00);
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (iVar9 != 2) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    InitVisibelFlight((STParticleC *)this_00,1);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  if ((local_10[2].field_0x46 == '\0') && (local_10->field_0x40 != '\0')) {
    uVar10 = sub_0062B4A0((STParticleC *)local_10);
    this_00[2].field_0x46 = (char)uVar10;
    if ((char)uVar10 != '\0') {
      sub_00629E60((STParticleC *)this_00,0);
    }
  }
  switch(*(undefined4 *)((int)&this_00[2].field_0030 + 2)) {
  case 1:
    iVar9 = *(int *)&this_00->field_0x3c + -1;
    *(int *)&this_00->field_0x3c = iVar9;
    if (0 < iVar9) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 2;
    if (*(int *)((int)&this_00[2].field_0024 + 2) <= *(int *)((int)&this_00[2].field_0020 + 2)) {
      *(undefined4 *)((int)&this_00[2].field_0020 + 2) = 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
    if ((int)uVar10 < 0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006eaaa0(PTR_00807598,uVar10,0);
    uVar10 = *(uint *)((int)&this_00[2].field_0020 + 2);
    uVar4 = *(uint *)((int)&this_00[2].field_0034 + 2);
    *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
    FUN_006ea270(PTR_00807598,uVar4,0,uVar10);
    uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
    local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
    local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
    fVar8 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0028 + 2) = fVar8;
    FUN_006ea960(PTR_00807598,uVar10,local_c,local_8,fVar8 + _DAT_007904fc);
    pVVar14 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar9 = *(int *)&this_00[1].field_0x6;
    sVar7 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      local_c = (float)((short)(((short)(iVar9 / 200) + sVar7) -
                               (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar9 / 200) + sVar7) -
                                   (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    iVar9 = *(int *)&this_00[1].field_0x2;
    sVar7 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar7) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar7) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar11 = *(int *)&this_00->field_0x46;
    sVar7 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar7) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar7) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    if (((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
       ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar11,iVar9
                            ,&local_1c,&local_20), (int)local_c < 0 ||
        (local_24 = local_1c, local_28 = local_20, 4 < (int)local_c)))) goto LAB_006282e0;
LAB_00628286:
    if (((local_24 < 0) || (pVVar14->field_0030 <= local_24)) ||
       ((g_centeredOffsets5[(int)local_c] + local_28 < 0 ||
        (pVVar14->field_0034 <= g_centeredOffsets5[(int)local_c] + local_28)))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((bVar15) && (pVVar14->field_004C != (byte *)0x0)) {
      bVar15 = pVVar14->field_004C
               [local_24 + (g_centeredOffsets5[(int)local_c] + local_28) * pVVar14->field_0030] != 0
      ;
    }
    else {
      bVar15 = true;
    }
    break;
  case 2:
    iVar9 = sub_0062A370((STParticleC *)this_00,g_playSystem_00802A38->field_00E4);
    if (iVar9 < 1) {
      sub_00629830((STParticleC *)this_00);
      uVar10 = sub_0062B4A0((STParticleC *)this_00);
      this_00[2].field_0x46 = (char)uVar10;
      if ((char)uVar10 == '\0') {
        InitVisibelDeton((STParticleC *)this_00,0);
        uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
        if (-1 < (int)uVar10) {
          FUN_006e8ba0(PTR_00807598,uVar10);
          *(undefined4 *)((int)&this_00[2].field_0034 + 2) = 0xffffffff;
        }
      }
      else {
        InitVisibelDeton((STParticleC *)this_00,1);
      }
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 3;
      if (iVar9 != -1) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_00[1].field_002C + 2) = 2;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    uVar10 = g_playSystem_00802A38->field_00E4 - *(int *)&this_00[2].field_0x1a;
    if ((this_00[2].field_0x46 != '\0') && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      if ((*(uint *)&this_00->field_0014 & 0xff00) == 0x400) {
        iVar9 = *(int *)&this_00[1].field_0x6;
        if (*(int *)&this_00[1].field_0x12 + 5 <= iVar9) goto LAB_0062838a;
      }
      else {
        iVar9 = *(int *)&this_00[1].field_0x6;
      }
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,0,0,*(int *)&this_00->field_0x46,
                 *(int *)&this_00[1].field_0x2,iVar9,0,0,0,0,0,0,-1,0,0);
    }
LAB_0062838a:
    if (uVar10 < 0x19) {
LAB_006283bd:
      piVar1 = (int *)((int)&this_00[2].field_0020 + 2);
      *piVar1 = *piVar1 + 1;
    }
    else if (uVar10 < 0x2d) {
      if ((g_playSystem_00802A38->field_00E4 & 1) == 0) goto LAB_006283bd;
    }
    else if (g_playSystem_00802A38->field_00E4 % 3 == 0) goto LAB_006283bd;
    if (*(int *)((int)&this_00[2].field_0024 + 2) <= *(int *)((int)&this_00[2].field_0020 + 2)) {
      *(undefined4 *)((int)&this_00[2].field_0020 + 2) = 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0,
                 *(uint *)((int)&this_00[2].field_0020 + 2));
    uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
    local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
    local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
    fVar8 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0028 + 2) = fVar8;
    FUN_006ea960(PTR_00807598,uVar10,local_c,local_8,fVar8 + _DAT_007904fc);
    pVVar14 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar9 = *(int *)&this_00[1].field_0x6;
    sVar7 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      local_c = (float)((short)(((short)(iVar9 / 200) + sVar7) -
                               (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar9 / 200) + sVar7) -
                                   (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    iVar9 = *(int *)&this_00[1].field_0x2;
    sVar7 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar7) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar7) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar11 = *(int *)&this_00->field_0x46;
    sVar7 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar7) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar7) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar11,iVar9
                            ,&local_24,&local_28), -1 < (int)local_c)) && ((int)local_c < 5))
    goto LAB_00628286;
LAB_006282e0:
    bVar15 = true;
    break;
  case 3:
    cVar2 = *(char *)((int)&this_00[2].field_002C + 3);
    iVar9 = *(int *)((int)&this_00[2].field_0020 + 2) + 1;
    *(int *)((int)&this_00[2].field_0020 + 2) = iVar9;
    if ((((cVar2 != '\0') && (iVar9 == 0xf)) && (this_00[2].field_0x46 != '\0')) &&
       (puVar5 = *(uint **)((int)&this_00[2].field_0034 + 2), -1 < (int)puVar5)) {
      FUN_006e9cb0(PTR_00807598,puVar5,1);
    }
    if (((*(int *)((int)&this_00[2].field_0020 + 2) == *(int *)((int)&this_00[2].field_0024 + 2)) &&
        (this_00[2].field_0x46 != '\0')) &&
       (puVar5 = *(uint **)((int)&this_00[2].field_0034 + 2), -1 < (int)puVar5)) {
      FUN_006e9d40(PTR_00807598,puVar5,0);
    }
    if (((*(int *)((int)&this_00[2].field_0020 + 2) == 5) &&
        (iVar9 = thunk_FUN_0062b300((int)this_00), iVar9 != 0)) &&
       (*(int *)((int)&this_00[1].field_002C + 2) != 2)) {
      thunk_FUN_0062af90(this_00,*(int *)&this_00->field_0x46,*(int *)&this_00[1].field_0x2,
                         *(int *)&this_00[1].field_0x6);
    }
    uVar10 = *(uint *)((int)&this_00[2].field_0020 + 2);
    if (*(int *)((int)&this_00[2].field_0028 + 2) <= (int)uVar10) {
      sub_0062A860((STParticleC *)this_00);
      *(undefined4 *)((int)&this_00[2].field_0030 + 2) = 0;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if (this_00[2].field_0x46 == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    if ((int)uVar10 < *(int *)((int)&this_00[2].field_0024 + 2)) {
      FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0,uVar10);
      uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
      local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
      local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
      fVar8 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
      *(float *)((int)&this_00[1].field_0028 + 2) = fVar8;
      FUN_006ea960(PTR_00807598,uVar10,local_c,local_8,fVar8 + _DAT_007904fc);
      pVVar14 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        iVar9 = *(int *)&this_00[1].field_0x6;
        sVar7 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          local_c = (float)((short)(((short)(iVar9 / 200) + sVar7) -
                                   (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
        }
        else {
          local_c = (float)(int)(short)(((short)(iVar9 / 200) + sVar7) -
                                       (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
        }
        iVar9 = *(int *)&this_00[1].field_0x2;
        sVar7 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar7) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar7) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        iVar11 = *(int *)&this_00->field_0x46;
        if (iVar11 < 0) {
          iVar11 = (short)(iVar11 / 0xc9) + -1;
        }
        else {
          iVar11 = (int)(short)(iVar11 / 0xc9);
        }
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar11,
                                iVar9,&local_2c,&local_30), (int)local_c < 0)) || (4 < (int)local_c)
           ) {
          bVar15 = true;
        }
        else {
          if (((local_2c < 0) || (pVVar14->field_0030 <= local_2c)) ||
             ((g_centeredOffsets5[(int)local_c] + local_30 < 0 ||
              (pVVar14->field_0034 <= g_centeredOffsets5[(int)local_c] + local_30)))) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          if ((bVar15) && (pVVar14->field_004C != (byte *)0x0)) {
            bVar15 = pVVar14->field_004C
                     [local_2c + (g_centeredOffsets5[(int)local_c] + local_30) * pVVar14->field_0030
                     ] != 0;
          }
          else {
            bVar15 = true;
          }
        }
        cVar2 = *(char *)((int)&this_00[2].field_0030 + 1);
        if (bVar15) {
          if (cVar2 == '\0') {
            FUN_006eaaa0(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0);
            *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
          }
        }
        else if (cVar2 == '\x01') {
          FUN_006eab60(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2));
          *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 0;
        }
      }
    }
    if (*(char *)((int)&this_00[2].field_002C + 3) == '\0') {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar9 = *(int *)((int)&this_00[2].field_0020 + 2);
    if (iVar9 < 0xf) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    switch(*(uint *)&this_00->field_0014 >> 8 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
      goto switchD_006288e6_caseD_0;
    default:
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  case 4:
    uVar10 = *(uint *)((int)&this_00[2].field_0034 + 2);
    local_c = (float)*(int *)&this_00->field_0x46 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0020 + 2) = local_c;
    local_8 = (float)*(int *)&this_00[1].field_0x2 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0024 + 2) = local_8;
    fVar8 = (float)*(int *)&this_00[1].field_0x6 * _DAT_007904f8 * _DAT_007904f0;
    *(float *)((int)&this_00[1].field_0028 + 2) = fVar8;
    FUN_006ea960(PTR_00807598,uVar10,local_c,local_8,fVar8 + _DAT_007904fc);
    pVVar14 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
    iVar9 = *(int *)&this_00[1].field_0x6;
    sVar7 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      local_c = (float)((short)(((short)(iVar9 / 200) + sVar7) -
                               (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      local_c = (float)(int)(short)(((short)(iVar9 / 200) + sVar7) -
                                   (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    iVar9 = *(int *)&this_00[1].field_0x2;
    sVar7 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar7) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar7) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar11 = *(int *)&this_00->field_0x46;
    sVar7 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar7) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar7) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar11,iVar9
                            ,&local_34,&local_38), (int)local_c < 0)) || (4 < (int)local_c)) {
      bVar15 = true;
    }
    else {
      if (((local_34 < 0) || (pVVar14->field_0030 <= local_34)) ||
         ((g_centeredOffsets5[(int)local_c] + local_38 < 0 ||
          (pVVar14->field_0034 <= g_centeredOffsets5[(int)local_c] + local_38)))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if ((bVar15) && (pVVar14->field_004C != (byte *)0x0)) {
        bVar15 = pVVar14->field_004C
                 [(g_centeredOffsets5[(int)local_c] + local_38) * pVVar14->field_0030 + local_34] !=
                 0;
      }
      else {
        bVar15 = true;
      }
    }
    cVar2 = *(char *)((int)&this_00[2].field_0030 + 1);
    goto joined_r0x00628af1;
  default:
    goto switchD_006280c4_default;
  }
  cVar2 = *(char *)((int)&this_00[2].field_0030 + 1);
joined_r0x00628af1:
  if (bVar15) {
    if (cVar2 == '\0') {
      FUN_006eaaa0(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),0);
      *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 1;
      g_currentExceptionFrame = local_7c.previous;
      return 0;
    }
  }
  else if (cVar2 == '\x01') {
    FUN_006eab60(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2));
    *(undefined1 *)((int)&this_00[2].field_0030 + 1) = 0;
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
switchD_006280c4_default:
  g_currentExceptionFrame = local_7c.previous;
  return 0;
switchD_006288e6_caseD_0:
  if (this_00->field_0014 < 4) {
    FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),1,iVar9 + 3);
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  FUN_006ea270(PTR_00807598,*(uint *)((int)&this_00[2].field_0034 + 2),1,iVar9 - 0xf);
  g_currentExceptionFrame = local_7c.previous;
  return 0;
}

