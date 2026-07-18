
void __thiscall thunk_FUN_00494160(void *this,int param_1)

{
  void *pvVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  iVar6 = *(int *)((int)this + 0x6f7);
  if (iVar6 != 0x16) {
    if (iVar6 == 0x23) {
      if (param_1 == *(int *)((int)this + 0x72e)) {
        return;
      }
      if (param_1 == 1) {
        if (*(int *)((int)this + 0x722) < 1) {
          return;
        }
        *(undefined4 *)((int)this + 0x72e) = 1;
        (**(code **)(*(int *)this + 0x90))(3,0x16c);
        return;
      }
      *(undefined4 *)((int)this + 0x72e) = 0;
      (**(code **)(*(int *)this + 0x90))(3,0x16d);
      return;
    }
    if (iVar6 != 0x25) {
      return;
    }
  }
  if (param_1 == *(int *)((int)this + 0x732)) {
    return;
  }
  if (param_1 != 1) {
    *(undefined4 *)((int)this + 0x732) = 0;
    (**(code **)(*(int *)this + 0x90))(3,0x16d);
    return;
  }
  if (*(int *)((int)this + 0x726) < 1) {
    return;
  }
  *(undefined4 *)((int)this + 0x732) = 1;
  puVar7 = (undefined4 *)((int)this + 0x74e);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  thunk_FUN_004945c0(this);
  bVar2 = *(byte *)((int)this + 0x24);
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == bVar2) {
LAB_004942e7:
      iVar6 = 0;
    }
    else {
      uVar5 = (uint)DAT_0080874d;
      uVar4 = (uint)bVar2;
      cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4);
      if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5) == '\0')) {
        iVar6 = -2;
      }
      else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5) == '\0')) {
        iVar6 = -1;
      }
      else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5) == '\x01')) {
        iVar6 = 1;
      }
      else {
        if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5) != '\x01'))
        goto LAB_004942e7;
        iVar6 = 2;
      }
    }
    bVar8 = iVar6 < 0;
  }
  else {
    bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
  }
  if (!bVar8) {
    if (DAT_00808a8f == '\0') {
      if (bVar2 == DAT_0080874d) {
LAB_004943a0:
        iVar6 = 0;
      }
      else {
        uVar4 = (uint)bVar2;
        uVar5 = (uint)DAT_0080874d;
        cVar3 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
        if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
          iVar6 = -2;
        }
        else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
          iVar6 = -1;
        }
        else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
          iVar6 = 1;
        }
        else {
          if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01'))
          goto LAB_004943a0;
          iVar6 = 2;
        }
      }
      bVar8 = iVar6 < 0;
    }
    else {
      bVar8 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)bVar2 * 0x51];
    }
    if (!bVar8) {
      pvVar1 = (void *)((int)this + 0x1d5);
      thunk_FUN_004ace60(pvVar1,'\x0e');
      thunk_FUN_004ace60(pvVar1,'\r');
      thunk_FUN_004ace60(pvVar1,'\f');
      thunk_FUN_004aceb0(pvVar1,'\x01');
      thunk_FUN_004aceb0(pvVar1,'\x02');
      thunk_FUN_004aceb0(pvVar1,'\0');
      thunk_FUN_004aceb0(pvVar1,'\x0f');
      thunk_FUN_004aceb0(pvVar1,'\v');
      thunk_FUN_004aceb0(pvVar1,'\n');
      thunk_FUN_004aceb0(pvVar1,'\t');
      thunk_FUN_004aceb0(pvVar1,'\b');
      *(undefined4 *)((int)this + 0x746) = 0;
      goto LAB_00494498;
    }
  }
  pvVar1 = (void *)((int)this + 0x1d5);
  thunk_FUN_004ace60(pvVar1,'\x0e');
  thunk_FUN_004ace60(pvVar1,'\r');
  thunk_FUN_004ace60(pvVar1,'\f');
  thunk_FUN_004ace60(pvVar1,'\x01');
  thunk_FUN_004ace60(pvVar1,'\x02');
  thunk_FUN_004ace60(pvVar1,'\0');
  thunk_FUN_004ace60(pvVar1,'\x0f');
  thunk_FUN_004ace60(pvVar1,'\v');
  thunk_FUN_004ace60(pvVar1,'\n');
  thunk_FUN_004ace60(pvVar1,'\t');
  thunk_FUN_004ace60(pvVar1,'\b');
  *(undefined4 *)((int)this + 0x746) = 1;
LAB_00494498:
  (**(code **)(*(int *)this + 0x90))(3,0x16c);
  return;
}

