
undefined4 __thiscall thunk_FUN_004ceb00(void *this,undefined4 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  int aiStack_6c [5];
  int iStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char acStack_3a [15];
  undefined4 uStack_2b;
  int iStack_24;
  undefined2 auStack_20 [2];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_10 = 0;
  if (*(uint *)(DAT_00802a38 + 0xe4) <
      (uint)(*(int *)((int)this + 0x3cc) + *(int *)((int)this + 0x3d0))) {
    return 0;
  }
  *(uint *)((int)this + 0x3cc) = *(uint *)(DAT_00802a38 + 0xe4);
  switch(*(undefined4 *)((int)this + 0x4d0)) {
  case 1:
    switch(*(undefined4 *)((int)this + 0x5ac)) {
    case 0x32:
    case 0x5c:
      goto switchD_004ceb68_caseD_32;
    default:
      return 0;
    case 0x40:
    case 0x49:
      iVar4 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e');
      if (iVar4 != *(int *)(*(int *)((int)this + 0x1f5) + 0x20c)) {
        return uStack_10;
      }
switchD_004ceb68_caseD_32:
      *(undefined4 *)((int)this + 0x4dc) = 0;
      *(undefined4 *)((int)this + 0x4d0) = 2;
      return uStack_10;
    }
  case 2:
    iVar4 = thunk_FUN_004b31c0(*(int **)((int)this + 0x24),0);
    if (iVar4 == 0) {
      if (DAT_00811798 == (void *)0x0) {
        return uStack_10;
      }
      thunk_FUN_00621580(DAT_00811798,*(uint *)((int)this + 0x24),8);
      return uStack_10;
    }
    if ((*(int *)((int)this + 0x5ac) == 0x32) ||
       (iStack_14 = 1, *(int *)((int)this + 0x5ac) == 0x5c)) {
      iStack_14 = 2;
    }
    iStack_c = *(int *)((int)this + 0x5b4);
    iStack_1c = iStack_c + iStack_14;
    if (iStack_1c <= iStack_c) {
      return uStack_10;
    }
    iStack_18 = *(int *)((int)this + 0x5b0);
    iStack_14 = iStack_14 + iStack_18;
    do {
      if (iStack_18 < iStack_14) {
        sVar8 = *(short *)((int)this + 0x5b8) + 1;
        iStack_8 = iStack_18;
        do {
          sVar2 = (short)iStack_8;
          if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar5 = (short)iStack_c, sVar5 < 0)) ||
             (((DAT_007fb242 <= sVar5 || (sVar8 < 0)) ||
              ((DAT_007fb244 <= sVar8 ||
               (*(int *)(DAT_007fb248 +
                        ((int)sVar8 * (int)DAT_007fb246 + (int)DAT_007fb240 * (int)sVar5 +
                        (int)sVar2) * 8) == 0)))))) {
            *(int *)((int)this + 0x4e0) = iStack_8;
            *(undefined4 *)((int)this + 0x4dc) = 1;
            *(int *)((int)this + 0x4e4) = iStack_c;
            *(int *)((int)this + 0x4e8) = *(int *)((int)this + 0x5b8) + 1;
            if (DAT_00800bcc == (void *)0x0) {
              thunk_FUN_004cf430();
            }
            thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)((int)this + 0x4e0),
                               *(undefined4 *)((int)this + 0x4e4),*(undefined4 *)((int)this + 0x4e8)
                              );
            *(undefined4 *)((int)this + 0x4d0) = 3;
            *(undefined4 *)((int)this + 0x3d0) = 1;
            thunk_FUN_004cabb0(0);
            iVar4 = *(int *)((int)this + 0x5ac);
            if (iVar4 == 0x5c) {
              (**(code **)(*(int *)this + 0x90))(3,0x39b);
              return uStack_10;
            }
            if (iVar4 == 0x32) {
              iVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
              if ((char)iVar4 != '\x02') {
                (**(code **)(*(int *)this + 0x90))(3,0x1f9);
                return uStack_10;
              }
              (**(code **)(*(int *)this + 0x90))(3,0x2c1);
              return uStack_10;
            }
            if (iVar4 != 0x40) {
              if (iVar4 != 0x49) {
                return uStack_10;
              }
              (**(code **)(*(int *)this + 0x90))(3,800);
              return uStack_10;
            }
            (**(code **)(*(int *)this + 0x90))(3,0x254);
            return uStack_10;
          }
          iStack_8 = iStack_8 + 1;
        } while (iStack_8 < iStack_14);
      }
      iStack_c = iStack_c + 1;
      if (iStack_1c <= iStack_c) {
        return uStack_10;
      }
    } while( true );
  case 3:
    if ((*(int *)((int)this + 0x5ac) == 0x32) || (iVar4 = 1, *(int *)((int)this + 0x5ac) == 0x5c)) {
      iVar4 = 2;
    }
    iVar3 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\t');
    if ((*(int *)(*(int *)((int)this + 0x1f5) + 0x154) + iVar4 <= iVar3) &&
       ((*(uint *)(*(int *)((int)this + 0x5ff) + 0x1c) & 0x4000) == 0)) {
      thunk_FUN_004d0310((int)this);
    }
    iVar4 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e');
    if (iVar4 != *(int *)(*(int *)((int)this + 0x1f5) + 0x20c)) {
      return uStack_10;
    }
    thunk_FUN_004d0a80(DAT_00800bcc,*(int *)((int)this + 0x4e0),*(int *)((int)this + 0x4e4),
                       *(int *)((int)this + 0x4e8));
    iVar4 = 0x11;
    piVar10 = aiStack_6c;
    while( true ) {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    *(undefined1 *)piVar10 = 0;
    *(undefined4 *)((int)this + 0x4dc) = 0;
    thunk_FUN_004ce9e0(this,&iStack_8,&iStack_c,(int *)auStack_20);
    uStack_50 = *(undefined2 *)((int)this + 0x4e0);
    aiStack_6c[3] = 1;
    aiStack_6c[2] = 1;
    aiStack_6c[1] = *(int *)((int)this + 0x24);
    uStack_54 = param_1;
    uStack_4e = *(undefined2 *)((int)this + 0x4e4);
    uStack_4c = *(undefined2 *)((int)this + 0x4e8);
    uStack_4a = (undefined2)iStack_8;
    uStack_46 = auStack_20[0];
    uStack_48 = (undefined2)iStack_c;
    uStack_44 = *(undefined2 *)((int)this + 0x32);
    aiStack_6c[0] = 0x14;
    uStack_42 = 0xfffe;
    if (-1 < *(int *)((int)this + 0x371)) {
      uStack_42 = (undefined2)*(int *)((int)this + 0x371);
    }
    uVar6 = 0xffffffff;
    if (*(int *)((int)this + 0x42c) == 0) {
      uStack_3c = 0xffff;
      uStack_3e = 0xffff;
      uStack_40 = 0xffff;
    }
    else {
      uStack_40 = *(undefined2 *)((int)this + 0x430);
      uStack_3e = *(undefined2 *)((int)this + 0x434);
      uStack_3c = *(undefined2 *)((int)this + 0x438);
    }
    iStack_58 = aiStack_6c[1];
    if (*(int *)((int)this + 0x379) != 0xff) {
      iStack_58 = *(int *)((int)this + 0x379);
    }
    pcVar9 = (char *)((int)this + 0x37d);
    do {
      pcVar11 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar11 + -uVar6;
    pcVar11 = acStack_3a;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uStack_2b = *(undefined4 *)((int)this + 0x375);
    thunk_FUN_0054cc20(0x14,0,&iStack_24,aiStack_6c,0);
    *(undefined4 *)((int)this + 0x4d4) = *(undefined4 *)(iStack_24 + 0x18);
    *(undefined4 *)((int)this + 0x4d8) = 0;
    if (*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
    goto LAB_004cf029;
    thunk_FUN_0052af50(0,*(float *)((int)this + 0x1f9),*(float *)((int)this + 0x1fd));
    uVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    uVar6 = uVar6 & 0xff;
    if (uVar6 == 1) {
      iVar4 = *(int *)this;
      uVar12 = 0x65;
    }
    else {
      if (uVar6 == 2) {
        (**(code **)(*(int *)this + 0x90))(6,0x66);
        goto LAB_004cf029;
      }
      if (uVar6 != 3) goto LAB_004cf029;
      iVar4 = *(int *)this;
      uVar12 = 0x67;
    }
    (**(code **)(iVar4 + 0x90))(6,uVar12);
LAB_004cf029:
    *(undefined4 *)((int)this + 0x4d0) = 4;
    *(undefined4 *)((int)this + 0x3d0) = 5;
    thunk_FUN_004cabb0(1);
    thunk_FUN_004cbf70((int)this);
    return uStack_10;
  case 4:
    if (*(int *)((int)this + 0x4d8) == 0) {
      return 0;
    }
    iVar4 = *(int *)((int)this + 0x5ac);
    switch(iVar4) {
    case 0x32:
    case 0x5c:
      *(undefined4 *)((int)this + 0x4d0) = 5;
      *(undefined4 *)((int)this + 0x3d0) = 1;
      if (iVar4 == 0x5c) {
        (**(code **)(*(int *)this + 0x90))(3,0x39c);
      }
      else if (iVar4 == 0x32) {
        iVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
        if ((char)iVar4 == '\x02') {
          (**(code **)(*(int *)this + 0x90))(3,0x2c2);
        }
        else {
          (**(code **)(*(int *)this + 0x90))(3,0x1fa);
        }
      }
      else if (iVar4 == 0x40) {
        (**(code **)(*(int *)this + 0x90))(3,0x255);
      }
      else if (iVar4 == 0x49) {
        (**(code **)(*(int *)this + 0x90))(3,0x321);
      }
      break;
    case 0x40:
    case 0x49:
switchD_004cf07f_caseD_40:
      *(undefined4 *)((int)this + 0x4d0) = 0;
      uStack_10 = 1;
    }
    break;
  case 5:
    iVar4 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e');
    if (iVar4 != *(int *)(*(int *)((int)this + 0x1f5) + 0x20c)) {
      return uStack_10;
    }
    *(undefined4 *)((int)this + 0x3d0) = 5;
    if ((*(int *)((int)this + 0x5ac) == 0x32) || (*(int *)((int)this + 0x5ac) == 0x5c))
    goto switchD_004cf07f_caseD_40;
    break;
  default:
    goto switchD_004ceb47_default;
  }
  thunk_FUN_004cabb0(1);
switchD_004ceb47_default:
  return uStack_10;
}

