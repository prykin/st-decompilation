
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00521CF0 -> 00715360 @ 00522425 | 00521CF0 -> 00715360 @ 005224DC | 0054D640 ->
   00715360 @ 0054D6E4 | 0054D640 -> 00715360 @ 0054DABF | 0054D640 -> 00715360 @ 0054DEFA |
   0054E4F0 -> 00715360 @ 0054E5AD | 0054EBB0 -> 00715360 @ 0054EBEC | 0054EC20 -> 00715360 @
   0054ED22 | 0054F1D0 -> 00715360 @ 0054F7C9 | 0054F1D0 -> 00715360 @ 0054F84E | 0054F1D0 ->
   00715360 @ 0054FA3D | 0054F1D0 -> 00715360 @ 0054FA89 | 005505D0 -> 00715360 @ 00550616 |
   005505D0 -> 00715360 @ 00550794 | 00550BB0 -> 00715360 @ 00550C0F | 0056A500 -> 00715360 @
   0056A55F | 0056A500 -> 00715360 @ 0056A582 | 005ACB30 -> 00715360 @ 005ACB95 | 005AD390 ->
   00715360 @ 005ADB64 | 005B0BA0 -> 00715360 @ 005B2007 | 005BAE00 -> 00715360 @ 005BB1CA |
   005C7800 -> 00715360 @ 005C7BE7 | 005C7800 -> 00715360 @ 005C7C04 | 005CD9A0 -> 00715360 @
   005CDA56 | 005CDB20 -> 00715360 @ 005CDC9D | 005CDB20 -> 00715360 @ 005CDDF5 | 005CDF60 ->
   00715360 @ 005CE02D | 005CE0E0 -> 00715360 @ 005CE2AA | 005CE0E0 -> 00715360 @ 005CE519 |
   005CE0E0 -> 00715360 @ 005CE5AA | 005CE0E0 -> 00715360 @ 005CEAB5 | 005CE0E0 -> 00715360 @
   005CEB25 | 005CE0E0 -> 00715360 @ 005CEBC7 | 005CE0E0 -> 00715360 @ 005CEBDF | 005CE0E0 ->
   00715360 @ 005CEC46 | 005CE0E0 -> 00715360 @ 005CECAE | 005CE0E0 -> 00715360 @ 005CF57F |
   005CFE50 -> 00715360 @ 005CFEAD | 005D1400 -> 00715360 @ 005D1694 | 005D1400 -> 00715360 @
   005D2160 | 005D1400 -> 00715360 @ 005D25BA | 005D1400 -> 00715360 @ 005D2743 | 005D1400 ->
   00715360 @ 005D28BA | 005DAF20 -> 00715360 @ 005DAF6D | 005DAF20 -> 00715360 @ 005DAF91 |
   005E84D0 -> 00715360 @ 005E8AA1 | 005E84D0 -> 00715360 @ 005E8E96 | 005E84D0 -> 00715360 @
   005E9367 | 005EA680 -> 00715360 @ 005EAB1B */

int __cdecl
FUN_00715360(int *param_1,int param_2,char param_3,char *param_4,uint param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  char *pcVar5;
  InternalExceptionFrame local_6c;
  char local_28;
  undefined4 local_27;
  char local_23 [23];
  uint local_c;
  AnonShape_00715360_91615618 *local_8;
  
  local_8 = (AnonShape_00715360_91615618 *)0x0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar1 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    if (local_8 != (AnonShape_00715360_91615618 *)0x0) {
      FreeAndNull(&local_8);
    }
    return iVar1;
  }
  if (((int)param_5 < 0x16) || (param_4 == (char *)0x0)) {
    local_28 = param_3;
    local_27 = param_7;
    if ((0 < (int)param_5) && (param_4 != (char *)0x0)) {
      pcVar5 = local_23;
      for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)param_4;
        param_4 = param_4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar2 = param_5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *param_4;
        param_4 = param_4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    Library::DKW::DDX::FUN_006b7650(param_1,param_2,&local_28,param_5 + 5);
  }
  else {
    if (param_6 == 0) {
      uVar2 = param_5 + 5;
      local_c = uVar2;
      local_8 = (AnonShape_00715360_91615618 *)Library::DKW::LIB::FUN_006aac10(uVar2);
      *(char *)local_8 = param_3;
      local_8->field_0001 = param_7;
      if (0 < (int)param_5) {
        puVar4 = &local_8->field_0005;
        for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *(uint *)param_4;
          param_4 = (char *)((int)param_4 + 4);
          puVar4 = puVar4 + 1;
        }
        for (uVar3 = param_5 & 3; uVar2 = local_c, uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)puVar4 = (char)*(uint *)param_4;
          param_4 = (char *)((int)param_4 + 1);
          puVar4 = (uint *)((int)puVar4 + 1);
        }
      }
    }
    else {
      local_8 = (AnonShape_00715360_91615618 *)Library::DKW::LIB::FUN_006aac10(param_5 * 2 + 9);
      *(char *)local_8 = param_3 + -0x80;
      local_8->field_0001 = param_7;
      local_8->field_0005 = param_5;
      iVar1 = FUN_00751140(param_4,param_5,&local_8->field_0x9,param_5 * 2);
      uVar2 = iVar1 + 9;
    }
    Library::DKW::DDX::FUN_006b7650(param_1,param_2,local_8,uVar2);
    if (local_8 != (AnonShape_00715360_91615618 *)0x0) {
      FreeAndNull(&local_8);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

