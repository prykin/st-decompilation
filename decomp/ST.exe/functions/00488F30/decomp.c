
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetInfo16 */

void __thiscall STBoatC::GetInfo16(STBoatC *this,uint *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  
  puVar6 = param_1;
  for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  uVar3 = thunk_FUN_004406c0((char)this[0x24]);
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),5);
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (int)(short)uVar4 << 0x10 | 5;
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),4);
    param_1[0xc] = (int)(short)uVar4 << 0x10 | 4;
LAB_00489086:
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    if (uVar3 == 2) {
      uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x82);
      *(undefined1 *)(param_1 + 2) = 1;
      *param_1 = (int)(short)uVar4 << 0x10 | 0x82;
      uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x81);
      param_1[0xc] = (int)(short)uVar4 << 0x10 | 0x81;
      goto LAB_00489086;
    }
    if (uVar3 != 3) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x44ca,0,0,&DAT_007a4ccc,
                                 s_STBoatC__GetInfo16_invalid_civ_007ab94c);
      if (iVar5 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x6d);
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (int)(short)uVar4 << 0x10 | 0x6d;
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x65);
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[0xc] = (int)(short)uVar4 << 0x10 | 0x65;
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x4e);
    *(undefined1 *)(param_1 + 0x1a) = 1;
    param_1[0x18] = (int)(short)uVar4 << 0x10 | 0x4e;
  }
  iVar5 = 3;
  if (uVar3 == 0) goto LAB_00489222;
  if (uVar3 < 3) {
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),10);
    if (0 < (short)uVar4) {
      iVar5 = 4;
      param_1[0x24] = (int)(short)uVar4 << 0x10 | 10;
      *(undefined1 *)(param_1 + 0x26) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x1b);
    if (0 < (short)uVar4) {
      iVar2 = iVar5 * 0xc;
      iVar5 = iVar5 + 1;
      param_1[iVar2] = (int)(short)uVar4 << 0x10 | 0x1b;
      *(undefined1 *)(param_1 + iVar2 + 2) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x24);
    if (0 < (short)uVar4) {
      iVar2 = iVar5 * 0xc;
      iVar5 = iVar5 + 1;
      param_1[iVar2] = (int)(short)uVar4 << 0x10 | 0x24;
      *(undefined1 *)(param_1 + iVar2 + 2) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x2d);
    if ((short)uVar4 < 1) goto LAB_00489222;
    uVar3 = (int)(short)uVar4 << 0x10 | 0x2d;
  }
  else {
    if (uVar3 != 3) goto LAB_00489222;
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x66);
    if (0 < (short)uVar4) {
      iVar5 = 4;
      param_1[0x24] = (int)(short)uVar4 << 0x10 | 0x66;
      *(undefined1 *)(param_1 + 0x26) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x67);
    if (0 < (short)uVar4) {
      iVar2 = iVar5 * 0xc;
      iVar5 = iVar5 + 1;
      param_1[iVar2] = (int)(short)uVar4 << 0x10 | 0x67;
      *(undefined1 *)(param_1 + iVar2 + 2) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x68);
    if (0 < (short)uVar4) {
      iVar2 = iVar5 * 0xc;
      iVar5 = iVar5 + 1;
      param_1[iVar2] = (int)(short)uVar4 << 0x10 | 0x68;
      *(undefined1 *)(param_1 + iVar2 + 2) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x6a);
    if ((short)uVar4 < 1) goto LAB_00489222;
    uVar3 = (int)(short)uVar4 << 0x10 | 0x6a;
  }
  param_1[iVar5 * 0xc] = uVar3;
  *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
LAB_00489222:
  iVar5 = 9;
  switch(*(undefined4 *)(this + 0x6f7)) {
  case 1:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0xb);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0xb;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x97);
    if (0 < (short)uVar4) {
      param_1[iVar5 * 0xc] = (int)(short)uVar4 << 0x10 | 0x97;
      *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
      return;
    }
    break;
  case 2:
  case 3:
  case 6:
  case 0xb:
  case 0x26:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),6);
    if (0 < (short)uVar4) {
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 6;
      *(undefined1 *)(param_1 + 0x6e) = 1;
      return;
    }
    break;
  case 5:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x3c);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x3c;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x9a);
    if (0 < (short)uVar4) {
      iVar2 = iVar5 * 0xc;
      iVar5 = iVar5 + 1;
      param_1[iVar2] = (int)(short)uVar4 << 0x10 | 0x9a;
      *(undefined1 *)(param_1 + iVar2 + 2) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),6);
    if (0 < (short)uVar4) {
      param_1[iVar5 * 0xc] = (int)(short)uVar4 << 0x10 | 6;
      *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
      return;
    }
    break;
  case 0xd:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x83);
    if (0 < (short)uVar4) {
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x83;
      *(undefined1 *)(param_1 + 0x6e) = 1;
      return;
    }
    break;
  case 0xe:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x95);
    if (0 < (short)uVar4) {
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x95;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    break;
  case 0xf:
  case 0x12:
  case 0x17:
  case 0x27:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x3a);
    if (0 < (short)uVar4) {
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x3a;
      *(undefined1 *)(param_1 + 0x6e) = 1;
      return;
    }
    break;
  case 0x11:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x91);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x91;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x41);
    if (0 < (short)uVar4) {
      param_1[iVar5 * 0xc] = (int)(short)uVar4 << 0x10 | 0x41;
      *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
      return;
    }
    break;
  case 0x16:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x3a);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x3a;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x92);
    if (0 < (short)uVar4) {
      param_1[iVar5 * 0xc] = (int)(short)uVar4 << 0x10 | 0x92;
      *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
      return;
    }
    break;
  case 0x1c:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x7d);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x7d;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x7e);
    if (0 < (short)uVar4) {
      param_1[iVar5 * 0xc] = (int)(short)uVar4 << 0x10 | 0x7e;
      *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
      return;
    }
    break;
  case 0x1e:
  case 0x22:
  case 0x28:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x7a);
    if (0 < (short)uVar4) {
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x7a;
      *(undefined1 *)(param_1 + 0x6e) = 1;
      return;
    }
    break;
  case 0x21:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x4b);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x4b;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x4c);
    if (0 < (short)uVar4) {
      iVar2 = iVar5 * 0xc;
      iVar5 = iVar5 + 1;
      param_1[iVar2] = (int)(short)uVar4 << 0x10 | 0x4c;
      *(undefined1 *)(param_1 + iVar2 + 2) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x76);
    if (0 < (short)uVar4) {
      param_1[iVar5 * 0xc] = (int)(short)uVar4 << 0x10 | 0x76;
      *(undefined1 *)(param_1 + iVar5 * 0xc + 2) = 1;
      return;
    }
    break;
  case 0x23:
    uVar4 = thunk_FUN_004e60d0(*(int *)(this + 0x24),0x69);
    if (0 < (short)uVar4) {
      param_1[0x6c] = (int)(short)uVar4 << 0x10 | 0x69;
      *(undefined1 *)(param_1 + 0x6e) = 1;
      return;
    }
  }
  return;
}

